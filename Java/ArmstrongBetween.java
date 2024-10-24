public class ArmstrongBetween {
    public static void main(String[] args) {
        int start = 100, end = 999;
        for (int icout = start; icout <= end; icout++) {
            int num = icout, sum = 0;
            while (num != 0) {
                int digit = num % 10;
                sum += digit * digit * digit;
                num /= 10;
            }
            if (sum == icout) {
                System.out.println(icout + " is an Armstrong number.");
            }
        }
    }
}
