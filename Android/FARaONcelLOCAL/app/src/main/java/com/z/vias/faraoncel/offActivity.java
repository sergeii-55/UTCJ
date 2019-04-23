package com.z.vias.faraoncel;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageButton;

public class offActivity extends Activity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.act_off);
        botonREG();
    }
    private void botonREG(){
        ImageButton accionON = (ImageButton) findViewById(R.id.b_reg);
        accionON.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(offActivity.this, principal.class));}});
    }
}