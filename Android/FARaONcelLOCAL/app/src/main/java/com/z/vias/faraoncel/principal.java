package com.z.vias.faraoncel;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageButton;

public class principal extends Activity {



    @Override
    protected void onCreate(Bundle savedInstanceState){
        super.onCreate(savedInstanceState);
        setContentView(R.layout.principal);
        botonON();
        botonOFF();
        botonMD();
        botonINFO();
        botonDEV();
    }



    private void botonON(){
        ImageButton accionON = (ImageButton) findViewById(R.id.b_on);
        accionON.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(principal.this, onActivity.class));
            }
        });
    }
    private void botonOFF(){
        ImageButton accionOFF = (ImageButton) findViewById(R.id.b_off);
        accionOFF.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(principal.this, offActivity.class));}});
    }
    private void botonMD(){
        ImageButton accionMD = (ImageButton) findViewById(R.id.b_md);
        accionMD.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(principal.this, misActivity.class));}});
    }
    private void botonINFO(){
        ImageButton accionINFO = (ImageButton) findViewById(R.id.b_info);
        accionINFO.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(principal.this, infoActivity.class));}});
    }
    private void botonDEV(){
        ImageButton accionDEV = (ImageButton) findViewById(R.id.b_dev);
        accionDEV.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(principal.this, devActivity.class));}});
    }
}
