import java.io.*;
import java.util.*;

public class Airplane
{
	public static void main(String[] args)
	{
		// the Scanner sc for taking the input.
		Scanner sc = new Scanner(System.in);
		int times=sc.nextInt();
		for (int i = 0; i < times; i++)
		{
			int a= sc.nextInt();
			int b= sc.nextInt();
			int c= sc.nextInt();
			int d= sc.nextInt();
			int e= sc.nextInt();
			if((a+b<=d&&c<=e) || (a+c<=d&&b<=e) || (c+b<=d&&a<=e))
				System.out.println("YES");
			else
				System.out.println("NO");
		}
		sc.close();
	}
}
