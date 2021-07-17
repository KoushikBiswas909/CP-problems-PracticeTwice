// Right way to deal with structures

#include<bits/stdc++.h>
using namespace std;

struct node
{
	string str;
	int num;
	double doub;
	char x;
	
	// Create a constructor
	node(str_,num_,doub_,x_){
		str=str_;
		num=num_;
		doub=doub_;
		x=x_;
	}
};

int main(){
	node raj=new node("striver",79,90.1,"");
	/* Now you created a self-datatype variable "raj"
	and added value over them.

	You can store as many variables you can or
	as many data types as you can, in the struct */
}


