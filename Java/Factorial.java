public class Factorial {
    public static int factorial(int number) {
        if (number == 0 || number == 1) return 1;
        return n * factorial(number - 1);
    }

    public static void main(String[] args) {
        int num = 5;
        System.out.println("Factorial of " + num + " is " + factorial(num));
    }
}
