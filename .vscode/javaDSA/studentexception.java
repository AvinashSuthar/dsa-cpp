import java.util.Scanner;
// import com.sun.org.apache.xpath.internal.operations.String;

public class studentexception {
    public static void main(String[] args) {
        Scanner  input = new Scanner(System.in);
        String[]   sutdentname = new String[20];
        String[] studentrollnumber = new String[20];
        for (int i = 0; i < 10; i++) {
            
            System.out.println("Enter  name of "+(i+1)+" student ");
             sutdentname[i] = input.nextLine();
            System.out.println("Enter  rollnumber of "+(i+1)+" student");
            studentrollnumber[i]= input.nextLine();


        }
        for (int i = 0; i < 10; i++) {
            try {
                System.out.println("Student name = "+sutdentname[i]);
                System.out.println("Student roll = "+studentrollnumber[i]);

                
            } catch (Exception e) {

                System.out.println("array index out of bound ");

                
            }
            
        }

    }

}
