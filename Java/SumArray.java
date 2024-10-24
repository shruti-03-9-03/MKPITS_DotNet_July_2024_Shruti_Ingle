public class SumArray {
    public static void main(String[] args) {
        int[] arr = {2, 5, 8, 4, 7};
        int sum = 0;
        for (int icout = 0; icout < arr.length; icout++) {
            sum += arr[icout];
        }
        System.out.println("Sum of array elements: " + sum);
    }
}
