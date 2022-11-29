#ifndef __INT_LIST_HPP__
#define __INT_LIST_HPP__

#include <iostream>
using namespace std;

struct IntNode {
    int data;
    IntNode *prev;
    IntNode *next;
    IntNode(int data) : data(data), prev(0), next(0) {}
};

class IntList {
  private:
    IntNode * dummyHead ;
    IntNode * dummyTail ;
  
  public:
    /* Constructor
     * Initializes an empty list with dummy head and dummy tail.
    */
    IntList();

    /* Destructor
     * Deallocates all remaining dynamically allocated memory (all remaining IntNodes).
    */
    ~IntList();

    /* Inserts a data value (within a new node) at the front end of the list.
     * This must be an O(1) operation.
    */
    void push_front(int value);

    /* Removes the node at the front end of the list (the node after the dummy head).
     * Does  nothing if the list is already empty. This must be an O(1) operation.
    */ 
    void pop_front(); 

    /* Inserts a data value (within a new node) at the back end of the list.
     * This must be an O(1) operation.
    */
    void push_back(int value);

    /* Removes the node at the back end of the list (the node before the dummy tail).
     * Does nothing if the list is already empty.
     * This must be an O(1) operation.
    */
    void pop_back();

    /* Returns true if the list does not store any data values 
     * (it only has dummy head and dummy tail), otherwise returns false.
    */
    bool empty() const;

    /* A global friend function that outputs to the stream all of the integer
     * values within the list on a single line, each separated by a space.
     * This function does NOT send to the stream a newline or space at the end.
    */
    friend ostream & operator<<(ostream &out, const IntList &rhs);

    /* Prints to a single line all of the int values stored in the list in REVERSE order,
     * each separated by a space.
     * This function does NOT output a newline or space at the end.
    */
    void printReverse() const;
};

#endif  // __INT_LIST_HPP__