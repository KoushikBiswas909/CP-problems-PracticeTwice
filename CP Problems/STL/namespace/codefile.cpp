#include<bits/stdc++.h> //Include this in CP only, not in Interview
using namespace std;
/*

"namespace" is kind of scope, where c++ internally defined all functions
,if we do not include this we have to define "std::cout<<;" everytime.

We can make our own namespace also.

*/

//Making our own namespace
namespace koushik{
	int val=19;
	int fun(){
		return val*10;
	}
}
int main(){
	double val=4.8;
	cout<<koushik::fun();
	/* 
	It will not access double val
    Output: 19 

	*/
}


