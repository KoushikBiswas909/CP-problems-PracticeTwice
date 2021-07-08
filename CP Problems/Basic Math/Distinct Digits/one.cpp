Problem: https://codeforces.com/problemset/problem/271/A

Hint : https://www.geeksforgeeks.org/next-number-with-distinct-digits/

Main Fact:
   If we take reminder of any number with 10, it returns last digit of the number
   example: 2013 % 10 = 3
            2013 % 1000 = 2

solution:

#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin >>x;
	while(true){
		x++;
		int a=x%10;
		int b=(x/10)%10;
		int c=(x/100)%10;
		int d=(x/1000)%10;
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
			break;
		}
	}
	cout <<x;
}
