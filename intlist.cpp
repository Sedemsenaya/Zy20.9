//This is the implementation file for IntList
//See intlist.h for class details.
#include "intlist.h"

//add all your function implementations here
IntList::IntList() : count(0) {
	list = nullptr;
}

IntList::~IntList(){
	delete []list;
}

int IntList::getCount() {
	return count;	
}

void IntList::addNum(int num){
	int* temp = new int[count + 1]; // Make a temp pointer
	for(int i = 0; i < count; i++)
	{
		temp[i] = list[i];
	}
	temp[count] = num;
	delete [] list;
	list = temp;
	count++;
}

void IntList::printList(){
	for(int i = 0; i < count; i++){
		cout << list[i];
	}
}


