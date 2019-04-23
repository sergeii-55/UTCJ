package com.via.z.chihuahua;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class mun2Activity extends Activity{
    @Override
    protected void onCreate(Bundle savedInstanceState){
        super.onCreate(savedInstanceState);
        setContentView(R.layout.mun2_layout);
        botonregresar();
        botoninicio();
        botonavanzar();
    }

    private void botonregresar(){
        Button accionregresar = (Button) findViewById(R.id.batras2);
        accionregresar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(mun2Activity.this, mun1Activity.class));}});
    }

    private void botoninicio(){
        Button accioninicio = (Button) findViewById(R.id.bini2);
        accioninicio.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(mun2Activity.this, MainActivity.class));}});
    }

    private void botonavanzar(){
        Button accionavanza = (Button) findViewById(R.id.bsig2);
        accionavanza.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(mun2Activity.this, mun3Activity.class));}});
    }

}
