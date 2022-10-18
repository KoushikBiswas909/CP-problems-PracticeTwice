#include<bits/stdc++.h>
using namespace std;

// Swaping two number without third variable

int main(){
    int x,y;
    cin>>x>>y;

    x = x+y;
    y = x-y;
    x = x-y;

    cout<<"x= "<<x<<"  "<<"Y= "<<y;
}

int main(){
    int x,y;
    cin>>x>>y;

    x=x^y;
    y=x^y;
    x=x^y;

    cout<<"x= "<<x<<"  "<<"Y= "<<y;
}
