public class LinearSearch {
    public static void main(String[] args) {
        int[] arr = {1, 4, 5, 7, 9};
        int key = 5;
        boolean found = false;
        for (int icout = 0; icout < arr.length; icout++) {
            if (arr[icout] == key) {
                found = true;
                break;
            }
        }
        System.out.println("Element found: " + found);
    }
}
