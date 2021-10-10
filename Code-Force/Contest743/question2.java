import java.io.*;
import java.util.*;

public class question2
{
	public static void main(String[] args)
	{
    	Scanner sc = new Scanner(System.in);
    	int test=sc.nextInt();
    	for (int t=0;t<test ;i++ )
    	{
    		int len= sc.nextInt();
    		int a[]= new int[len];
    		for (int i=0;i< len;i++ )
    		    a[i]=sc.nextInt();
    		int b[]= new int[len];
    		for (int i=0;i< len;i++ )
    		    b[i]=sc.nextInt();
    		int step=0;
    		if(a[0]<b[0])
    		{
    			System.out.println(0);
    			break;
    		}
    		int count==0,j=1;
    		for (;j< len;j++ ){
    		    if(a[j]<b[0])
    		    	break;
    		}

    		count=j;
    		j=1;
    		for (; j<len;j++ ) {
    			if(b[j]>a[0])
    		}
    		if(count)
    	}
    	sc.close();
	}
}


