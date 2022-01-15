// // time problem
// #include <iostream>
// using namespace std;

// int main () {

//   // initialize variables
//   int sec = 0, min = 0, hour = 0, date = 0;

//   // input prompt
//   cout << "Enter Input in second: " << endl;

//   // taking user input in second
//   cin >> sec;
  
//   // calculating date
//   date = sec / (24 * 3600);      // input = 96530 second. (24 * 3600) minute = 86400 minute. (96530 / 86400) minute = 1.117... date, as we declared int so it will take 1.
  
//   // getting the remainder after date
//   sec = sec % (24 * 3600); // (96530 % 86400) = 10130
  
  
//   // calculating hour
//   hour = sec / 3600; // (10130 / 3600) minute = 2.813... hour, as we declared int so it will take 2.
  
//   // getting the remainder after hour
//   sec = sec % 3600; // (10130 % 3600) second = 2930 second
  
  
//   // calculating minute
//   min = sec / 60; // (2930 / 60) hour = 48.833... hour, as we declared int so it will take 48.
  
//   // getting te remainder after minute
//   sec = sec % 60; // (2930 % 60) second = 50 second
 

//   cout << "date: " << date << ", ";
//   cout << "Hour: " << hour << ", ";
//   cout << "Min: " << min << ", ";
//   cout << "Sec: " << sec << endl;
  

//   return 0;
// }


// // 96530
// // Sec - 50
// // Min - 48
// // Hour - 2
// // date - 1

// 1. Convert hours into dates months and years format

// 2. Timer. Ex- type start to start. stop to stop. pause to pause and resume to resume.

// 3. Birthdate to Age calculation.

// 4. Leap Year Finder.

// 5. Decimal To Binary and Binary to Decimal Convert (Non Floating)

// 6. Concatenate two or multiple strings.

// 7. Frequency of characters in a sentence and print them

// 8. Palindrome Checker

// 9. There are two array. One for usernames and another one for passwords of those users. Check if an user is valid or invalid when they try to login.

// 10. Input a word and make the first letter uppercase of that word if it’s not.


//1. Convert sec into min hour and date format

// #include <iostream>

// using namespace std;

// int main() {

//   int sec, min, hour, date;

//   cout<<"Enter Second: ";

//   cin >> sec;


//   if(sec == 0) {
//     cout << "invalid" << endl;
//   }
//   else {
//     date = sec / 86400;
//     sec = sec % 86400;

//     hour = sec / 3600;
//     sec = sec % 3600;

//     min = sec / 60;
//     sec = sec % 60;

//     cout << "date: " << date << ", ";
        
//         cout << "Hour: " << hour << ", ";
        
//         cout << "Min: " << min << ", ";
        
//         cout << "Sec: " << sec << endl;
//   }

//   return 0;
// }

