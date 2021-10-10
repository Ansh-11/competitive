import java.io.*;
import java.util.*;

public class TwoSum.java
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);

		sc.close();
	}

	public int[] twoSum(int[] nums, int target)
	{
		int[] res = new int[2];
		HashMap<Integer, Integer> map = new HashMap<>();
		for (int i=0; i < nums.length; i++)
		{
			if (map.containsKey(target - nums[i]))
			{
				res[0] = i;
				res[1] = map.get(target - nums[i]);
				break;
			}
			else
				map.put(nums[i], i);
		}
	return res;
	}
}
