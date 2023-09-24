import java.util.Scanner;

public class strincount {

    public static void main(String[] args) {
        String a;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a name ");
        a = input.nextLine();
        System.out.println("string is " + a);

        int b;
        b = a.length();
        System.out.println(" the length of string  is " + b);
    }
}
