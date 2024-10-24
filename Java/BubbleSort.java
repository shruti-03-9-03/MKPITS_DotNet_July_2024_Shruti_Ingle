public class BubbleSort {
    public static void main(String[] args)
 {
        int[] arr = {5, 3, 8, 4, 2};
        for (int icout = 0; icout < arr.length - 1; icout++) {
            for (int jcout = 0; jcout < arr.length - icout- 1; jcout++) {
                if (arr[jcout] > arr[jcout + 1]) {
                    int temp = arr[jcout];
                    arr[jcout] = arr[jcout + 1];
                    arr[jcout + 1] = temp;
                }
            }
        }
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}
