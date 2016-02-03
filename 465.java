import java.math.BigInteger;
import java.util.Scanner;

class Main {

    static  final BigInteger MX = new BigInteger("2147483647");

    public static void main(String args[]) {

        Scanner in = new Scanner(System.in);
       
        boolean a, b, c;
        while (in.hasNext()) {
            String line = in.nextLine();
            String splt[] = line.split(" ");
            BigInteger big = new BigInteger (splt[0]);
            BigInteger tmp = new BigInteger (splt[2]);
            System.out.println(line);
            if (check(big) == false) {
                System.out.println("first number too big");
            }
            if (check(tmp) == false) {
                System.out.println("second number too big");
            }
            if (splt[1].equals("+")) {
                big = big.add(tmp);
            } else {
                big = big.multiply(tmp);
            }
            if (check(big) == false) {
                System.out.println("result too big");
            }

        }
    }

    static boolean check(BigInteger big) {
        if (big.compareTo(MX) == 1) {
            return false;
        }
        return true;
    }

}