// ************************  Pair Class  ************************

#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int , int> p;
	p.first=3;
	p.second=5;

	// Or you can do in this way

	//pair<int , int> p={3,5};	

	cout<< p.first<<" "<<p.second<<endl; // o/p-> 3 5


	// ************************ Nested Pair Class  ************************
	pair<pair<int , int> , int> pr = {{2,5},10};
	cout<< pr.first.first<<" "<<pr.first.second<<"  "<<pr.second;
	// output-> 2 5   10


	// ************************ Vector of Pair  ************************
    vector<pair<int ,int>> vec;

    // ************************ Set of pair  ************************
    set<pair<int,int>> st;

    // ************************ Map of Pair  ************************
    map<pair<int,int>,int> mpp3; //here map key is a pair

    /* Remember you can not store pair in unordered_map */

}
