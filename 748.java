import java.math.BigDecimal;
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author Moshiur
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);
        int a, b;
        BigDecimal d;

        while (in.hasNext()) {
            d = in.nextBigDecimal();
            a = in.nextInt();
            String ss = d.pow(a).toPlainString();
        //    System.out.println(d.pow(a));
            //    System.out.println(ss);
            int l, h;
            l = 0;
            h = ss.length() - 1;
            while (ss.charAt(l) == '0') {
                l++;
            }
            while (ss.charAt(h) == '0') {
                h--;
            }

            for (b = l; b <= h; b++) {
                System.out.print(ss.charAt(b));
            }
            System.out.print("\n");
        }
    }
}
