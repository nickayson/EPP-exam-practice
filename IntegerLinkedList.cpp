// ADD ANSWER TO THIS FILE

#include "IntegerLinkedList.h"

 int IntegerLinkedList::getSum(){
   SNode *tmp = head; // head of mylist
   int sum = 0; //sum = 0 until modified
   while(tmp != nullptr){
     // if(tmp -> next == nullptr) break;
     sum = sum + tmp -> elem; //add the elements as we go through the list
     tmp = tmp -> next; // go to the next pointer
   }  //keeps going until points to null
   return sum;
 } // COMPLETE THIS FOR PROBLEM 2

int IntegerLinkedList::getSumRecurse (SNode *ptr) {
  //return -1; // COMPLETE THIS FOR PROBLEM 3
  if (ptr == nullptr){
    return 0;
  }
  return ptr -> elem + getSumRecurse(ptr -> next);  // adding elem and going through with the helper function
  //getSumRecurse(ptr -> next) very important for rn
}

void IntegerLinkedList::addFront(int x) {
  SNode *tmp = head;
	head = new SNode;
	head->next = tmp;
	head->elem = x;
}

// recursion helper function called from main for PROBLEM 3
int IntegerLinkedList::getSumRecurseHelper () {
  return getSumRecurse(head);
}
