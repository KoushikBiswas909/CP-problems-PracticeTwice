//Binary Search in a decending order sorted Array
#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int low,int high,int data){
	while(low<=high){
		int mid=low+((high-low)/2);
		if(a[mid]==data)
			return mid;
		else if(a[mid]<data)
			high=mid-1;
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
		cin >> a[i];//Array will be sorted in decending order;
	}
	//Fuction call for Recursive method
	cout << binarysearch(a,0,n-1,51);
}




/*Inputs

7
99 87 71 54 51 33 6

Output

4

*/
