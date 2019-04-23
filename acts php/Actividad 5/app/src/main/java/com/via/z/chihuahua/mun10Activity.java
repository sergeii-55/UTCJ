package com.via.z.chihuahua;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class mun10Activity extends Activity{
    @Override
    protected void onCreate(Bundle savedInstanceState){
        super.onCreate(savedInstanceState);
        setContentView(R.layout.mun10_layout);
        botonregresar();
        botoninicio();
        botonavanzar();
    }

    private void botonregresar(){
        Button accionregresar = (Button) findViewById(R.id.batras);
        accionregresar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(mun10Activity.this, mun9Activity.class));}});
    }

    private void botoninicio(){
        Button accioninicio = (Button) findViewById(R.id.bini);
        accioninicio.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(mun10Activity.this, MainActivity.class));}});
    }

    private void botonavanzar(){
        Button accionavanza = (Button) findViewById(R.id.bsig);
        accionavanza.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(mun10Activity.this, credActivity.class));}});
    }

}
