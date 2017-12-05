#ifndef NODEH
#define NODEH

#include <iostream>
#include "Number.h"

using namespace std;

//define node class
class Node
{
	//publicly available methods
	public:
		Node(); //Node constructor
		void setNext(Node* node); //Set the next node in the linked list
		Node* getNext(); //Return the next node in the linked list
		Number* getNumber(); //Return the number contained in this node
		void setNumber(Number* num);
		~Node(); //Node deconstructor calls the contained number deconstructor (not recursive)
	
	//private variables, only accessible with getters and setters
	private:
		Node* next;
		Number* number;
};

#endif
