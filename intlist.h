//Class for a list of numbers
//Implemented using dynamic int array


#include <iostream>
using namespace std;
//global constants
const int CAP = 10;

//class definition for a list of numbers and its count
class IntList
{
  public:
    //To Do: constructor
    IntList();
    //To Do: destructor
    ~IntList();
    //To Do: getCount function
    int getCount();
    //add and print functions
    void addNum(int);
    void printList();
  private:
    int *list;
    int count;
};
