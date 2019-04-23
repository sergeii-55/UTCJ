package com.via.z.folletobecas;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        bentrar();
        bcredito();
    }

    private void bentrar() {
        Button accionentrar = (Button) findViewById(R.id.bEntrar);
        accionentrar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(MainActivity.this, beca1act.class));
            }
        });
    }

    private void bcredito(){
        Button accionentrar = (Button) findViewById(R.id.bCredito);
        accionentrar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(MainActivity.this, credito_Act.class));
            }
        });
    }
}