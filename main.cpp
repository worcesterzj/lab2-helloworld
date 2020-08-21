// Author: Zachary Worcester
// Description: Hello World in C++
//============================================================

#include <iostream>

using namespace std;

void hello1Function(string name1);
void hello2Function(string name2);

int main() {
  string name1="Zachary Worcester";
  hello1Function(name1);
  string name2="your name2";
  hello2Function(name2);

  return 0;
}

void hello2Function(string name2) {}
