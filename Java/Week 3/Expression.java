package Experiment3;


import java.util.Scanner;

public class Expression {
    public static void print(String str) {
        System.out.print(str);
    }

    public static void main(String[] args) {
        int a= 0,b=0,c=0;
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter Value of A B C: ");
        a = scan.nextInt();
        b = scan.nextInt();
        c = scan.nextInt();

        System.out.println(a|4 + c >> b & 7);
    }
}