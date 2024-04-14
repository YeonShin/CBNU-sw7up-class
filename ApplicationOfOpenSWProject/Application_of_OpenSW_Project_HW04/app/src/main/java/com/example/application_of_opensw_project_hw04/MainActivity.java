package com.example.application_of_opensw_project_hw04;

import androidx.appcompat.app.AppCompatActivity;

import android.app.TabActivity;
import android.os.Bundle;
import android.widget.TabHost;
import android.widget.TabHost.TabSpec;

import com.example.application_of_opensw_project_hw04.databinding.ActivityMainBinding;

@SuppressWarnings("deprecation")
public class MainActivity extends TabActivity {

    private ActivityMainBinding binding;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());

        TabHost tabHost = getTabHost();

        TabSpec tabSpecDog = tabHost.newTabSpec("Dog").setIndicator("강아지");
        tabSpecDog.setContent(R.id.iv_dog);
        tabHost.addTab(tabSpecDog);

        TabSpec tabSpecCat = tabHost.newTabSpec("Cat").setIndicator("고양이");
        tabSpecCat.setContent(R.id.iv_cat);
        tabHost.addTab(tabSpecCat);

        TabSpec tabSpecRabbit = tabHost.newTabSpec("Rabbit").setIndicator("토끼");
        tabSpecRabbit.setContent(R.id.iv_rabbit);
        tabHost.addTab(tabSpecRabbit);

        TabSpec tabSpecLion = tabHost.newTabSpec("Lion").setIndicator("사자");
        tabSpecLion.setContent(R.id.iv_lion);
        tabHost.addTab(tabSpecLion);
        tabHost.setCurrentTab(0);
    }
}