#include <chrono>
#include <iomanip>
#include <iostream>

using namespace std;
using namespace chrono;

void time() {
  // Create a time_point with the desired offset
  auto now = system_clock::to_time_t(system_clock::now());
  tm *localtm = localtime(&now);

  cout << endl << put_time(localtm, "%A %B %Y") << endl;
  cout << put_time(localtm, "%H:%M") << endl;
}

int main() {
  string nome;
  cout << "Type your name: ";
  cin >> nome;

  cout << "Hello " << nome << ", nice to meet you!" << endl;


  time();
  return 0;
}