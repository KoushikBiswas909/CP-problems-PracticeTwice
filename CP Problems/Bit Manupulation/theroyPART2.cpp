/*  
    You are given N integers, some of the element appears twice, two ones'.
    Find the once' appeared elements.
    Input: [1,2,5,1,2,7,3,3,4,4]
    Output: 5 7

    Brutefroce approach : if else and duto element compare kore (O(N^20))
    Map approach: O(NlogN)
    Xor approach: O(N)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,2,5,1,2,7,3,3,4,4};
    // xor of all elememnt
    int xxor=0;
    for(int i=0;i<10;i++){
        xxor=xxor^arr[i];
    }

    // Check last set bits index
    int cnt=0;
    while(true){
        if((xxor & 1) !=0){
            break;
        }
        else{
            cnt++;
            xxor=xxor>>1;
        }
    }

    //Traverse through array whose cnt poisiton is set store their xor in xxor1,
    // and whose cnt position is not set store their xor in xxor2.
    int xxor1=0,xxor2=0;
    for(int i=0;i<10;i++){
        if((arr[i] & (1<<cnt)) != 0){
            xxor1=xxor1^arr[i];
        }
        else
            xxor2=xxor2^arr[i];
    }
    cout<<xxor1<<" "<<xxor2<<endl; // Output 7 5
}




/*  
    Given N integers, print XOR of all the subsets.


    Answer will all time 0, when we create subsets every element comes even number of time.
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
   int arr[3]={1,3,2};
   int n=0;
   for(auto it:arr){
      n=n^it;
   }
   cout<<n<<endl;
}
