// import java.io.*;
import java.util.*;

public class ContainsDuplicate
{
	public static void main(String[] args)
	{
		// the Scanner sc for taking the input.
    	Scanner sc = new Scanner(System.in);
    	// the main code
        int num = sc.nextInt();
        int ar[]= new int[num];
        for (int i=0;i< ar.length;i++ )
        ar[i]=sc.nextInt();
    	Solution test= new Solution();
    	System.out.println(test.containsDuplicate(ar));
    	sc.close();
	}
}

class Solution {

    public boolean containsDuplicate(int[] nums)
    {
        int min = nums[0];
        int max = nums[0];
        
        // get max and min
        for(int i=1;i<nums.length;i++) {
            if(nums[i]<min) {
                min = nums[i];
            }
            if(nums[i]>max) {
                max = nums[i];
            }
        }
        
        boolean[] checkArray = new boolean[max-min+1];
        for(int i=0;i<nums.length;i++) {
            if(checkArray[nums[i] - min]) {
                return true;
            }
            checkArray[nums[i] - min] = true;
        }
        
        return false;
    }
}
