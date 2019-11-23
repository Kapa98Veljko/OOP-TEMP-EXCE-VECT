#include<iostream>
#include"Stack.h"
using namespace std;
//alphabeticaly i guess

int main() {
//So what i want to achieve is to make my second template, but now i want to know the story behind it 
//If i do not know what is the type of the data that my class and the methods will receive than i make template that recognies one of 4 base type
//That is shownin .h file

//And now to make some ttest examples
//So what is the rule here
//The syntax is this
	Stack<int, 256>* stack = new Stack<int,256>;
	Stack<char, 128>* stackC = new Stack<char,128>;
//Whit these objects i can anything that is inside the boundary of methods defined 

	stack->push(2);
	stack->push(1);
	int x;
	stack->pop(&x);
	cout << x << endl;

	stackC->push('a');
	stackC->push('B');

	char c;
	stackC->pop(&c);
	cout << c << endl;
	stackC->pop(&c);
	cout << c << endl;
	stackC->pop(&c);
	delete stack;
	delete stackC;
}