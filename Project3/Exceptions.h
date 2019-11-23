#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H
//First thing i need to include library exception
#include<exception>
#include<iostream>
using namespace std;

//The class exception exsist and now i will make public child hahaha

class StackException :public exception {
public:
	//Only thing needed for now is constructor that will pass the message to parent class exception
	StackException(const char* msg) :exception(msg) {}
};

//Now i know for to exceptions that can happen to stack it's overflow and underflow
//I also make new classes each should be one exception and chid classes of StackException

class StackOverFlowException :public StackException {
public:
	StackOverFlowException(const char* exceptionDesc) :StackException(exceptionDesc) {}
};

class StackUnderFlowException :public StackException {
public:
	StackUnderFlowException(const char* exceptionDesc) :StackException(exceptionDesc) {}
};

#endif EXCEPTIONS_H
//Dakle na srpskom jer mi je lakse
//Svaki eksepsn mi je jedna klasa
//i samo poruku o gresci prosledim roditeljskoj klasi ok kako ovo radi kako on zna sta sam ja hteo