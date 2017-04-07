package Experiment3;

import java.util.Scanner;

public class MyClass {
    private static String meStatic = "I am Satic Variable";
    public static void main(String[] args) {
        String me = "I am Local Variable";
        DemoClass demoClass = new DemoClass();
        System.out.println(demoClass.me);

        TempClass tempClass = new TempClass();
        System.out.println(tempClass.me);
        System.out.println(meStatic);
        System.out.println(me);
    }
}

class TempClass {
    public String me = "I am Variable from different class";
}
