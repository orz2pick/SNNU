import java.util.*;

public class Main
{
    static public int gcd(int a, int b)
    {
        if (b != 0)
            return gcd(b, a % b);
        else
            return a;
    }

    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int a, b;
        while (input.hasNext())
        {
            a = input.nextInt();
            b = input.nextInt();
            int x = a;
            int l = gcd(a, b);
            a /= l;
            b /= l;
            if (a * a - 4 * b < 0)
                System.out.println("No Solution");
            else
            {
                int ans = (a + (int) Math.sqrt((a * a - 4 * b))) / 2;
                ans *= l;
                int cnt = x - ans;
                if (cnt * ans / gcd(cnt, ans) == b * l)
                    System.out.println(cnt + " " + ans);
                else
                    System.out.println("No Solution");
            }
        }
    }

}