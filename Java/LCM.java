public class LCM {
    public static int gcd(int FirstNumber, int SecondNumber) {
        if (SecondNumber == 0)
            return FirstNumber;
        return gcd(SecondNumber, FirstNumber % SecondNumber);
    }

    public static void main(String[] args) {
        int FirstNumber = 72, SecondNumber = 120;
        int lcm = (FirstNumber * SecondNumber) / gcd(FirstNumber, SecondNumber);
        System.out.println("LCM: " + lcm);
    }
}
