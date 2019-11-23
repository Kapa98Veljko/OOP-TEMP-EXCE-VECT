#ifndef STACK_H
#define STACK_H

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
	bool push(T in);
	bool pop(T* out);
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
bool Stack<T, MaxStackSize>:: push(T in) {
	if (sp == MaxStackSize - 1) {
		cout << "Doslo je do prekorracenja!" << endl;
		return false;
	}
 stack[sp++] = in;
 return true; 
}

template<typename T, int MaxStackSize>
bool Stack<T, MaxStackSize>::pop(T* out) {
	if (sp == 0) {
		cout << "Ne postoji sadrzaj u steku!" << endl;
		return false;
	}
	*out = stack[--sp];
	return true;
}

template<typename T, int MaxStackSize>
bool Stack<T, MaxStackSize>::isEmpty() {
	return sp == 0;
}

#endif //STACK_H
