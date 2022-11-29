# ADT_02_doubly_linked_list

Author: Mahdi Aouchiche (https://github.com/mahdi-aouchiche/ADT_02_doubly_linked_list)

* Implementation of doubly Linked List in an example.
* The example is to create a list which holds integers and which can be printed in the reverse order.
* A new node is created for each integer we want to add to the list.
* Used an operator overload "<<" friend function to output the data from each node.
* the main function is used to run some basic tests and check the correctness of the code.
* The user interface allows to:
    1. ***Add an integer to the front of the list using push_front() function.***
    2. ***Add an integer to the back of the list using push_back() function.***
    3. ***Remove an integer from the front of the list using pop_front() function.***
    4. ***Remove an integer from the back of the list using pop_back() function.***
    5. ***Check if the list is empty using empty() function which returns true or false.***
    6. ***Output all the integers in the list in the reverse order using printReverse() function.***  

### To run the project nicely run the following commands ###
```c++
cmake -S . -B build
cmake --build build/
```
### 1 executable is created, use the following commands to run an executable: ###
```c++
// run the code
./build/integer_list
```