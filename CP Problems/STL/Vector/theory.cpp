
/* ***********************     VECTOR    *********************** */


/* 1.max size of an array declared in main() function is (10^6) for int,double,char datatypes.
   2.max size of an array declared in global is (10^7) for int,double,char datatypes.
   3.max size of an array declared in main() function is (10^7) for bool datatypes.
   4.max size of an array declared in global is (10^8) for bool datatypes
*/

#include<bits/stdc++.h>
using namespace std;

// max size 10^7 for ->int double char
int arr[10000000];

// max size 10^8 for -> bool
bool a[100000000];

int main(){

    // max size 10^6 for ->int double char
    int arr[1000000];

    // max size 10^7 for -> bool 
    bool a[10000000];

    
    /* ************************  Vectors  ************************* */
    
    // Create vector
    vector<int>arr;
    cout<<arr.size()<<endl; // prints-> 0


    // ********************** push_back() **********************
    arr.push_back(8);
    arr.push_back(16);
    cout <<arr.size()<<endl; // prints -> 2

    //********************** emplace_back() ***********************
      /* This is same as push_back(), but quite fast, Used in CP */
    arr.emplace_back(4);
    arr.emplace_back(8);
    cout<<arr.size()<<endl;

    // ********************** pop_back() ***********************
    arr.pop_back();
    cout<<arr.size()<<endl; // prints -> 1

    // ********************** clear() **********************
    arr.push_back(10);
    arr.push_back(12);
    arr.push_back(14);
    cout <<arr.size()<<endl; // prints ->4

    arr.clear();  // Erase all elements at once
    cout <<arr.size()<<endl;  // prints -> 0

    //********* Declare & Initilize vector with size & value **********
       /* Syntex-> vector<data_type>vector_name(size,value) */

    vector<int>vec(4,3); // Creates-> {3,3,3,3}
    vector<int>vec(4,10); // Previous one become-> {10,10,10,10}


    //********************** Copy of Vector ************************

    vector<int>vec1(4,10);
        /*Method 1, using when main vector size will not change in future*/
    vector<int>vecCopy1(vec1);

        /*Method 2, using when main vector also changing size
          This is recommanded method.                               */
    vector<int>vecCopy2(vec1.begin(),vec1.end()); //Like-> [)

        /*Method 3, use when tell copy 1st 5 elements from a 10 size vector*/
    vector<int>raj;
    raj.push_back(2);
    raj.push_back(5);
    raj.push_back(1);
    raj.push_back(0);
    raj.push_back(8);
    raj.push_back(9);
    vector<int>rajCopy(raj.begin(),raj.begin()+3);
    for(auto c:rajCopy)
        cout<<c<<" ";       // This will print 2 5 1

    
    //************************* swap() ****************************
    swap(vec1,vecCopy2);

    //************************* 2D Vector ***************************
   
    vector<vector<int>>vec; // Create a 2D vector named "vec"

    // create a vector named raj1
    vector<int>raj1;
    raj1.emplace_back(1);
    raj1.emplace_back(2);

    // create a vector named raj2
    vector<int>raj2;
    raj1.emplace_back(10);
    raj1.emplace_back(20);
    raj1.emplace_back(30);

    // create a vector named raj3
    vector<int>raj3;
    raj1.emplace_back(100);
    raj1.emplace_back(200);
    raj1.emplace_back(300);
    raj1.emplace_back(400);

    // Push these vector to 2D vector
    vec.push_back(raj1);
    vec.emplace_back(raj2);
    vec.push_back(raj3);

    /* raj1 push_back in 0th index of vec vector
       raj2 push_back in 1st index of vec vector
       raj3 push_back in 2nd index of vec vector  */

    // Print the vector element
    for(auto x:vec){
        for(auto y:x){
            cout << y <<" ";
        }
        cout<<endl;
    }
    


    // **************** Input 2D vector from User ******************

    vector<vector<int>>v;

    // Enter row and coloum
    int row,col;
    cin>>row>>col;

    // Initilize values in vector
    for(int i=0;i<row;i++){
        vector<int>temp;
        for(int j=0;j<col;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    
    // Printing the vector
    for(auto x:v){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }


    // **************** 10 × 20 2D vector ******************

    vector<vector<int>>vec(10,vector<int> (20,0));

    // **************** Arary of vector ******************

    vector<int> arr[4]
       /* here we created 4 size array, where every elements itself a vector.
       Just like int arr[4], by this we create 4 elements, where every element
       is an integer */


    // **************** 10 × 20 × 30 3D vector ******************

    vector<vector<vector<int>>>vec(10,vector<vector<int>>vec(20,vector<int> (30,0));)


}





