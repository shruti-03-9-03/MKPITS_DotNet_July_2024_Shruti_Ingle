public class HCF {
    public static int gcd(int FirstNumber, int SecondNumber) {
        if (SecondNumber == 0)
            return FirstNumber;
        return gcd(SecondNumber, FirstNumber % SecondNumber);
    }

    public static void main(String[] args) {
        int FirstNumber = 56, SecondNumber = 98;
        System.out.println("HCF: " + gcd(FirstNumber, SecondNumber));
    }
}
