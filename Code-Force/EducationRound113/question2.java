import java.io.*;
import java.util.*;

public class question2
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
			int[] ar= new int [n];
			for (int i=0;i< n;i++ ){
			    ar[i]=st.charAt(i)-'0';
			}
		    // System.out.println(Arrays.toString(ar));
			int flag=st.indexOf("2");
	        String nstr="";
	        int[][] darr=new int [n][n];
	        for (int i=0;i< n;i++ ){
	            for (int j=0;j<=i;j++ ){
	                if(i==j)
	                	nstr="X";
	                if(flag>0 )

	            }
	            System.out.println("");
	        }
	    }
    	sc.close();
	}
}