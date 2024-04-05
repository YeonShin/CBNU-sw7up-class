package com.example.hw03;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.MotionEvent;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

import com.example.hw03.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity {

    private ActivityMainBinding binding;
    String num1, num2;
    Integer result;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());

        Button[] numBtns = {binding.BtnNum0, binding.BtnNum1, binding.BtnNum2, binding.BtnNum3, binding.BtnNum4,
                binding.BtnNum5, binding.BtnNum6, binding.BtnNum7, binding.BtnNum8, binding.BtnNum9,};

        setTitle("그리드레이아웃 계산기");

        for (int i = 0; i < numBtns.length; i++) {
            final int index = i;

            numBtns[index].setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View v) {
                    if (binding.et1.isFocused() == true) {
                        num1 = binding.et1.getText().toString()
                                + numBtns[index].getText().toString();
                        binding.et1.setText(num1);
                    } else if (binding.et2.isFocused() == true) {
                        num2 = binding.et2.getText().toString()
                                + numBtns[index].getText().toString();
                        binding.et2.setText(num2);
                    } else {
                        Toast.makeText(getApplicationContext(), "먼저 에디트텍스트를 선택하세요", Toast.LENGTH_SHORT).show();
                    }
                }
            });


        }

        binding.BtnAdd.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                num1 = binding.et1.getText().toString();
                num2 = binding.et2.getText().toString();
                result = Integer.parseInt(num1) + Integer.parseInt(num2);
                binding.tvResult.setText("계산 결과 : " + result.toString());
                return false;
            }
        });
        binding.BtnSub.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                num1 = binding.et1.getText().toString();
                num2 = binding.et2.getText().toString();
                result = Integer.parseInt(num1) - Integer.parseInt(num2);
                binding.tvResult.setText("계산 결과 : " + result.toString());

                return false;
            }
        });
        binding.BtnMul.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                num1 = binding.et1.getText().toString();
                num2 = binding.et2.getText().toString();
                result = Integer.parseInt(num1) * Integer.parseInt(num2);
                binding.tvResult.setText("계산 결과 : " + result.toString());

                return false;
            }
        });
        binding.BtnDiv.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                num1 = binding.et1.getText().toString();
                num2 = binding.et2.getText().toString();
                result = Integer.parseInt(num1) / Integer.parseInt(num2);
                binding.tvResult.setText("계산 결과 : " + result.toString());

                return false;
            }
        });
    }
}