import java.util.Scanner;

public class Main
{

    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n;
        long[] a = new long[50];
        long[] b = new long[50];
        a[0] = 1;
        b[0] = 0;
        for (int i = 1; i < 35; i++)
        {
            a[i] = a[i - 1] * 3 + b[i - 1] * 2;
            b[i] = a[i - 1] + b[i - 1];
        }
        while (input.hasNext())
        {
            n = input.nextInt();
            if (n == -1)
                break;
            System.out.println(a[n] + ", " + b[n]);
        }

    }

}