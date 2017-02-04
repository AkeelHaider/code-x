import java.util.Scanner;

public class Company {
    public static void main(String args[]) {
        Employee e = new Employee();
        e.getData();
        e.processData();
        e.printData();
    }
}


class Employee {
    private String level;
    private int jobNumber;
    private double gross,basic,houseRent,perks,net,incomeTax;
    private int CA[] = {1000,750,500,250};
    private int EA[] = {500,200,100,0};
    private Scanner scanner;


    private static void printMessage(String str) {
        System.out.print(str);
    }

    Employee() {
        scanner = new Scanner(System.in);
    }

    void getData() {
        printMessage("Enter Employee Details\n");
        printMessage("----------------------\n");
        printMessage("Job Number: ");
        jobNumber = scanner.nextInt();
        printMessage("Level: ");
        do{
            level = scanner.nextLine();
        }while ( level.equals(""));
        printMessage("Basic: ");
        basic = scanner.nextDouble();
    }

    void processData() {
        switch (level) {
            case "Manager":
                perks = CA[0] + EA[0];
                break;
            case "Project Leader":
                perks = CA[1] + EA[1];
                break;
            case "Software Leader":
                perks = CA[2] + EA[2];
                break;
            case "Consultant":
                perks = CA[3] + EA[3];
                break;
            default:
                printMessage("INVALID INPUT \n\n");
        }

        houseRent = (basic*25)/(double)100;
        gross = basic + houseRent + perks;
        if(gross <= 2000) {
            incomeTax = 0;
        }else if(gross <= 4000) {
            incomeTax = (basic * 3)/(double)100;
        }else if(gross <= 5000) {
            incomeTax = (basic * 5) / (double) 100;
        }else {
            incomeTax = (basic * 8) / (double) 100;
        }

        net = gross - incomeTax;
    }

    void printData() {
        printMessage("Level: " + level + "\n");
        printMessage("Job Number: " + jobNumber + "\n");
        printMessage("Gross Pay: " + gross + "\n");
        printMessage("Tax: " + incomeTax + "\n");
        printMessage("Net Salary: " + net + "\n");
    }
}