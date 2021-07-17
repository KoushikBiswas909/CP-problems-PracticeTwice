// Structure , struct keyword

#include<bits/stdc++.h>
using namespace std;

struct node
{
	string str;
	int num;
	double doub;
	char x;
	
};

int main(){

	//Defining struct value, (Way 1)
    node raj;
    raj.str="striver";
    raj.num=79;
    raj.doub=91.1;

    /* now if i do not initilize char x with some value,
    we can not say "x" is empty or not, x stores autometically
    a random value.

    In this way you will get your answers 
    but this is wrong way to define struct varriables*/
}


