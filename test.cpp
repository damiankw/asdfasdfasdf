#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#define EOL '\n';

// create structures
struct user {
  int id;
  string name;
  string password;
  float payrate;
};
  

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

// add by a default value if none given
int auto_add(int a, int b=1) {
  return a + b;
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
  
  // default values
  cout << "Auto-Addition: " << auto_add(10) << EOL;
  
  // create arrays
  int a_i[] = {10, 20, 30, 40, 50};
  string a_s[] = {"Hello", "world", "how", "are", "you?"};
  char a_c[] = "Hello, world!";
  
  cout << "a_i[0]: " << a_i[0] << EOL;
  cout << "a_i[3]: " << a_i[3] << EOL;
  cout << "a_s[0]: " << a_s[0] << EOL;
  cout << "a_s[4]: " << a_s[4] << EOL;
  cout << "a_c: " << a_c << EOL;
  cout << "a_c[4]: " << a_c[4] << EOL;
  
  // structures
  user u;
  u.id = 0;
  u.name = "damian";
  u.password = "pordword";
  u.payrate = 32.87;
  
  cout << "id:[" << u.id << "] name:[" << u.name << "] password:[" << u.password << "] payrate:[" << u.payrate << "]" << EOL;
}

