
import java.math.BigInteger;
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author Siyam
 */
public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNext()) {
            int num = scanner.nextInt();
            if(num==0)return;
            int[] ans = new int[10];
            BigInteger bigboss = BigInteger.valueOf(1);
            for(int i = 2;i<=num;i++)
                bigboss = bigboss.multiply(BigInteger.valueOf(i));
            String big = bigboss.toString();
            for(int i = 0;i< big.length();i++){
                ans[big.charAt(i)-48]++;
            }
            System.out.println(num +"! --");
            for(int i=0; i<10;i++){
                if(i!=0 || i!=9 || i!=4)
                    System.out.printf("   ");
                System.out.printf("(%d)%5d",i,ans[i]);
                if(i==4||i==9)System.out.printf("\n");
            }
        }
    }
}
