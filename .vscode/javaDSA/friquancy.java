import java.util.Scanner;

public class friquancy {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter  the size of a square matrix");
        int n = in.nextInt();
        int[][] matrix = new matrix[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = in.nextInt();
            }
        }
        

    }
}
