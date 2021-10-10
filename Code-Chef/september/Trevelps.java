import java.io.*;
import java.util.*;

public class Trevelps
{
	public static void main(String[] args)
	{
		// the Scanner sc for taking the input.
		Scanner sc = new Scanner(System.in);
		int times=sc.nextInt();
		for (int i = 0; i < times; i++)
		{
			int N= sc.nextInt();
			int a= sc.nextInt();
			int b= sc.nextInt();
			String st=sc.next();
			int min=0;
			for (int j = 0; j < N; j++)
			{
				if(st.charAt(j)=='0')
					min+=a;
				else min+=b;
			}
			System.out.println(min);
		}
		sc.close();
	}
}
