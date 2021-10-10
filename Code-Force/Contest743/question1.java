import java.io.*;
import java.util.*;

public class question1
{
	public static void main(String[] args)
	{
    	Scanner sc = new Scanner(System.in);
    	int test=sc.nextInt();
    	for (int t=0;t<test ;t++ )
    	{
    		int len= sc.nextInt();
    		sc.nextLine();
    		String st=sc.next();
    		int step=0;
    		for (int i=len-1;i>=0;i-- ){
    			int dig=st.charAt(i)-'0';
    			if((len-1)!=i &&dig!=0)
    				step+=1;
   				step+=dig; 
    		}
    		System.out.println(step);
    	}
    	sc.close();
	}
}