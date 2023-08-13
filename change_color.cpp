#include <iostream>
#include <random>

using namespace std;

void color(int color) {
  switch (color) {
  case 1:
    cout << "\033[0m"; // standard color
    break;
  case 2:
    cout << "\033[31m"; // Red
    break;
  case 3:
    cout << "\033[32m"; // Green
    break;
  case 4:
    cout << "\033[33m"; // Yellow
    break;
  case 5:
    cout << "\033[34m"; // Blue
    break;
  case 6:
    cout << "\033[35m"; // Magenta
    break;
  case 7:
    cout << "\033[36m"; // Cyan
    break;
  }
}

void topic(string title) {
  title = "====================" + title + "====================\n";
  cout << title;
}

int main(void) {

  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dis(1, 7);
  
  int n = 0;
  while (n < 10) {
    color(dis(gen));
    cout << "HELLO WORLD\n";
    n++;
  }
  

  color(1);
  return 0;
}