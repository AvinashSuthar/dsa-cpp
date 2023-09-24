import java.util.Scanner;

/**
 * aman
 */
public class addthreenum {
    public static void main(String[] args) {
        int a, b, c;
        System.out.println("Enter the value of a b c");
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        int d;
        d = a + b + c;
        System.out.println("addition is ...= " + d);
    }

}