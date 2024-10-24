public class Power {
    public static void main(String[] args) {
        int FirstNumber = 2, exponent = 3;
        long result = 1;
        for (int icout = 1; icout <= exponent; icout++) {
            result *= FirstNumber;
        }
        System.out.println("2^3 = " + result);
    }
}
