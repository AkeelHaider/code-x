import java.util.Scanner;

/**
 * Created by ReezPatel on 03-Feb-17.
 */
public class Student {
    private static boolean validateMarks(int[] marks) {
        for(int m : marks) {
            if(m<0 || m>100) {
                System.out.println("Enter Valid Marks");
                return false;
            }
        }
        return true;
    }

    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int[] marks = new int[4];
        System.out.println("Enter 4 Marks (2 of Each Student) => ");
        for(int m : marks) {
            m = scanner.nextInt();
        }

        if(validateMarks(marks)) {
            Record r1 = new Record(marks[0],marks[1]);
            Record r2 = new Record(marks[2],marks[3]);

            if(r1.average() > r2.average()) {
                System.out.println("Student A Scored Better!!!");
            }else {
                System.out.println("Student B Scored Better!!!");
            }
        };


    }

}

class Record {
    private int subject1,subject2;
    public Record(int a,int b) {
        subject1 = a;
        subject2 = b;
    }

    private int add() {return subject2+subject1;}
    public float average() {return add()/(float)2;}
}
