public class SumNaturalNumbers {
    public static void main(String[] args) {
        int n = 10, sum = 0;
        for (int icout = 1; icout <= n; icout++) {
            sum += icout;
        }
        System.out.println("Sum of first 10 natural numbers: " + sum);
    }
}
