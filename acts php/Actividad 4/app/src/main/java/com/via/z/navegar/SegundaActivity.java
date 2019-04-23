package com.via.z.navegar;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class SegundaActivity extends Activity {
    @Override
    protected void onCreate(Bundle savedInstanceState){
        super.onCreate(savedInstanceState);
        setContentView(R.layout.segunda_activity);
        botonregresar();
        botonavanzar();
    }

    private void botonregresar(){
        Button accionregresar = (Button) findViewById(R.id.bregresar);
        accionregresar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(SegundaActivity.this, MainActivity.class));
            }
            });
    }

    private void botonavanzar() {
        Button accionavanza = (Button) findViewById(R.id.btercer);
        accionavanza.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(SegundaActivity.this, TercerActivity.class));
            }
            });
    }
}
