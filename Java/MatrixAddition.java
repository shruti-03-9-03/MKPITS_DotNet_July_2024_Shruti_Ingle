public class MatrixAddition {
    public static void main(String[] args) {
        int[][] matrix1 = { {1, 2}, {3, 4} };
        int[][] matrix2 = { {5, 6}, {7, 8} };
        int[][] sum = new int[2][2];
        for (int icout = 0; icout < 2; icout++) {
            for (int jcout = 0; jcout < 2; jcout++) {
                sum[icout][jcout] = matrix1[icout][jcout] + matrix2[icout][jcout];
            }
        }
        System.out.println("Matrix Addition Result:");
        for (int icout = 0; icout < 2; icout++) {
            for (int jcout = 0; jcout < 2; jcout++) {
                System.out.print(sum[icout][jcout] + " ");
            }
            System.out.println();
        }
    }
}
