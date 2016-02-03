import java.math.BigInteger;
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        while (in.hasNextInt()) {
            int num = in.nextInt();
            BigInteger big = new BigInteger("1");
            for (int i = 2; i <= num; ++i)
                big = big.multiply(BigInteger.valueOf(i));
         
            System.out.println(num + "!\n" + big);

         
        }
    }

}
