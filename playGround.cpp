// time problem
#include <iostream>
using namespace std;

int main () {

  // initialize variables
  int sec = 0, min = 0, hour = 0, day = 0;

  // input prompt
  cout << "Enter Input in second: " << endl;

  // taking user input in second
  cin >> sec;
  
  // calculating day
  day = sec / (24 * 3600);      // input = 96530 second. (24 * 3600) minute = 86400 minute. (96530 / 86400) minute = 1.117... day, as we declared int so it will take 1.
  
  // getting the remainder after day
  sec = sec % (24 * 3600); // (96530 % 86400) = 10130
  
  
  // calculating hour
  hour = sec / 3600; // (10130 / 3600) minute = 2.813... hour, as we declared int so it will take 2.
  
  // getting the remainder after hour
  sec = sec % 3600; // (10130 % 3600) second = 2930 second
  
  
  // calculating minute
  min = sec / 60; // (2930 / 60) hour = 48.833... hour, as we declared int so it will take 48.
  
  // getting te remainder after minute
  sec = sec % 60; // (2930 % 60) second = 50 second
 

  cout << "Day: " << day << ", ";
  cout << "Hour: " << hour << ", ";
  cout << "Min: " << min << ", ";
  cout << "Sec: " << sec << endl;
  

  return 0;
}


// 96530
// Sec - 50
// Min - 48
// Hour - 2
// Day - 1