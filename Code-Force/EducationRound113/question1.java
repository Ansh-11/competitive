import java.io.*;
import java.util.*;

public class question1
{
	public static void main(String[] args)
	{
		// the Scanner sc for taking the input.
    	Scanner sc = new Scanner(System.in);
    	// the main code
    	int times=sc.nextInt();
    	for (int t=0;t<times ;t++ ) {

	    	int n = sc.nextInt();
	        String st = sc.nextLine();
	        st = sc.nextLine();
	        char ch=st.charAt(0);
	        int[] ar= new int [n];
	        int[] b= new int [n];
	        for (int i=0;i< n;i++ ){
	            if(st.charAt(i)==ch)
	            	ar[i]=-1;
	            else
	            	ar[i]=1;
	        }
		    for (int i=0;i< n;i++ ){
	        	int sum=0;
		    	int ind=i;
		        for (int j=i;j< n;j++ ){
		            sum+=ar[j];
		            if(sum==0)
		            	ind=j;
		        }
		        b[i]=ind-i;
		    }
		    // System.out.println(Arrays.toString(b));
		    int lg=0;
		    for (int i=0;i< n;i++ ){
		        if(b[lg]<b[i])
		        	lg=i;
		    }
		    if(lg==0&&b[lg]==0)
		    	System.out.println("-1 -1");
		    else
		    	System.out.println(1+lg+" "+(1+b[lg]+lg));
	    }
    	sc.close();
	}
}