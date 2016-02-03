#include<stdio.h>
#include<string.h>

int main()
{
    char st[1000];
    char anstemp[1000];
    int i,j;
    while(gets(st))
    {
        if(strcmp(st,"0 0")==0)
            break;
        char ch = st[0];
        int i, j = 0;
        for (i = 2; i < strlen(st); i++)
        {
            if (st[i] != ch)
                anstemp[j++] = st[i];
        }
        for (i = 0; i < j; i++)
        {
            if (anstemp[i] != '0')
                break;
        }
        if (i == j)
            puts("0");
        else
        {
            for (; i < j; i++)
                putchar(anstemp[i]);
            puts("");
        }
    }
    return 0;
}

/*

//here is the converted code in java but Verdict is : TLE




import java.util.Scanner;

public class Main {

    public static void main(String args[]) {

        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            String st = in.nextLine();
            if (st.equals("0 0")) {
                break;
            }
            char ch = st.charAt(0);
            char anstemp[] = new char[1000];
            int i, j = 0;
            for (i = 2; i < st.length(); i++) {
                if (st.charAt(i) != ch) {
                    anstemp[j++] = st.charAt(i);
                }
            }
            for (i = 0; i < j; i++) {
                if (anstemp[i] != '0') {
                    break;
                }
            }
            if (i == j) {
                System.out.println("0");
            } else {
                for (; i < j; i++) {
                    System.out.print(anstemp[i]);
                }
                System.out.println("");

            }
        }
    }
}

*/







