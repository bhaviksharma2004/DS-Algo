#include <iostream>
using namespace std;
int pivot(int arr[],int n){
	int l=0,h=n-1;
	int m=l+(h-l)/2;
	while(l<h){
		if(arr[m]>arr[0]){
			l=m+1;
		}
		else{
			h=m;
		}
		m=l+(h+l)/2;
	}
	return l;
}

int main(){
	int n,k;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>k;
	int a=pivot(arr, n);
	int l,m,h;
	if(arr[a]<=k && k<=arr[n-1]){
		l=a;
		h=n-1;
	}
	else{
		l=0;
		h=a;
	}
	m=l+(h-l)/2;
	while(l<=h){
		if(arr[m]==k){
			cout<<m+1;
			break;
		}
		else if(arr[m]<k){
			l=m+1;
		}
		else{
			h=m-1;
		}
		m=l+(h-l)/2;
	}
}
