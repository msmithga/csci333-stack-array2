#include "Stack.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Stack* stack = new Stack(3);
  for(int i = 0; i < 20; ++i) {
    stack->push(i);
  }

  for(int i = 0; i < 20; ++i) {
    cout << stack->pop() << endl;
  }

  delete stack;

  return 0;
}
