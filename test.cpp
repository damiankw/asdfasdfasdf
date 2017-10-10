#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#define EOL '\n';

// return the addition
int add(int a, int b) {
  return a + b;
}

// output the addition
void show_add(int a, int b) {
  cout << a + b;
}

// set a to the addition
void set_add(int& a, int b) {
  a = a + b;
}

int main() {
  // basic output
  std::cout << "Hello, world!" << EOL;
  std::cout << "This is my test application" << EOL;
  
  // set up some variables
  int i = 23;
  float f = 1.232;
  char c = 'a';
  string s = "My string!";
  
  // output some variables
  cout << "Int: " << i << EOL;
  cout << "Float: " << f << EOL;
  cout << "Char: " << c << EOL;
  cout << "String: " << s << EOL;
  
  // accept int input
  cout << "Enter an int: ";
  //getline(cin, s);      // get the line
  //stringstream(s) >> i; // turn string into int
  cout << "You entered: " << i << EOL;
  
  // accept string input
  cout << "Enter a string: ";
  //getline(cin, s);
  cout << "You entered: " << s << EOL;
  
  // while loop
  cout << "Counting .. ";
  while (i > 0) {
    cout << i << " .. ";
    i--;
  }
  cout << EOL;
  
  // use a returning function
  cout << "Addition: " << add(1, 5) << EOL;
  
  // use an output function
  cout << "Addition: ";
  show_add(10, 5);
  cout << EOL;
  
  // passing by reference not value
  i = 10;
  set_add(i, 33);
  cout << "New int: " << i << EOL;
}

