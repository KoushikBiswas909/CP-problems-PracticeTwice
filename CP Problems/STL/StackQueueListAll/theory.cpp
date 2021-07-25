// ****************  STACK & QUEUE & PRIORITY_QUEUE *******************
 #include<bits/stdc++.h>
 using namespace std;

 int main(){

   // ****************  STACK  *******************
   /* Stack is a last in First out (LIFO) DS.
      Main functions: Push() & emplace()
                      pop()
                      top()
                      size()
                      empty()

      Stack can be implement by Array or Linkedlist                
   */
   stack<int> st;

   st.push(2);
   st.emplace(3);
   st.push(5);
   st.emplace(9);

   cout<< st.top() <<endl; // Prints 9
   st.pop();               // Delete top element, which came at last
   cout<< st.top() <<endl; // Prints 5
   st.pop();
   cout<< st.top() <<endl; // Prints 3
   st.pop();
   cout<< st.top() <<endl; // Prints 2
   st.pop();
   cout<< st.top() <<endl; // Prints nothing throw error

   /* Do not use top() on a empty stack, it will give run time error during CP,
      Always make sure stack has minimum one element to perfrom top(),
      So always try to write a if() function. 
   */
   if(!st.empty()){
      cout << st.top() <<endl;
   }


   //****************  empty()  *******************

   /* empty() with bool function */
   bool flag= st.empty(); //returns true if stack is empty.

   /* Delete the whole stack at once.(we can not use clear() here) */
   while(!st.empty()){
      st.pop();
   }


   //****************  size()  *******************
   cout << st.size() <<endl; //returns the current size of stack




   // ****************  QUEUE  *******************
   /* Queue is First In First Out DS
      Main functions: push() and emplace()
                      pop()
                      front()
                      size()
                      empty()
      All operetions on queue has O(1) compleity, despite of delete operetion                
   */

   queue<int> q;

   q.push(1);
   q.push(3);
   q.push(5);
   q.push(8);


   for(int i=0;i<10;i++) q.push(i);

   cout<< q.front() <<endl; // Prints 1
   q.pop();                 // delete the front element 1
   cout<< q.front() <<endl; // Prints 3

   //****************  empty()  *******************
   while(!q.empty()){
      q.pop();         // It will deletes total queue, It has O(n) complexity
   }




   //****************  PRIORITY QUEUE  *******************
   /* Stores all elements in sorted order.
      It is a queue which keeps large element on top.
      Main functions: push()
                      pop()
                      top()
                      size()
                      empty()
      It is internally implement heapify property                

   */

   priority_queue<int> pq;

   pq.push(1);
   pq.push(5);
   pq.push(2);
   pq.push(6);

   // Priority_queue storing like this 1->2->5->6 ,top points to 6
   cout << pq.top() <<endl; // Prints 6
   pq.pop(); // delete top element
   cout << pq.top() <<endl; // Prints 5


   //****************  priority queue with pair  *******************
   priority_queue<pair<int,int>> pq1;

   pq1.push(1,3);
   pq1.push(1,8);
   pq1.push(1,6);

   // It will store like 1,3 ->1,6 ->1,8


   //**************** MINIMUM PRIORITY_QUEUE *******************


   // Brute-force Method

   /* It means top of pq points smallest element
      Steps:
      Input elements with negation. (this make, -1 is bigger than -6)
      Output elements with negation. (This make -1 × -1 = +1) 
   */

   priority_queue<int> pq3;

   pq3.push(-1);
   pq3.push(-5);
   pq3.push(-2);
   pq3.push(-6);

   cout << -1 * pq3.top() <<endl; // Prints 1

   // It stores like -6 -5 -2 -1, -1 on the top


   // Optimal Method
   priority_queue<int, vector<int>, greater<int>> pq3;

   pq.push(1);
   pq.push(5);
   pq.push(2);
   pq.push(6);

   cout << pq3.top() <<endl; // Prints 1

   // Optimal method for pair , string it can any conainer
   priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq3;

   
   //**************** DEQUEUE *******************

   /* Double ended queue , it works like vector ,But it is better than vector.
      Main functions: push_front()
                      push_back()
                      pop_front()
                      pop_back()
                      begin() , end(), rbegin() , end()
                      size() , clear() , empty() , at()
   */
   dequeue<int> dq;


   //****************   LIST   *******************
   /* List implemented a doubly linked list internally.
      List has a special delete operation remove(), which removes any element
      from the list in constant time O(1).
      Main operations: remove() , removes any element in O(1) time 
                       push_front()
                       push_back()
                       pop_front()
                       pop_back()
                       begin() , end(), rbegin() , end()
                       size() , clear() , empty() , at()
    */
   
   list<int> ls;

   ls.push_front(3);
   ls.push_front(4);
   ls.push_front(8);

   ls.remove(4); // time comlexity is O(1)

   

 }
