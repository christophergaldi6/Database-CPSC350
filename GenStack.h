/**
Christopher Galdi
2299616
galdi@chapman.edu
CPSC 350-01
Assignment 5 Faculty/Student Registrar Database
*/

#include <iostream>

using namespace std;

class GenStack
{
public:
  GenStack();
  GenStack(int maxSize);
  ~GenStack();

  void push(char d);
  char pop();
  char peek();

  bool isFull();
  bool isEmpty();
  int size;
  int top;

  char *myArray;

};
