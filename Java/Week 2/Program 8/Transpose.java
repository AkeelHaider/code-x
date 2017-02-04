import java.util.Scanner;

/**
 * Created by ReezPatel on 02-Feb-17.
 */
public class Transpose {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Size of Sq. Matrix: ");
        int n = scanner.nextInt();

        int[][] matrix = new int[n][n];
        System.out.println("Enter Matrix: ");
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }


        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(i > j) {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
            }
        }


        System.out.println("\nTranspose of matrix => ");
        for(int i=0;i<matrix[0].length;i++) {
            for(int j=0;j<matrix.length;j++) {
                System.out.print(matrix[i][j] + "   ");
            }
            System.out.println("");
        }

    }
}
