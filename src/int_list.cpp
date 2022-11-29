#include "../header/int_list.hpp"  

IntList::IntList() {
  dummyHead = new IntNode(0) ;        // create dummyHead and dummyTail
  dummyTail = new IntNode(0) ; 

  dummyHead->next = dummyTail ;       // point dummyHead next to dummyTail
  dummyTail->prev = dummyHead ;       // point dummyTail previous to dummyHead
}

IntList::~IntList() {
  while (! this->empty()) {
    this->pop_front();
  }
}

void IntList::push_front(int value) {
  IntNode* frontNode = new IntNode(value);   // create a node
  frontNode->next = dummyHead->next;         // point the new node next to the list 
  frontNode->prev = dummyHead;               // point new node previous to dummyHead
  dummyHead->next->prev = frontNode;         // point the 1st previous node to frontNode
  dummyHead->next = frontNode;               // point dummyHead next to the new node
}

void IntList::pop_front() {
  if(!this->empty()) {
    dummyHead->next = dummyHead->next->next; // point to the rest of the list
    delete dummyHead->next->prev;            // delete the 1st node
    dummyHead->next->prev = dummyHead;       // point the second node previous to dummyHead  
  }
} 

void IntList::push_back(int value) {
  IntNode* backNode = new IntNode(value);    // create a new node 
  dummyTail->prev->next = backNode;          // point the last node to back node
  backNode->next = dummyTail;                // point the new node next to dummyTail
  backNode->prev = dummyTail->prev ;         // point the new node prev to the previous node
  dummyTail->prev = backNode;                // point the dummyTail prev to the new node 
}

void IntList::pop_back() {
  if(!this->empty()) {
    dummyTail->prev = dummyTail->prev->prev; // point dummyTail prev to the node before last
    delete dummyTail->prev->next;            // delete the last node
    dummyTail->prev->next = dummyTail;       // point the previous node to dummyTail 
  }
}

bool IntList::empty() const {
  if( (dummyHead->next == dummyTail) && (dummyTail->prev == dummyHead) ) {
    return true ;
  } else {
    return false ;
  }
}

ostream& operator<< (ostream &out, const IntList &rhs) {
  if ( !rhs.empty() ) {
    IntNode* currNode = rhs.dummyHead->next ;   // create a pointer to the 1st node of the list
    while(currNode != rhs.dummyTail) {
      out << currNode->data;                    // output the currNode's data 
      currNode = currNode->next;                // move currNode to the next node in the list
      if(currNode != rhs.dummyTail) { 
        out << " ";                             // output a space only between data outputs 
      }
    }
  }
  return out;                                   // return the ostream
}

void IntList::printReverse() const {
  if(! empty()) {
    IntNode* currNode = this->dummyTail->prev;    // point to last element
    
    while (currNode != dummyHead) {
      cout << currNode->data;                     // output currNode data	
      currNode = currNode->prev;                  // move currNode backward in the IntList	
      if(currNode != dummyHead) { 
        cout << " ";                              // output a space only between data outputs 
      }
    }
  }
}