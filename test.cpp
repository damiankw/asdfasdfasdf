#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#define EOL '\n';

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
  
  // accept input
  cout << "Enter an int: ";
  getline(cin, s);      // get the line
  stringstream(s) >> i; // turn string into int
  cout << "You entered: " << i << EOL;
  
  cout << "Enter a string: ";
  getline(cin, s);
  cout << "You entered: " << s << EOL;
}
