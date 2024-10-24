public class TransposeMatrix {
    public static void main(String[] args) {
        int[][] matrix = { {1, 2}, {3, 4} };
        int[][] transpose = new int[2][2];
        for (int icout = 0; icout < 2; icout++) {
            for (int jcout = 0; jcout < 2; jcout++) {
                transpose[icout][jcout] = matrix[jcout][icout];
            }
        }
        System.out.println("Transpose of Matrix:");
        for (int icout = 0; icout < 2; icout++) {
            for (int jcout = 0; jcout < 2; jcout++) {
                System.out.print(transpose[icout][jcout] + " ");
            }
            System.out.println();
        }
    }
}
