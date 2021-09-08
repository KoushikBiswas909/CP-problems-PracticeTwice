/* Sum of Divisors CSES problem set Brute Force Approach
Input: 5

Output: 21
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int sumofdiviors(int n){
    int a=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(n/i==i)
                a=a+i;
            else
                a=a+i+(n/i);
        }
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        int b=0;
        b=sumofdiviors(i);
        ans+=b;
    }
    cout<<ans<<endl;
}
