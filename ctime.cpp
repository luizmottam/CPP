#include <ctime>
#include <iostream>

using namespace std;

int main() {
  time_t now = time(0);
  tm *localtm = localtime(&now);

  cout << asctime(localtm);
  time_t hour = localtm->tm_hour;
  time_t min = localtm->tm_min;

  time_t day = localtm->tm_mday;
  time_t month = localtm->tm_mon + 1;
  time_t year = localtm->tm_year + 1900;

  if (month <= 9) {
    cout << day << "/0" << month << "/" << year << endl;
  } else {
    cout << day << "/0" << month << "/" << year << endl;
  }
  cout << hour << ":" << min << endl << endl;

  // Use strftime to format the date and time
  char formattedDate[12]; // Buffer to store the formatted date
  strftime(formattedDate, sizeof(formattedDate), "%d %b %Y", localtm);

  cout << formattedDate << endl; // Print the formatted date

  return 0;
}