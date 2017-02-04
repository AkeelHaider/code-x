import java.util.Scanner;

/**
 * Created by ReezPatel on 31-Jan-17.
 */
public class ForEachLabel {
    private static final int LENGTH = 10;
    public static void main(String args[]) {
        int[] myArray = new int[LENGTH];
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter " + LENGTH + " elements");
        for(int i = 0;i<myArray.length;i++) {
            myArray[i] = scanner.nextInt();
        }


        System.out.println("Enter the key to search for: ");
        int key = scanner.nextInt();

        int i = 0;
        myLabel: for(int a : myArray) {
            i++;
            if(a == key) {
                break myLabel;
            }else {
                continue myLabel;
            }
        }

        if((i-1) == myArray.length) {
            System.out.println("ELEMENT IS NOT PRESENT");
        }else{
            System.out.println("ELEMENT IS PRESENT AT " + (i-1));
        }
    }
}
