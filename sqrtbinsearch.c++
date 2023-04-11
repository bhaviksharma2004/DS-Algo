#include <iostream>
using namespace std;

int sqt(int n){
	int l=0,h=n,ans;
	int m=l+(h-l)/2;
	while(l<=h){
		if(m*m==n){
			return m;
		}
		else if(m*m<n){
			l=m+1;
			ans=m;
		}
		else{
			h=m-1;
		}
		m=l+(h-l)/2;
	}
	return ans;
}

int main(){
	int n;
	double a;
	cin>>n;
	double ans=sqt(n);
	double factor=0.1;
	for(int i=0;i<3;i++){
		a=ans;
		for(int j=1;j<=9;j++){
			if((a+(j*factor))*(a+(j*factor))>n){
				break;
			}
			ans=a+(j*factor);
		}
		factor=factor/10;
	}
	cout<<ans;
}
