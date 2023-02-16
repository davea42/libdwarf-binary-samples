#include <iostream>
#include <string>

// Macro to define a constant value
#define MAX_SIZE 100

// Template for a generic class
template <typename T>
class Stack {
 public:
  Stack() : top_(-1) {}

  void push(const T& value) {
    if (top_ < MAX_SIZE - 1) {
      data_[++top_] = value;
    }
  }

  T pop() {
    if (top_ >= 0) {
      return data_[top_--];
    }
    return T();
  }

 private:
  T data_[MAX_SIZE];
  protected:
  int top_;
};

// Class that inherits from the generic Stack class
class StringStack : public Stack<std::string> {
 public:
  void print() {
    while (top_ >= 0) {
      std::cout << pop() << std::endl;
    }
  }
};

int main() {
  StringStack stack;
  stack.push("Hello");
  stack.push("World");
  stack.print();
  return 0;
}





