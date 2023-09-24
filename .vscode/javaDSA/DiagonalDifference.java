import java.util.Scanner;

public class DiagonalDifference {
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
        
        
        int primaryDiagonalSum = 0;
        int secondaryDiagonalSum = 0;
        
        for (int i = 0; i < n; i++) {
            primaryDiagonalSum += matrix[i][i]; 
            secondaryDiagonalSum += matrix[i][n - 1 - i];
        }
        
       
        int diagonalDifference = Math.abs(primaryDiagonalSum - secondaryDiagonalSum);
        
        System.out.println("The diagonal difference is: " + diagonalDifference);
        
        input.close();
    }
}