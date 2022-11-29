/* some of Main.cpp was provided by professor LePendu in Slack */

#include <iostream>
#include "../header/int_list.hpp"
using namespace std;

int main() {
  
  cout << endl << "*** Start of Tests *** " << endl;

  IntList list;
  cout << "empty: " << list << endl;

  list.pop_front();
  cout << "pop front on an empty list: " << list << endl;

  list.pop_back();
  cout << "pop back on an empty list: " << list << endl;

  list.push_front(0);
  cout << "push front 0 on empty list: " << list << endl;

  list.pop_front();
  cout << "pop front : " << list << endl;

  list.push_back(9);
  cout << "push back 9 on empty list: " << list << endl;

  list.pop_back();
  cout << "pop back : " << list << endl;

  list.push_front(2);
  cout << "push front 1: " << list << endl;

  list.push_front(1);
  cout << "push front 1: " << list << endl;

  list.push_back(5);
  cout << "push back 2: " << list << endl;

  list.push_back(6);
  cout << "push back 3: " << list << endl;

  list.push_front(0);
  cout << "push front 0: " << list << endl;

  cout << "Does << operator outputs a space at the end: " << list << "?" << endl;

  cout << "printReverse & check for a space at the end: "; 
  list.printReverse();
  cout << "?" << endl;

  list.pop_back();
  cout << "pop back: " << list << endl;

  list.pop_front();
  cout << "pop front: " << list << endl;

  cout << "*** End of Tests ***" << endl;

  return 0;
}