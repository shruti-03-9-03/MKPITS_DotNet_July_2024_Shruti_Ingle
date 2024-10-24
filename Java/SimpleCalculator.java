import java.util.Scanner;
public class Calculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter FirstNumber: ");
        double FirstNumber = sc.nextDouble();
        System.out.print("Enter SecondNumber: ");
        double SecondNumber = sc.nextDouble();
        System.out.println("Sum: " + (FirstNumber + SecondNumber));
        System.out.println("Difference: " + (FirstNumber - SecondNumber));
        System.out.println("Product: " + (FirstNumber * SecondNumber));
        System.out.println("Quotient: " + (FirstNumber / SecondNumber));
    }
}
