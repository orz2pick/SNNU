import java.util.Scanner;

public class Main
{

    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int t, left, right;
        int a, b;
        int cnt = 0;
        t = input.nextInt();
        for (int i = 0; i < t; i++)
        {
            cnt++;
            a = input.nextInt();
            b = input.nextInt();
            left = 0;
            right = 0;
            while (a != 1 || b != 1)
                if (a > b)
                {
                    int tem = a / b;
                    if (a % b == 0)
                    {
                        left += (tem - 1);
                        a = 1;
                    }
                    else
                    {
                        left += tem;
                        a = a % b;
                    }
                }
                else if (a < b)
                {
                    int tem = b / a;
                    if (b % a == 0)
                    {
                        right += (tem - 1);
                        b = 1;
                    }
                    else
                    {
                        right += tem;
                        b = b % a;
                    }
                }
            System.out.println("Scenario #" + cnt + ":");
            System.out.println(left + " " + right);
            System.out.println();
        }
    }

}