#include<bits/stdc++.h>
using namespace std;

// Printing Triangle

int main(){
    int n;
    cin>>n;
    int k =n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>=k)
                cout<<"* ";
            else
                cout<<" ";
        }
        k--;
        cout<<endl;
    }
}



Output:
  
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
