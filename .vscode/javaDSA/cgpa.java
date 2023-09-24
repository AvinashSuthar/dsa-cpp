package javaDSA;

import java.util.Scanner;

public class cgpa {
    public static void main(String[] args) {
        float phy, math, eng, jav, dbms;
        System.out.println("Enter the numbers ");
        Scanner inp = new Scanner(System.in);
        phy = inp.nextInt();
        math = inp.nextInt();
        eng = inp.nextInt();
        jav = inp.nextInt();
        dbms = inp.nextInt();
        float cgp;
        cgp = (math + phy + eng + dbms + jav) / (5 * 10);
        System.out.println("The  cgpa is ... " + cgp);

    }
}
