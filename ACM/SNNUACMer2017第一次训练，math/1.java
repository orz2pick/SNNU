import java.io.*;
import java.math.*;
import java.util.*;
public Main{
	public static void main(String [] args)
	{
		Scanner s = new Scanner(System.in);
		int a=s.nextInt();
	}
}

拆两包就能拿到2张cards的概率：
 P2 = 2p1p2=0.08

拆3包才能拿到2张card的概率：
012 021 102 201
 P3 =4*p1*p2*(1-p1-p2)=0.08

拆x包才能拿到2张card的概率：
00000000   。。。 1   2(x-1)

 Px =2(x-1)*p1*p2*(1-p1-p2)^(x-2)

求和：
期望拆包数 En = 1*P1+2*P2+3*P3+…+x*Px+…
