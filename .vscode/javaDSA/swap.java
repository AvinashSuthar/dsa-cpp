import java.util.Scanner;

public class swap {
    public static void main(String[] args) {
        int num1, num2;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the value of number  NUM 1 and  NUM 2");
        num1 = sc.nextInt();
        num2 = sc.nextInt();
         System.out.println(" before value NUM1 = "+num1+"before value NUM 2 " +num2 );
        num2 = num2 + num1;
        num1 = num2 -num1;
        num2 = num2-num1;
     System.out.println("num 1 "+num1);
     System.out.println("num 2 "+num2);

        
    

    }
}
