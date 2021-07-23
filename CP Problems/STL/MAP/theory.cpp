// ********************           M  A  P        **********************
/* Time complexity of all oparation in map is logN, N=size of map */

#include<bits/stdc++.h>
using namespace std;

int main(){

   /* key   value
      kavi   10
      mukul  12
      raj    20
      jisu   30

   */

   // Creating Map, or it is called "Dictonary" also

   map<string, int> mpp;
   mpp["kavi"]= 10;
   mpp["mukul"] = 12;
   mpp["raj"] = 20;
   mpp["jisu"] = 30;

   /* Remember Map always store as sorted order,
      according to key and it only stores unique keys,
      So here storing be like,

      jisu->30 , kavi->10 , mukul->12 , raj->20
   */

   // Overwriting properties of mpp1

   map<string, int> mpp1;
   mpp1["raj"]=27;
   mpp1.emplace("raj",20);
   mpp1.emplace("raj",30);

   /* map will store like,
      Map only store unique keys so first store raj->27,
      then it will overwritten raj->20, then raj->30 
   */

   // ********************* Multi-map **********************
   multimap<string , int> mp;

   mp["raj"] = 2;
   mp.emplace("raj", 4);
   /* Multi-map will store reapeted element so,
      it will store both raj->2 and raj->4.
      No sorted keys, no unique keys. 
   */
    
   
   // ********************* Delete Operation by erase() **********************

   /* delete using iterator */
   mpp.erase(mpp.begin()); // Delete 1st element of map
   mpp.erase(mpp.begin(), mpp.begin()+2); // Have confusion

   /* delete using key */
   mpp.erase("mukul"); // delete the instance named mukul

   /* delete total map at once */
   mpp.clear();


   // ********************* find() **********************
   auto it=mpp.find("jisu"); // returns jisu key position iterator
   auto it=mpp.find("simran"); //points to the end ,becausee she is not exists

   // ********************* check map empty or not **********************
   if(mpp.empty())
      cout<<"Yes empty";
   cout<<"Not empty";

   // ********************* Count function **********************
   mpp.count("jisu"); //always returns 1, because map only stores unique element


   // ********************* Printing a Map **********************
   for(auto it:mpp){
      cout<<mpp.first<<" "<<mpp.second<<endl;
   }
   /* Here it will behave like a pair of <string, int>
      mpp.first will print key of map &
      mpp.second will print value of key  
   */

   for(auto it=mpp.begin();it!=mpp.end();it++){
      cout<< mpp->first <<" "<< mpp->second<<endl;
   }
   /* here we used iterator method to print */



   // ********************* Unordered_Map **********************
   /* It does not store any order, all the map operations are valid in unordered_map */

   unordered_map<int , int> umpp;
   // O(1) in almost all cases
   // O(n) in wrost case, n= container size
}
