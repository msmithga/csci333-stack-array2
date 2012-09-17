#include "Stack.h"
#include <iostream>

Stack::Stack(int initialSize) {
  theStack = new int[initialSize];
  top = 0;
}

Stack::~Stack() {
  delete[] theStack;
}

void Stack::push(int value) {
  int initialSize = size();

  int newSize = initialSize*2;

  int* newStack;

  if(top == initialSize) {
    newStack = new int[newSize];
    for(int i = 0; i < newSize; ++i) {
      newStack[i] = theStack[i];
    }
  }
 
  delete[] theStack;

  theStack = newStack;

  theStack[top] = value;
  top++;
}

int Stack::pop() {
  top--;
  return theStack[top];
}

int Stack::peek() {
  return theStack[top-1];
}

int Stack::size() {
  return top;
}
