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

  Stack* newStack = new Stack(newSize);

  if(top > initialSize) {
    for(int i = 0; i < newSize; ++i) {
      newStack[i] = theStack[i];
    }
  }
  //adding a comment to Stack.cpp
  //if theStack is full
  // create new stack twice as big
  // copy all elements to new stack
  // delete old stack
  // point old stack pointer to new stack
  delete theStack;

  newStack[top] = value;

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
