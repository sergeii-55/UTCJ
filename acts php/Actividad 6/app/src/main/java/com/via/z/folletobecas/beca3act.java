package com.via.z.folletobecas;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class beca3act extends Activity{
    @Override
    protected void onCreate(Bundle savedInstanceState){
        super.onCreate(savedInstanceState);
        setContentView(R.layout.beca3act);
        botonregresa();
        botoninicio();
        botonavanzar();
    }

    private void botonregresa(){
        Button accioninicio = (Button) findViewById(R.id.breg);
        accioninicio.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(beca3act.this, beca2act.class));}});
    }

    private void botoninicio(){
        Button accioninicio = (Button) findViewById(R.id.bini);
        accioninicio.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(beca3act.this, MainActivity.class));}});
    }

    private void botonavanzar(){
        Button accionavanza = (Button) findViewById(R.id.bsig);
        accionavanza.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(beca3act.this, beca4act.class));}});
    }

}
