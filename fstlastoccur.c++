#include <iostream>
using namespace std;
int fstocc(int arr[], int n, int k){
	int ans;
	int l=0,h=n-1;
	int m=l+(h-l)/2;
	while(l<=h){
		if(arr[m]==k){
			ans=m;
			h=m-1;
		}
		else if(arr[m]>k){
			h=m-1;
		}
		else{
			l=m+1;
		}
		m=l+(h-l)/2;
	}
	return ans;
}

int lastocc(int arr[], int n, int k){
	int ans;
	int l=0,h=n-1;
	int m=l+(h-l)/2;
	while(l<=h){
		if(arr[m]==k){
			ans=m;
			l=m+1;
		}
		else if(arr[m]>k){
			h=m-1;
		}
		else{
			l=m+1;
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
	int fst=fstocc(arr, n, k);
	int last=lastocc(arr ,n ,k);
	cout<<fst+1<<" "<<last+1;
}
