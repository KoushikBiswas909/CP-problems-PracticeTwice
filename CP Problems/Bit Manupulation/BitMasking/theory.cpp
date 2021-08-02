/*

   *******    BIT MASKING     *******

   All operations on set, where add,remove,print all funcs are O(1) complexity.

   add(x)= musk | (1<<x)
   remove(x)= musk ^ (1<<x)
   print(x)= for(bits=0 to 60){
    if((x & (1<<x)) != 0)
       cout<<bits
   }

   NOTE: In a DP problem when constraints < 63, then wee use bit masking. 
         Otherwise never use this.
*/



