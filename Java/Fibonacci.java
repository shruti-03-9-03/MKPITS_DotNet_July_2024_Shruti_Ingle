public class Fibonacci {
    public static void main(String[] args) {
        int number = 10, aNum = 0, bNum = 1;
        System.out.print("Fibonacci Series: " + aNum + ", " + bNum);
        for (int icout = 2; icout < number; icout++) {
            int next = aNum + bNum;
            System.out.print(", " + next);
            aNum = bNum;
            b = next;
        }
    }
}
