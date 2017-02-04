import java.util.Scanner;

/**
 * Created by reezp on 31-Jan-17.
 */
public class Roots {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter Value of A B C: ");
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();

        int d = (b^2)-(4*a*c);
        if(d < 0) {
            System.out.println("ROOTS NOT POSSIBLE");
        }else if(d == 0) {
            int x = (int)(-b)/2*a;
            System.out.println("ROOTS: " + x + " , " + x);
        }else {
            int x1 = (int)(-b + Math.sqrt(d))/2*a;
            int x2 = (int)(-b - Math.sqrt(d))/2*a;
            System.out.println("ROOTS: " + x1 + " , " + x2);
        }

    }
}
