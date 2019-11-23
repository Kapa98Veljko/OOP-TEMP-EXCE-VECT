#include<iostream>
#include"Stack.h"
using namespace std;
//alphabeticaly i guess

int main() {
//Now i need some test so for that purpose i will make some stack of ints
	Stack<int, 3>* stack = new Stack<int,3>;
//What's the trick now. First i will make try part of ccode like this

	try {
		cout << "PUSH 1" << endl; stack->push(1);
		cout << "PUSH 2" << endl; stack->push(2);
		cout << "PUSH 3" << endl; stack->push(3);
		//When you delete coment lines this line will throu exception
		//cout << "PUSH 4" << endl; stack->push(4);
		cout << "POP =" << stack->pop()<<endl;
		cout << "POP =" << stack->pop()<<endl; 
		cout << "POP =" << stack->pop()<<endl;
		cout<<"POP ="<<stack->pop()<<endl;

	}
	catch (StackOverFlowException * se) {
	//This is where message will be written if exception is trown
		cout << se->what() << endl;
	}
	catch (StackUnderFlowException * se) {
		cout << se->what() << endl;
	}

	catch (StackException * se) {
		cout << se->what() << endl;
	}
	delete stack;
	return 0;
}
	