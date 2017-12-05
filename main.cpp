#include <iostream>
#include "Node.h"
#include "Number.h"
#include <stdlib.h>
int main()
{
	char* userInput = new char[30];
	cout << "What is the first number?" << endl;
	cin.get(userInput, 30);
	Number* first = new Number(atof(userInput));
	Node* one = new Node();
	one->setNumber(first);
	cout << "Contained Number: " << one->getNumber()->getNumber() << endl;
	
	cout << "What is the second number?" << endl;
	cin.get(userInput, 30);
	Number* second = new Number(atof(userInput));
	Node* two = new Node();
	two->setNumber(second);
	one->setNext(two);
	cout << "Contained Number: " << two->getNumber()->getNumber();

	Number* third = new Number(3.14159);
	Node* three = new Node();
	three->setNumber(third);
	two->setNext(three);

	Number* fourth = new Number(123.456);
	Node* four = new Node();
	three->setNext(four);
	
	/*Node* next = one;
	while(next != NULL)
	{
		cout << "Contained number: " << next->getNumber()->getNumber() << endl;
		next = next->getNext();
	}*/
		
	return 0;
}
