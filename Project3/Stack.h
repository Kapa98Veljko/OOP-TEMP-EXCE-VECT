#ifndef STACK_H
#define STACK_H

#include"Exceptions.h"
#include<iostream>
#include<string>

using namespace std;

//As i mentioned my class has to generic which is accomplish with this syntax
//T will be some type that i will initialize and now i can pass also a some integer that represents max number of elements
//I could have done that with
//const int MaxStackSize=256 but this is better!!
template<typename T, int MaxStackSize>
class Stack {
public:
	Stack();//Constructor
//Now i will need some methods
//Because i use exceptions i dont need bool return tzpe any more
	void push(T in);
	T pop();
	bool isEmpty();
private:
	//This is my array of elements of type T
	T stack[MaxStackSize];
	int sp;//stack pointer
};

//Syntax for constructor is:
template<typename T,int  MaxStackSize>
Stack<T, MaxStackSize>::Stack() {
	sp = 0;

}
//All of method definitions, if i use templates have to be in .h file (can be seen by everone)
//Syntax is 


template<typename T, int MaxStackSize>
void Stack<T, MaxStackSize>:: push(T in) {
	//Here exception should be trown if size == MaxStackSize
	//If exception is trown program is delayed and it seek's first available try/catch that deals with it
	if (sp == MaxStackSize ) {
		throw new StackOverFlowException("Stek je pun.Ne moze da se odradi operacija push!");
	
	}
 stack[sp++] = in;
}

template<typename T, int MaxStackSize>
T Stack<T, MaxStackSize>::pop() {
	if (sp == 0) {
		throw new StackUnderFlowException("Stek je prazan.Ne moze da se odradi operacija pop!");
	}
	return stack[--sp];
	
}

template<typename T, int MaxStackSize>
bool Stack<T, MaxStackSize>::isEmpty() {
	return sp == 0;
}

#endif //STACK_H
