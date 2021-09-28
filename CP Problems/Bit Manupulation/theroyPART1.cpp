/*                       BIT-MANUPULATION                         */

/* 
   Bitwise AND-> all 1 = 1
                 any 0 = 0
                 101 && 100 = 100
                
   Bitwise OR-> any 1 = 1
                all 0 = 0
                101 || 100 = 101
                
   Biwise XOR-> Even 1 = 0 (Even number of 1 = 0)
                Odd 1 = 1 (Odd number of 1 = 1)
                101 ^ 111 = 010

    If do XOR between same number 101 ^ 101 = 000 (x ^ x = 0)

   Bitwise NOT-> 1 convert to 0
                 0 convert to 1
                 ~110 = 001

    Right-Shift Operator (>>)
    a = 5; //5= 101
    a>>1;  // a= 10 (0th element removed, new 0th element is 0)
    NOTE: x = decimal number
          x>> num = x/(2 ^ num)
          example: 10>>3 = 10/(2^3) = 1 

    Left-Shift Operator (<<)
    a = 5; // a=101
    a<<2;  // a= 10100 (from left zeros will removed)
    NOTE: x = decimal number
          x<< num = x * (2 ^ num)
          example: 5<<2 = 5* (2^2) = 20                     
 */










/*                       EXAMPLES                          */

/* You are given an array {2,2,3,4,1,3,5,5,4},
   every element occars twice, only one occars one time,
   Find the once appeared element.

   output: 1 
*/


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   vector<int>arr ={2,2,3,4,1,3,5,5,4};
   int size= arr.size();
   int xxor=0;
   for(int i=0;i<size;i++){
      xxor=xxor^arr[i];
   }
   cout<<xxor<<endl;
}



/* SWAP two number using Bit-manupulation 
   Input: a=5 b=7
   Output: a=7 b=5

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
   ll a=5;
   ll b=7;

   a=a^b;
   b=a^b;
   a=a^b;

   cout<<"a="<<a<<" "<<"b="<<b<<endl;
}



/* Given an integer N, Print XOR of all elements (1 to N).
   Input: 5
   Output:1
   Explanation: 1^2^3^4^5 = 1
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
   ll n;
   cin>>n;
   int ans=0;
   for(int i=1;i<=n;i++){
      ans=ans^i;
   }
   cout<<ans<<endl;
}

/* But this code has complexity O(N).

1- Find the remainder of n by moduling it with 4. 
2- If rem = 0, then xor will be same as n. 
3- If rem = 1, then xor will be 1. 
4- If rem = 2, then xor will be n+1. 
5- If rem = 3 ,then xor will be 0.

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
   ll n;
   cin>>n;
   if(n%4==0)
      cout<<n<<endl;
   else if(n%4==1)
      cout<<1<<endl;
   else if(n%4==2)
      cout<<n+1<<endl;
   else if(n%4==3)
      cout<<0<<endl;
}

/* This code has complexity O(1). */



/* Given a range (L to R), Print xor of all elements. 
   Input: 2 4
   output: 5
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
   ll l,r;
   cin>>l>>r;
   ll ans=0;
   for(ll i=l;i<=r;i++){
      ans = ans ^ i;
   }
   cout<<ans<<endl;
}

/* But this code has complexity O(N). */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll firstNnum(ll n){
   if(n%4==0)
      return n;
   else if(n%4==1)
      return 1;
   else if(n%4==2)
      return n+1;
   else if(n%4==3)
      return 0;
}

int main(){
   ll l,r;
   cin>>l>>r;

   cout<<firstNnum(r)^firstNnum(l-1)<<endl;
}



/* Check a given number even or odd using Bit-Magic */


#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   if((n & 1)==0)
      cout<<"Even"<<endl;
   else
      cout<<" Odd"<<endl;
}



/* You are given a integer number.
   Check i-th bit set or not , set means 1.

   Input: 5
          2
   Output:1 (Yes)
   Input: 5
          1
   Output: 0 (No)        

*/

/* Approach: If we create a musk with, i-th position 1 and all are 0.
             and perform a AND operation in given number and musk.
             Then if we found a non-zero number ,it is set.
             Otherwise if found zero number, it is not set. 
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,i;
   cin>>n>>i;
   bool set = (n & (1<<i));
   cout<<set<<endl;
}



/* Change the i-th bit, of a given number N 
   approach: 1101 = N ,i=1, change the i-th bit as set
             Create a musk 0010
             Then 1101 | 0010 = 1111 
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,i;
   cin>>n>>i;
   bool set = (n | (1<<i));
   cout<<set<<endl;
}



/* Clear the i-th bit. Given N and i.
   i can be 0 or 1 whatever, make the bit 0 (clear)
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,i;
   cin>>n>>i;
   n=(n & (~(1<<i)));
   cout<<n;
}




/* Remove the last set bit */

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   cout<<(n & (n-1));
}




/* How to check a number is power of 2 */

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   if((n & (n-1))==0)
      cout<<"yes";
   else
      cout<<"no";
}



/* Count the no of set bits.
   there are lots of other method check in gfg */

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int cnt=0;
   while(n!=0){
      n= n & (n-1);
      cnt++;
   }
   cout<<cnt<<endl;
}




