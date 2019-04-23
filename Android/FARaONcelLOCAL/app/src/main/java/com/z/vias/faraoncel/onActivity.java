package com.z.vias.faraoncel;

import android.content.Intent;
import android.os.Bundle;
import android.support.v4.content.ContextCompat;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.widget.ImageButton;
import android.widget.Toast;

import org.json.JSONObject;

import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;

public class onActivity extends AppCompatActivity {
    String estado;
    String estado2;

    public String consultarEstadoLight(){
        URL url = null;
        String linea = "";
        int respuesta = 0;
        StringBuilder resul = null;

        try {
            url = new URL("http://aosystems.com.mx/arduinoms/consultar_estado.php?nombre=mario&password=123");
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
    public void setEstado(String estado)
    {
        this.estado = estado;
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.act_on);

        Thread tr = new Thread() {
            @Override
            public void run() {

                final String resultado = consultarEstadoLight();
                setEstado(resultado);

                runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        final int r  = obtDatosJSON( resultado );
                        ImageButton button = (ImageButton) findViewById(R.id.image_light);
                        int icon=0;
                        if (r == 0) {
                            icon = R.drawable.dev_light_off;
                        } else if (r==1){
                            icon = R.drawable.dev_light_on;
                        }
                        button.setImageDrawable(ContextCompat.getDrawable(getApplicationContext(), icon));

                    }
                });
            }

        };

        /*--------------------------------------------------------------------------*/
        Thread tr2 = new Thread() {
            @Override
            public void run() {

                final String resultado2 = consultarEstadoCoffee();
                setEstado(resultado2);

                runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        final int r2  = obtDatosJSON2( resultado2 );
                        ImageButton button2 = (ImageButton) findViewById(R.id.image_coffee);
                        int icon2=0;
                        if (r2 == 0) {
                            icon2 = R.drawable.dev_coffee_off;
                        } else if (r2==1){
                            icon2 = R.drawable.dev_coffee_on;
                        }
                        button2.setImageDrawable(ContextCompat.getDrawable(getApplicationContext(), icon2));

                    }
                });
            }

        };
        /*---------------------------------------------------------*/

        tr.start();
        tr2.start();
        botonREG();
    }

    public int obtDatosJSON(String response) {
        int res = 0;

        try {

            JSONObject j= new JSONObject(response);//{maq01:0}
            String str = (String)j.get("maq01");// Toast.makeText(getApplicationContext(), ":::JSON:"+str, Toast.LENGTH_LONG).show();
            return Integer.parseInt(str);
        } catch (Exception e) {
            Toast.makeText(getApplicationContext(), ""+e, Toast.LENGTH_LONG).show();
        }
        return res;
    }

    public void buttonPressed(final View view) {

        Thread tr = new Thread() {
            @Override
            public void run() {

                final String resultado = enviarDatosGET("mario", "123");
                final int r = obtDatosJSON(resultado);

                runOnUiThread(new Runnable() {
                    @Override
                    public void run() {

                        ImageButton button = (ImageButton) view;
                        int icon=0;
                        if (r == 0) {
                            Toast.makeText(getApplicationContext(), "A P A G A D O", Toast.LENGTH_LONG).show();
                            icon = R.drawable.dev_light_off;
                        } else if (r==1){
                            Toast.makeText(getApplicationContext(), "P R E N D I D O", Toast.LENGTH_LONG).show();
                            icon = R.drawable.dev_light_on;
                        }
                        button.setImageDrawable(ContextCompat.getDrawable(getApplicationContext(), icon));
                    }
                });
            }

        };
        tr.start();


    }

    public String enviarDatosGET(String user, String pass) {

        URL url = null;
        String linea = "";
        int respuesta = 0;
        StringBuilder resul = null;

        try {
            url = new URL("http://aosystems.com.mx/arduinoms/estado.php?nombre=" + user + "&password=" + pass);
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


    /* empieza el proceso del coffee (aire) */

    public String consultarEstadoCoffee(){
        URL url2 = null;
        String linea2 = "";
        int respuesta2 = 0;
        StringBuilder resul2 = null;

        try {
            url2 = new URL("http://aosystems.com.mx/arduinoms/consultar_estado2.php?nombre=mario&password=123");
            HttpURLConnection connection = (HttpURLConnection) url2.openConnection();
            respuesta2 = connection.getResponseCode();

            resul2 = new StringBuilder();
            if (respuesta2 == HttpURLConnection.HTTP_OK) {
                InputStream in = new BufferedInputStream(connection.getInputStream());
                BufferedReader reader = new BufferedReader(new InputStreamReader(in));

                while ((linea2 = reader.readLine()) != null) {
                    resul2.append(linea2);
                }
            }

        } catch (Exception e) {

        }

        return resul2.toString();
    }
    public void setEstado2(String estado2)
    {
        this.estado2 = estado2;
    }

    public int obtDatosJSON2(String response2) {
        int res2 = 0;

        try {

            JSONObject j2= new JSONObject(response2);//{maq02:0}
            String str2 = (String)j2.get("maq02");// Toast.makeText(getApplicationContext(), ":::JSON:"+str, Toast.LENGTH_LONG).show();
            return Integer.parseInt(str2);
        } catch (Exception e) {
            Toast.makeText(getApplicationContext(), ""+e, Toast.LENGTH_LONG).show();
        }
        return res2;
    }

    public void buttonPressed2(final View view) {

        Thread tr2 = new Thread() {
            @Override
            public void run() {

                final String resultado2 = enviarDatosGET2("mario", "123");
                final int r2 = obtDatosJSON2(resultado2);

                runOnUiThread(new Runnable() {
                    @Override
                    public void run() {

                        ImageButton button2 = (ImageButton) view;
                        int icon2=0;
                        if (r2 == 0) {
                            Toast.makeText(getApplicationContext(), "A P A G A D O", Toast.LENGTH_LONG).show();
                            icon2 = R.drawable.dev_coffee_off;
                        } else if (r2==1){
                            Toast.makeText(getApplicationContext(), "P R E N D I D O", Toast.LENGTH_LONG).show();
                            icon2 = R.drawable.dev_coffee_on;
                        }
                        button2.setImageDrawable(ContextCompat.getDrawable(getApplicationContext(), icon2));
                    }
                });
            }

        };
        tr2.start();


    }

    public String enviarDatosGET2(String user, String pass) {

        URL url2 = null;
        String linea2 = "";
        int respuesta2 = 0;
        StringBuilder resul2 = null;

        try {
            url2 = new URL("http://aosystems.com.mx/arduinoms/estado2.php?nombre=" + user + "&password=" + pass);
            HttpURLConnection connection = (HttpURLConnection) url2.openConnection();
            respuesta2 = connection.getResponseCode();

            resul2 = new StringBuilder();
            if (respuesta2 == HttpURLConnection.HTTP_OK) {
                InputStream in = new BufferedInputStream(connection.getInputStream());
                BufferedReader reader = new BufferedReader(new InputStreamReader(in));

                while ((linea2 = reader.readLine()) != null) {
                    resul2.append(linea2);
                }
            }

        } catch (Exception e) {
        }

        return resul2.toString();
    }

    /* termina el proceso del coffee (aire) */

    private void botonREG() {
        ImageButton accionREG = (ImageButton) findViewById(R.id.b_reg);
        accionREG.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(onActivity.this, principal.class));
            }
        });
    }

}
