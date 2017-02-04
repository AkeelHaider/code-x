import java.util.Scanner;

/**
 * Created by ReezPatel on 03-Feb-17.
 */
public class Values {
    public static void main(String args[]) {
        int a,b,c,d,x,y;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Value of A B C D X Y: ");
        a = scanner.nextInt();
        b = scanner.nextInt();
        c = scanner.nextInt();
        d = scanner.nextInt();
        x = scanner.nextInt();
        y = scanner.nextInt();

        System.out.println("(a << 2) + (b >> 2) => " + ((a << 2) + (b >> 2)));
        System.out.println("(a+b*c%d-(a*d))/10 => " + ((a+b*c%d-(a*d))/10));
        System.out.println("Z=++x*y-- => " + (++x*y--));

    }
}
