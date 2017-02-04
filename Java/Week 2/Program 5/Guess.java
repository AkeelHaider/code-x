import java.util.Scanner;

/**
 * Created by ReezPatel on 02-Feb-17.
 */
public class Guess {
    public static void main(String args[]) {
        int g,n = (int)(Math.random()*10);
        Scanner scanner = new Scanner(System.in);
        while(true) {
            System.out.print("Guess a Number: ");
            g = scanner.nextInt();
            if (g == n) {
                System.out.println("You Guessed It !!!");
                break;
            }else if(g > n)
                System.out.println("Too high,try again");
            else
                System.out.println("Too low,try again");
        }

    }
}
