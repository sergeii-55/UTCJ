package com.via.z.chihuahua;

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
        botonentrar();
    }

    private void botonentrar(){
        Button accionentrar = (Button) findViewById(R.id.bEntrar);
        accionentrar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(MainActivity.this, mun1Activity.class));
            }
        });
    }
}