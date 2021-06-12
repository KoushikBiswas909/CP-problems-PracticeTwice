#include<bits/stdc++.h>
using namespace std;

//Recursive Approach(Suggested)
int binarysearch(int a[],int low,int high,int data){
	int mid=low+((high-low)/2);
	if(low>high)
		return -1;
	if(a[mid]==data)
		return mid;
	else if(a[mid]<data)
		return binarysearch(a,mid+1,high,data);
	else
		return binarysearch(a,low,mid-1,data);
 }

//Itretaive Approach
int binarysearch(int a[],int size,int data){
	int low=0;
	int high=size-1;
	while(low<=high){
		int mid=low+((high-low)/2);
		if(a[mid]==data)
			return mid;
		else if(a[mid]>data){
			high=mid-1;	
		}
		else
			low=mid+1;
	}
	return -1;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];//Array will be sorted;
	}
	//Fuction call for Recursive method
	cout << binarysearch(a,0,n-1,18);
	//Fction call for Itretaive method
	cout << binarysearch(a,n,10);
}
