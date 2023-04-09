#include <iostream>
using namespace std;

int fstoccur(int arr[], int n, int k){
	int l=0,h=n-1;
	int m=l+(h-l)/2;
	int ans=-1;
	while(l<=h){
		if(arr[m]==k){
			ans=m;
			h=m-1;
		}
		else if(arr[m]<k){
			l=m+1;
		}
		else{
			h=m-1;
		}
		m=l+(h-l)/2;
	}
	return ans;
}

int lastoccur(int arr[], int n, int k){
	int l=0,h=n-1;
	int m=l+(h-l)/2;
	int ans=-1;
	while(l<=h){
		if(arr[m]==k){
			ans=m;
			l=m+1;
		}
		else if(arr[m]<k){
			l=m+1;
		}
		else{
			h=m-1;
		}
		m=l+(h-l)/2;
	}
	return ans;
}

int main(){
	int n,k;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>k;
	int a=fstoccur(arr, n, k);
	int b=lastoccur(arr, n, k);
	cout<<(b-a)+1;
}
