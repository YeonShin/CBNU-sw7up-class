package com.example.hw02;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.graphics.drawable.BitmapDrawable;
import android.net.Uri;
import android.os.Bundle;
import android.renderscript.ScriptGroup;
import android.view.View;
import android.widget.CheckBox;
import android.widget.Toast;

import com.example.hw02.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity {

    private ActivityMainBinding binding;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());


        binding.btnComple.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (binding.chkSel.isChecked()) {
                    if(binding.radioDog.isChecked()) {
                        binding.ivAnimal.setImageResource(R.drawable.dog);
                    }
                    else if(binding.radioCat.isChecked()){
                        binding.ivAnimal.setImageResource(R.drawable.cat);
                    }
                    else {
                        binding.ivAnimal.setImageResource(R.drawable.rabbit);
                    }

                }
                else {
                    Toast.makeText(MainActivity.this, "시작함을 먼저 체크해주세요", Toast.LENGTH_SHORT).show();
                }
            }
        });
    }


}