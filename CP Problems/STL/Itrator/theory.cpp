/*   ****************************************************  Iterators  **************************************************** 
                                            begin() , end() , rbegin() , rend()
    begin() ->Starting of a array or vector.
    end() ->Always be pointing the right after the last element, means 
            a empty block.
    rbegin() -> Reverse begin
    rend() -> Reverse end
*/ 

#include<bits/stdc++.h>
using namespace std;

int main(){
    array<int,5>arr={6,60,9,7,2};

    // THis will print 6 60 9 7 2
    for(auto it=arr.begin(); it!=arr.end(); it++){
        cout << *it <<" ";
    }
    cout <<endl;

    // THis will print array in reverse 2 7 9 60 6
    for(auto it=arr.rbegin(); it!=arr.rend(); it++){
        cout << *it <<" ";
    }
    cout<< endl;

    // THis will print array in reverse 2 7 9 60 6
    for(auto it=arr.end()-1;it>=arr.begin();it--){
        cout<< *it <<" ";
    }
    cout <<endl;

    /* *********************For-Each loop*************************  */
    // For-each loop for int
    for(auto it:arr){
        cout<< it <<" ";// prints arr array in forward mannar
    }
    cout<<endl;

    // For-each loop for string
    string s="wjijbhbklhvh";
    for(auto c:s){
        cout <<c<<" ";// prints same string s
    }
    cout<<endl;


    /* ****************** size(),front(),back() ******************** */
    
    // size() function returns the size of the array or vector or string
    cout << s.size()<<endl;

    // front() function returns first element of array or string or anything
    cout<< s.front() <<endl; // It can be cout<<s.at(0);

    // back() function returns last element of array or string or anything
    cout<< s.back() <<endl; // It can be cout<<s.at(s.size() -1);
}
