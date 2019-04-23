package com.via.z.navegar;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.Spinner;


public class TercerActivity extends Activity {
    private Spinner spinner1, spinner2;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.tercer_activity);
        botonsegunda();
        cargarSpinner();

    }

    private void botonsegunda(){

        Button accionregresar = (Button) findViewById(R.id.bsegunda);
        accionregresar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(TercerActivity.this, SegundaActivity.class));
            }
            });
    }

    public void cargarSpinner(){

        spinner1 = (Spinner) findViewById(R.id.spinner1);
        spinner2 = (Spinner) findViewById(R.id.spinner2);

        ArrayAdapter<CharSequence> adaptador =  ArrayAdapter.createFromResource
                (this, R.array.boletos_array, android.R.layout.simple_spinner_item);
        ArrayAdapter<CharSequence> adaptador2 =  ArrayAdapter.createFromResource
                (this, R.array.pelicula_arrays, android.R.layout.simple_spinner_item);

        adaptador.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.spinner1.setAdapter(adaptador);
        adaptador2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.spinner2.setAdapter(adaptador2);

    }

}