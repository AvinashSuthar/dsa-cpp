import java.util.Scanner;

public class transpose {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.print("Enter the size of the square matrix: ");
        int n = input.nextInt();

        int[][] matrix = new int[n][n];

        System.out.println("Enter the elements of the matrix:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = input.nextInt();

            }
        }

        System.out.println("given matrix");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print("  " +matrix[i][j]);

            }
            System.out.println("");

        }
        System.out.println("transpose matrix");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print("  " +matrix[j][i]);
                
            }
            System.out.println("");
        }
    }
}
