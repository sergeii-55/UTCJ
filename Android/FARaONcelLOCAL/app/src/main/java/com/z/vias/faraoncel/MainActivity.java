package com.z.vias.faraoncel;

import android.content.Intent;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.widget.EditText;
import android.widget.ImageButton;
import android.widget.Toast;

import org.json.JSONArray;

import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {

    ImageButton btnIngresar;
    EditText txtUsu, txtPas;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        txtUsu = (EditText) findViewById(R.id.etuser);
        txtPas = (EditText) findViewById(R.id.etpass);
        btnIngresar = (ImageButton) findViewById(R.id.b_ENTER);
        btnIngresar.setOnClickListener(this);
    }

    @Override
    public void onClick(View v) {
        Thread tr = new Thread() {
            @Override
            public void run() {
                final String resultado = enviarDatosGET(txtUsu.getText().toString(),
                        txtPas.getText().toString());
                runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        int r = obtDatosJSON(resultado);
                        if (r > 0) {
                            Toast.makeText(getApplicationContext(), "Autenticación Correcta", Toast.LENGTH_LONG).show();
                            Intent i = new Intent(getApplicationContext(), principal.class);
                            i.putExtra("cod", txtUsu.getText().toString());
                            startActivity(i);
                        } else {
                            Toast.makeText(getApplicationContext(), "usuario o password incorrectos",
                                    Toast.LENGTH_LONG).show();
                        }
                    }
                });
            }

        };
        tr.start();
    }

    //se crean las variables que se van a comparar con la base de datos
    public String enviarDatosGET(String user, String pass) {

        URL url = null;
        String linea = "";
        int respuesta = 0;
        StringBuilder resul = null;

        try {
            url = new URL("http://aosystems.com.mx/arduinoms/login.php?nombre=" + user + "&password=" + pass);
            HttpURLConnection connection = (HttpURLConnection) url.openConnection();
            respuesta = connection.getResponseCode();

            resul = new StringBuilder();
            if (respuesta == HttpURLConnection.HTTP_OK) {
                InputStream in = new BufferedInputStream(connection.getInputStream());
                BufferedReader reader = new BufferedReader(new InputStreamReader(in));

                while ((linea = reader.readLine()) != null) {
                    resul.append(linea);
                }
            }

        } catch (Exception e) {
        }

        return resul.toString();
    }

    public int obtDatosJSON(String response) {
        int res = 0;
        try {
            JSONArray json = new JSONArray(response);
            if (json.length() > 0) {
                res = 1;
            }
        } catch (Exception e) {
        }
        return res;
    }
}