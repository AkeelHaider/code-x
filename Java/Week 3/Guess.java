package Experiment3;

import java.util.Objects;
import java.util.Scanner;

/**
 * Created by reezpatel on 3/11/2017.
 */
public class Guess {
    public static void main(String args[]) {
        String ch;
        Scanner scanner = new Scanner(System.in);
        int high = 100, low = 0;
        int n;

        label:
        while (true) {
            n = (high + low) / 2;
            System.out.println("Is your secret number " + n + "?");
            System.out.print("Enter 'h' to indicate the guess is too high. Enter 'l' to indicate the guess is too low. Enter 'c' to indicate I guessed correctly.");
            ch = scanner.next();

            switch (ch) {
                case "h":
                    high = n - 1;
                    break;
                case "l":
                    low = n + 1;
                    break;
                case "c":
                    System.out.println("Game over. Your secret number was: " + n);
                    break label;
                default:
                    System.out.println("INVALID KEY!.. Try Again");
                    break;
            }
        }

    }
}
