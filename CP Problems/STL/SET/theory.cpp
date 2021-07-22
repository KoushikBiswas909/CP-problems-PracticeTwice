// *********************        SET        ***********************

/* Where to use set and unordered set ?
-> In CP, If in problem can be solved by not storing elements in accsending order,
 always 1st use unordered_set, then if you get TLE then use set, 99% case use Unordered_set.

 Because Unordered_set has time complexity O(1) in avg case, where in set all
 complexity in logN, N=size of set */




#include<bits/stdc++.h>
using namespace std;

int main(){
/* ************************** SET ************************** 
       insert() or empalce() */

    /* you are given n numbers, find unique elements from here.
       Ex: Given array arr[5]={1,5,2,5,2}, so the unique elements are {1,2,5} 
    */

    set<int>st; // Declare set
    int n;
    cin>>n; // Number of element in given array
    for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.insert(x); // complexity of insert() is logN,N=no of element in set

    // You can use st.emplace(x), which is litlebit faster
    }

    // Accessing elements from a set

    cout<<*st.begin()<<endl;     // Prints 1
    cout<<*st.begin()+1<<endl;   // Prints 2
    cout<<*st.begin()+2<<endl;   // Prints 3

    // Erase function ( delete oparation )

    /* delete the 1st element of set, set_name.erase(iterator), set_name.erase(startIterator, endItreator) */
    st.erase(st.begin());
    cout<< *st.begin() <<endl; // Now st.begins points 2, so o/p will 2

    /* delete couple of element */
    st.erase(st.begin(), st.begin()+2); // I have confusion here 
    cout<<*st.begin()<<endl;

    /* delete whole set */
    st.erase(st.begin(),st.end());

    /* delete specific element */
    st.erase(5); // It will delete the element "5"


    // *************  Copying a set to another set  *************

    set<int> set1={1,2,3,4,5};
    set<int> set2(set1.begin(),set1.end());

    // *********************  find() function  ***********************

    set<int> st1={1,5,7,8};

    auto it=st1.find(7); // Returns an itretor to 7, in logN complexity
    auto it=st1.find(9); // Returns an itretor to st1.end(), means right after end.

    // *************** Print size of the set *****************

    cout<< st.size();

    // *************** Print elements of set *****************

     // Method 1:
    for(int i=st.begin();i!=st.end();i++){
      cout<<*it<<endl;
    }

     // Method 2:
    for(auto it: st){
      cout<<it<<endl;
    }


    // *************** Unordered set *****************

    /* Unordered set is as same as set, its store only unique elements,.......
       But not in accsending order, elements stores here in any order. 

       Time Complexity-   Avg case-> O(1)
                          Wrost case-> O(N), linear complexity, N= set size */

    unordered_set<int> st;
    st.insert(5);
    st.insert(4);
    st.emplace(8);

    // It will store in {5,4,8} order or {4,8,5} any order can have



    // ***************   Multi-set   *****************

    /* Multi-set allowes to store all elements including reapeted elements,
    in Sorted-order. All oparation on multiset is in logN time. */

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.emplace(2);
    ms.insert(2);
    ms.insert(3);

    // Multiset -> {1,1,2,2,3} (Not unique but accsending order)
    /* All operation as same as set and unordered set */

    ms.erase(2); // Deletes all 2's present in the multi-set.
    ms.erase(ms.begin(),ms.end()); // Deletes all multiset.
    ms.clear(); // Deletes entire set.

    auto it=ms.find(2); // Returns an iterator pointing to the first element of 2


    /* More about erase() function
     there are three types of erase()
     1. one iterator like st.erase(st.begin());
     2. start-end iterator like st.begin(start_iterator, end_iterator);
     3. key erase like st.erase(key);
    */



    
}
