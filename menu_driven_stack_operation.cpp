#include<iostream>

#include<string>

using namespace std;

class Stack {
  private:
    int top;
  int arr[5];

  public:
    Stack() {
      top = -1;
     // for (int i = 0; i < 5; i++) {
       // arr[i] = 0;
      //}
    }

  bool isEmpty() {
    if (top == -1)
      return true;
    else
      return false;
  }
  bool isFull() {
    if (top == 4)
      return true;
    else
      return false;
  }

  void push(int val) {
    if (isFull()) {
      cout << "stack overflow" << endl;
    } else {
      top++; // 1
      arr[top] = val;
    }
  }

  int pop() {
    if (isEmpty()) {
      cout << "stack underflow" << endl;
      return 0;
    } else {
      int popValue = arr[top];
      arr[top] = 0;
      top--;
      return popValue;
    }
  }

  int count() {
    return (top + 1);
  }

  int peek(int pos) {
    if (isEmpty()) {
      cout << "stack underflow" << endl;
      return 0;
    } else {
      return arr[pos];
    }
  }

  void change(int pos, int val) {
    arr[pos] = val;
    cout << "value changed at location " << pos << endl;
  }

  void display() {
    cout << "All values in the Stack are " << endl;
    for (int i = top; i >= 0; i--) {
      cout << arr[i] << endl;
    }
  }
};

int main() {
  Stack s1;
  int option, postion, value;

  do {
    cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Push()" << endl;
    cout << "2. Pop()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. isFull()" << endl;
    cout << "5. peek()" << endl;
    cout << "6. count()" << endl;
    cout << "7. change()" << endl;
    cout << "8. display()" << endl;
    cout << "9. Clear Screen" << endl << endl;
