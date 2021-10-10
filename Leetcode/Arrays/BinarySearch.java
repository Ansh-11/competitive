// import java.io.*;
import java.util.*;

public class BinarySe
arch
{
    public static void main(String[] args)
    {
        // the Scanner sc for taking the input.
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int ar[]= new int[num];
        for (int i=0;i< ar.length;i++ )
        ar[i]=sc.nextInt();
        int target= sc.nextInt();
        Solution  sol= new Solution();
        System.out.println(sol.search(ar,target));
        System.out.println(sol.searchInsert(ar,target));
        sc.close();
    }
}

class Solution 
{
    public int search(int[] nums, int target)
    {
        if (nums == null || nums.length == 0) return -1;
        int left = 0;
        int right = nums.length - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        return -1;
    }

    public int searchInsert2(int[] nums, int target) 
    {
         for(int i=0;i<nums.length;i++)
        {
             // this means the value is present and we will returen the index
            if(nums[i]==target) return i; 
            // this mean the array value is more that target value and 
            //we havn'e found any match yet this mean the value is not present so we will put target 
            //value in the index of its just greater value that is present at index i
            else if(nums[i]>target) return i;
        }
            // we have traversed the whole array and niether able to find the value,
            //nor the value greater then it i.e. target will be added at the end end so return nums.length
            return nums.length;
    }

    public int searchInsert(int[] nums, int target)
    {
        int left=0;
        int right=nums.length-1;
         
        while(left<=right){
            int mid=left + (right-left)/2;
            
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                right=mid-1;  
            }else{
                left=mid+1;
            }
        }
        return left;
        
    }
}   