package com.via.z.folletobecas;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class beca4act extends Activity{
    @Override
    protected void onCreate(Bundle savedInstanceState){
        super.onCreate(savedInstanceState);
        setContentView(R.layout.beca4act);
        botonregresa();
        botoninicio();
        botonavanzar();
    }

    private void botonregresa(){
        Button accioninicio = (Button) findViewById(R.id.breg);
        accioninicio.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(beca4act.this, beca3act.class));}});
    }

    private void botoninicio(){
        Button accioninicio = (Button) findViewById(R.id.bini);
        accioninicio.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(beca4act.this, MainActivity.class));}});
    }

    private void botonavanzar(){
        Button accionavanza = (Button) findViewById(R.id.bsig);
        accionavanza.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(beca4act.this, beca5act.class));}});
    }

}
