package com.example.sdklibrary;

public class SDK {
    //调用sdk库
    static {
        System.loadLibrary("sdk");
    }

    //调用sdk原生接口getString
    public static native String getString();

    //调用原生接口getAdd
    public static native int getAdd(int numOne, int numTwo);
}

