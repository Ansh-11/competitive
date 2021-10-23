import java.io.*;
import java.util.*;

public class Shufflin
{
	public static void main(String[] args)
	{
		// the Scanner sc for taking the input.
		Scanner sc = new Scanner(System.in);
		int times=sc.nextInt();
		int[] a,b;
		for (int i = 0; i < times; i++)
		{
			int N= sc.nextInt();
			a= new int [N];
			b= new int [N];
			for (int j = 0; j < N; j++)
				a[j]=sc.nextInt()%2;
			int no1=0;
			for (int j = 0; j < N; j++)
				no1+=a[j];
			int no0=a.length-no1;
			for(int j=0;j<N;j++)
			{
				if(j%2==0&&no0>0){
					b[j]=1;
					no0--;
				}
				if(j%2!=0&&no1>0){
					b[j]=1;
					no1--;
				}
			}
			// System.out.println(Arrays.toString(b));
			int sum=0;
			for (int j = 0; j < N; j++)
				sum+=b[j];
			System.out.println(sum);
		}
		sc.close();
	}
}
