import java.util.Scanner;

/**
 * exception
 */
public class exception {

    public static void main(String[] args) {
        int a;
        int result;
        int b;
        Scanner input = new Scanner(System.in);

        System.out.println(" enter the value of a ");
        a = input.nextInt();
        System.out.println(" enter the value of b ");
        b = input.nextInt();
        if (b == 0) {
            try {
                System.out.println(a / b);
            } catch (Exception e) {
                System.out.println(" can not devided by zero ");
            }

        } else {
            result = a / b;
            System.out.println("the division of givven number is " + result);

        }

    }
}