import java.util.Scanner;

/**
 * Created by ReezPatel on 02-Feb-17.
 */
public class Sum_N {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the Value of N: ");
        int n = scanner.nextInt();
        double ans = 0;
        while (n > 0) ans = ans + 1/(double)n--;

        System.out.println("ANSWER: " + ans);
    }
}
