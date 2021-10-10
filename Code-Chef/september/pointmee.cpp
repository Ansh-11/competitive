#include<bits/stdc++.h>

using namespace std;

#define ld long double

int check(ld h,ld k,ld arrX[],ld arrY[],int n)
{
	int steps = 0;
	for(int j=0;j<n;j++){
		ld xx=h-arrX[j];
		ld yy=k-arrY[j];
		if(xx==0 && yy==0){
			steps+=0;
		}
		else if((xx==0 && yy!=0) || (xx!=0 && yy==0) ){
				steps+=1;
			}
			else if(abs(xx)==abs(yy)){
					steps+=1;
				}
				else steps+=2;
	}
	return steps ;
}

int main()
{
	int time;cin>>time;
	while(time-- )
	{
		int n;cin>>n;
		ld arrX[n],arrY[n];
		ld h,k;
		for(int i=0;i<n;i++){
			cin>>arrX[i];
		}
		for(int i=0;i<n;i++){
			cin>>arrY[i];
		}
		int min_steps=INT_MAX;
		for(int i=0;i<n;i++){
			for(int l=0;l<n;l++)
			{
				//mean_point
				h=(arrX[i]+arrX[l])/2;
				k=(arrY[i]+arrY[l])/2;
				min_steps=min(min_steps,check(h,k,arrX,arrY,n));
				//x & y intersection points
				h = arrX[i];
				k = arrY[l];
				min_steps=min(min_steps,check(h,k,arrX,arrY,n));
				//x+y=c1 and x-y=c2 intersection points
				ld c1=arrX[i]+arrY[i];
				ld c2=arrX[l]-arrY[l];
				h = (c1+c2)/2;
				k = (c1-c2)/2;
				min_steps=min(min_steps,check(h,k,arrX,arrY,n));
				//x+y=c and x intersection
				ld c3=arrX[i]+arrY[i];
				h = arrX[l];
				k = c3-h;
				min_steps=min(min_steps,check(h,k,arrX,arrY,n));
				//x+y and y intersection
				ld c4=arrX[i]+arrY[i];
				k = arrY[l];
				h = c4-k;
				min_steps=min(min_steps,check(h,k,arrX,arrY,n));
				//x-y and X
				ld c5=arrX[i]-arrY[i];
				h = arrX[l];
				k = h-c5;
				min_steps=min(min_steps,check(h,k,arrX,arrY,n));
				//x-y and y
				ld c6=arrX[i]-arrY[i];
				k = arrY[l];
				h = c6+k;
				min_steps=min(min_steps,check(h,k,arrX,arrY,n));
			}
		}
		cout<<min_steps<<"\n";
	}
	return 0;
}
