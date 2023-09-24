package javaDSA;

import java.util.Scanner;

/**
 * persent
 */
public class persent {

    public static void main(String[] args) {
        int phy, math, chem, eng, hindi;
        System.out.println(" Enter the marks of these subjects..=");
        Scanner inp = new Scanner(System.in);
        phy = inp.nextInt();
        math = inp.nextInt();
        chem = inp.nextInt();
        eng = inp.nextInt();
        hindi = inp.nextInt();
        float pers;
        pers = (phy + math + eng + hindi + chem) / 5;
        System.out.println(" persent is ....= " + pers);
    }
}