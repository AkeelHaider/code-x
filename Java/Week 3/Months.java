package Experiment3;

import java.util.Scanner;

/**
 * Created by reezpatel on 3/11/2017.
 */
public class Months {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the Name of the Month: ");
        String name = scanner.next();
        switch (name) {
            case "December":
            case "January":
            case "February":
                System.out.println("It's Winter");
                break;
            case "March":
            case "April":
            case "May":
                System.out.println("It's Summer");
                break;
            case "June":
            case "July":
            case "August":
                System.out.println("It's Spring");
                break;
            case "September":
            case "October":
            case "November":
                System.out.println("It's Autumn");
                break;
            default:
                System.out.println("INVALID INPUT");

        }
    }
}
