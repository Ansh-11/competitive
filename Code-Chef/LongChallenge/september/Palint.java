import java.io.*;
import java.util.*;

public class Palint
{
	public static void main(String[] args)
	{
		// the Scanner sc for taking the input.
		Scanner sc = new Scanner(System.in);
		int times=sc.nextInt();
		int[] ar,copy,dig,count;
		for (int t = 0; t < times; t++)
		{
			int N= sc.nextInt();
			int X= sc.nextInt();
			if (N==1)
			{
				System.out.println(1+" "+0);
				continue;
			}
			ar= new int [N];
			for (int j = 0; j < N; j++)
				ar[j]=sc.nextInt();
			Map<Integer,Integer> map=new HashMap<Integer,Integer>();
			for (int j=0;j< N;j++ ){
			    if(map.containsKey(ar[j])){
			    	map.put(ar[j],(map.get(ar[j])+1));
			    }
			    else
			    	map.put(ar[j],1);
			}
			for (int j = 0; j < N; j++)
				ar[j]=ar[j]^X;
			Map<Integer,Integer> mapx=new HashMap<Integer,Integer>();
			for (int j=0;j< N;j++ ){
			    if(mapx.containsKey(ar[j])){
			    	mapx.put(ar[j],(mapx.get(ar[j])+1));
			    }
			    else
			    	mapx.put(ar[j],1);
			}

			int maxcount=0,minstep=0,xorv=0;
			for(Map.Entry m:map.entrySet()){
				if(mapx.get(m.getKey())==null)
					xorv=0;
				else
					xorv=(int)(mapx.get(m.getKey()));
				int tot=(int)(m.getValue())+xorv;
				if(tot>maxcount){
					maxcount=tot;
					minstep=xorv;
				}
				else if(tot==maxcount)
						minstep=xorv;
			}
			System.out.println(maxcount+"  "+minstep);
		}
		sc.close();
	}
}



			// for(Map.Entry m:map.entrySet())
			// 		System.out.println(m.getKey()+" "+m.getValue());
			// System.out.println();
			// for(Map.Entry m:mapx.entrySet())
			// 		System.out.println(m.getKey()+" "+m.getValue());
			// System.out.println();
