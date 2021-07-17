/* ****************** All about <array> in STL ******************** */

#include<bits/stdc++.h>
using namespace std;

// Declare array in global
array<int,3>array_in_global;


int main(){
	// Declaring an array (method 1)
	int arr[100];

	// Declaring an array (method 2)
	array<int,100>arr; // Here array is a STL containers function.

	/*            ***********************************

	When we declare an array in main() function, all values
	of the array autometically intialized with garbage values.

	But when we declare array as Global, all values of the array
	autometically initilized with zero (0)

	              ***********************************
	*/

	array<int,3>array_in_main_function;
	for(int i=0;i<3;i++){
		cout<<array_in_main_function[i]<<" "; //Output:1964732205 4200880 6422400
	}

	for(int i=0;i<3;i++){
		cout<<array_in_global[i]<<" "; " "; //Output:0 0 0 
	
	}

	//Now, you can zero, a main defined array also, like
	arr[1000]={0};


	/* 
	           *********array containers fuction**********
	*/

	// First Function [ fill() ]
	/* fill() function fills all array elements with passing value */
	array<int,5>arr;
	arr.fill(10);   // {10,10,10,10,10}

	// Second Function [ at() ]
	/* at(index), works as arr[index],accessing the value of array */
	array<int,5>arr={3,4,5,2,1};
	arr.at(2);  // Output: 5 (value at index 2)

}



