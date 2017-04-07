package Experiment3;

import java.util.Scanner;

/**
 * Created by reezpatel on 3/11/2017.
 */
public class School
{
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Press 1.for Student \t 2.for Faculty");
        int n = scanner.nextInt();
        if(n == 1) {
            Student student = new Student();
            student.setData();
            student.printData();
        }else {
            System.out.println("Access Denied!");
        }
    }

}

class Student {
    private String regNo,section;
    private int yearOfStudy;
    private double scholarship,cgpa,livingExpense;
    private int campusStdCount,totalStdCount;

    void setData() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter Registration Number: ");
        regNo = scanner.next();
        System.out.println("Enter Year of Study(1-4): ");
        yearOfStudy = scanner.nextInt();
        System.out.println("Enter Section: ");
        section = scanner.next();
        System.out.println("Enter Scholarship Amt: ");
        scholarship = scanner.nextDouble();
        cgpa = scholarship/10000;
        System.out.println("Enter Total Living Expenses: ");
        livingExpense = scanner.nextDouble();
        System.out.println("Enter No. of Student in Your Campus: ");
        campusStdCount = scanner.nextInt();
        System.out.println("Enter No. of Student across University: ");
        totalStdCount = scanner.nextInt();
    }

    void printData() {
        System.out.println("You are a student with Register Number" + regNo + "and you belong to " + section +  "and eligible for a scholarship of " + scholarship + " per year as your CGPA is " + cgpa+ "and your total living expense is " + livingExpense+ ". Total number of students in your campus is " + campusStdCount+  " and across campus is " + totalStdCount +".");
    }
}

