#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>
using namespace std;

#define MAX_GUESS 5
#define MAX_NUM 10

int main() {
  // collect a random number
  srand(time(0));
  
  int r = rand() % MAX_NUM;
  int c = 1;
  int g;
  string s;
  
  cout << "*** !!! Guessing Game !!! ***" << endl;
  cout << "You have " << MAX_GUESS << " chances to guess the correct number!" << endl;
  cout << "We have chosen a random number between 0-" << MAX_NUM << " == " << r << endl;
  cout << endl;
  
  while (c <= MAX_GUESS) {
    cout << "> Guess #" << c << ": ";
    getline(cin, s);
    stringstream(s) >> g;
    if (g == r) {
      cout << "Congratulations! You guessed the correct number!!" << endl;
      break;
    } else if (((g > MAX_NUM) || (g < 0)) && (c != MAX_GUESS)) {
      cout << "Your guess is out of bounds, try again!" << endl;
    } else if ((g > r) && (c != MAX_GUESS)) {
      cout << "Too high! Try again!" << endl;
    } else if ((g < r) && (c != MAX_GUESS)) {
      cout << "Too low! Try again!!" << endl;
    } else {
      cout << "Sorry, you've failed! Try again next time!" << endl;
    }
    c++;
  }

}