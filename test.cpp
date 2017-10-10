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
  std::cout << "Int: " << i << EOL;
  std::cout << "Float: " << f << EOL;
  std::cout << "Char: " << c << EOL;
  std::cout << "String: " << s << EOL;
}
