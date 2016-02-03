import java.math.BigInteger;
import java.util.Scanner;

class Main {

    public static void main(String args[]) {

        Scanner in =  new Scanner(System.in);
        BigInteger big = new BigInteger("0");
        while(in.hasNext())
        {
           BigInteger tmp = in.nextBigInteger();
            if(tmp.equals(BigInteger.valueOf(0)))
                break;
            big = big.add(tmp);

        }
        System.out.println(big);
    }

}