// Function Template in C++

#include<bits/stdc++.h>
using namespace std;


/* Use of template with same data-type*/
template<typename T>
T add(T a, T b){
	return (a+b);
}


int main(){
	cout << add(3,4) <<endl;
	cout << add<int>(3,4) <<endl;//Passing data type as argument <data_type>
	

	cout << add(3.2f,2.3f)<<endl;//To pass float variable we have to do 'f',
	//otherwise compiler takes 3.2 as double value by default.
    
    cout <<add(3.1,4.3)<<endl;
}




/* Use of template with different data-types */

template<typename T,typename U>//when passing two differnt data-type
U add(T a,U b){    // retun data-type float so output <8.2>
	return (a+b);
}


template<typename t, typename u>
t add(t a, u b){   //Return data-type int so output <8> 
	return (a+b);
}

int main(){
	cout << add(4,4.2f)<<endl; //Passing two different data types <int> and <float>
}






