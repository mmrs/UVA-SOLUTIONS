import java.math.BigInteger;
import java.util.Scanner;

class Main {

  public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        BigInteger n1, n2;
        while (in.hasNext()) {
            n1 = in.nextBigInteger();
            n2 = in.nextBigInteger();
            System.out.println(n1.multiply(n2));
        }

    }
}