/*
  ********************  All about Prime Numbers  ********************

  A number is divisible by 1 & itself , called prime number.
  5 is Prime Number.
  4 is Composite Number.
  0 is not Prime Nor Composite.
  1 is not Prime.


  *********** Some facts about Prime Numbers ************
  1. The only even prime number is 2.


  2. Every prime can be written as 6b+1 or 6n-1 , except 2 and 3, 
     b & n is any natural number.

 *3. Goldbach Conjecture:
     Every even integer greater than 2 can be written as sum of two Primes.

 *4. Wilson's Theorem:
     (p-1)! = (p-1) mod p   , "!" = factorial sign, P = Prime number 

  5. The only two consecutive Primes are 2 & 3.

  6. Number of factors of every Primes are 2, because Primes are divisible by 1 & itself.

  7. Smallest Prime number is 2.






*/
//                    ****** Check a number Prime or Not ******

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
      if(n%i==0)
        cnt++;
    }
    if(cnt==2)
      cout<<"YES it is prime";
    else
      cout<<"NO is not Prime";
}

// Time Complexity is O(N)

// ****** Optimized Method *******

// https://www.geeksforgeeks.org/prime-numbers/

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cnt++;
            if((n/i)!=i)
                cnt++;

        }
    }
    if(cnt==2)
        cout<<"YES";
    else
        cout<<"NO";
    
}

/* Time complexity is O(sqrt(n) * log n)
   Because in STL sqrt(n) executes in log n time, and 
   in loop every time we r checking sqrt(n).

   That's why people use (i*i<=n) that's complexity O(sqrt(n)).

*/



#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

bool prime(int n) {
    for (int x = 2; x*x <= n; x++) {
        if (n%x == 0) 
            return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    cout<<prime(n)<<endl;;

}


// Seive

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n=1000000;
bool seive[10000001]; // globallay declared array will 0 all members.

int main(){

    for(int i=2;i<=n;i++){ // Doing all element as true.
        seive[i] = true;
    }
    for(int i=2;i<=n;i++){
        if(seive[i]==true){
            for(int j=2*i;j<=n;j+=i){
                seive[j]=false;
            }
        }
    }
    cout<<seive[600001]<<endl; // Output: 0 (it is not prime)
    cout<<seive[19]<<endl; // Output: 1 (it is prime)
}
// But this has O(n^2) complexity

//j=i*i; because all previously unmarked multipales stats from i*i.
// i<=sqrt(n) or i*i<=n which requirs complexity of O(log(log(n))).


/*
    Max size can store->

  Globally:
  int a[10^7];
  bool a[10^8];

  main(){
    int a[10^6]; 
    bool a[10^7]; 
  }
 
so always use array after seeing the constraints, normally use global.

*/

// Optimized Seive

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;


bool seive[10000001];
int main(){
    int n;
    cin>>n;
    for(ll i=2;i<=n;i++){
        seive[i]=1;
    }
    for(ll i=2;i*i<=n;i++){
        if(seive[i]==1){
            for(ll j=i*i;j<=n;j+=i){
                seive[j]=0;
            }
        }
    }
    cout<<seive[n]<<endl;
}






/********************* Prime Factorization ************************
 
What is Prime Factorization?
-> Let's say a number n= 30, now diving with primes until 1 comes, 
1st divide with 2,
2nd divide with 3, 
3rd divide with 5 
so Prime Factoriztion of n = 30 is 2×3×5

Next n=48
divide with 2, 4 times
then divide with 3
so prime Factorization of n=48 is 2^4 × 3

*/
#include<bits/stdc++.h>
using namespace std;

int PrintPrimeFactorsInSqrtTime(int n){
  for(int i=2;i*i<=n;i++){
    while(n%i==0){
      cout<<i<<" ";
      n=n/i;
    }
  }
  if(n>1)
    cout<<n<<endl;
}

int PrintPrimeFactors(int n){
  for(int i=2;i<=n;i++){
    while(n%i==0){
      cout<<i<<" ";
      n=n/i;
    }
  }
  return 0;
}

int main(){
  int n;
  cin>>n;
  cout<< PrintPrimeFactors(n)<<endl;
  cout<<PrintPrimeFactorsInSqrtTime(n)<<endl;
  /*
  Input: 12
  Output: 2 2 3 0 (why 0 coming i dont know find this)

  Now talk in concept, the complexity of this is O(no of factors),
  There are two loops, in spite of this is not O(n²), 
  because by diving n, we reduce the outer loop.

  But when n= a prime, that will be wrost case and complexity will O(n).

  Now do it in sqrt(n) complexity.
  */
}



/*
Problem: Divisor Analysis CSES

***************************************************************************************************************************
Sub-problem 1: Number of divisors from Prime factors of a number.

Let d(n) be the number of divisors for the natural number, n.

We begin by writing the number as a product of prime factors: n=paqbrc... then the number of divisors, d(n)=(a+1)(b+1)(c+1)...
Link: https://www.youtube.com/watch?v=GjB-YbBCasg&ab_channel=CodeNCode

**************************************************************************************************************************
Sub-Problem 2: Sum of divisors from Prime factors

Link: https://cp-algorithms.com/algebra/divisors.html
*/
