//cpp file to go with Node.h header

#include <iostream>
#include "Node.h"

using namespace std;

//Node constructor
Node::Node(){}

//Set the next node in the linked list
void Node::setNext(Node* node)
{
	next = this;
}

//Return the next node in the linked list
Node* Node::getNext()
{
	return next;
}

//set the number in the linked list
void Node::setNumber(Number* num)
{
	number = num;
}

//Return the number contained in this node
Number* Node::getNumber()
{
	return number;
}

//Node deconstructor
Node::~Node()
{
	delete number;
}
