#include <iostream>
#include <string>
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
  cout << "Enter a value: ";
  cin >> i;
  cout << "You entered: " << i << EOL;
}
