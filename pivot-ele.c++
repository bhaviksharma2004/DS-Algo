#include <iiostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int l=0,h=n-1;
	int m=l+(h-l)/2;
	while(l<h){
		if(arr[0]<arr[m]){
			l=m+1;
		}
		else{
			h=m;
		}
		m=l+(h-l)/2;
	}
	cout<<l;
}
