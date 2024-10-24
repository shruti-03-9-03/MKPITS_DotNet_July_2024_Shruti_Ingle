public class PerfectNumber {
    public static void main(String[] args) {
        int num = 28, sum = 0;
        for (int icout = 1; icout < num; icout++) {
            if (num % icout == 0) {
                sum += icout;
            }
        }
        if (sum == num)
