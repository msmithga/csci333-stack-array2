#include "Stack.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Stack* stack = new Stack(3);
  stack->push(5);
  stack->push(10);
  stack->push(15);

  cout << stack->pop() << endl;
  cout << stack->pop() << endl;
  cout << stack->pop() << endl;

  delete stack;

  return 0;
}
