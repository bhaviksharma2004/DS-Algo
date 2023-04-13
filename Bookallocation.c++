#include <iostream>
using namespace std;
int main(){
	int a,b,sum=0,ans;
	cin>>a>>b;
	int arr[a];
	for(int i=0;i<a;i++){
		cin>>arr[i];
		sum=sum+arr[i];
	}
	int l=0,h=sum;
	int m=l+(h-l)/2;
	while(l<=h){
		int s=0,stu=1,flag=0;
		for(int i=0;i<a;i++){
			if(m>=s+arr[i]){
				s=s+arr[i];
			}
			else{
				s=arr[i];
				stu++;
				if(stu>b || arr[i]>m){
					flag=1;
					break;
				}
			}
		}
		if(flag==1){
			l=m+1;
		}
		else{
			ans=m;
			h=m-1;			
		}
		m=l+(h-l)/2;
	}
	cout<<ans;
}
