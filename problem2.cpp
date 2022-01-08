// 1. Convert sec into min hour and day format

#include <iostream>

using namespace std;

int main() {
    // initialization
    int   sec {0}, min {0}, hour {0}, day {0};

    cout << "Enter sec that you want to convert : \n";
    
    // input
    cin >> sec;
    
    
    // operation
    if(sec == 0) {
        cout << "00" << endl;
    }
    else {
        day = sec / (3600*24); // (3600*24) = 86400
        sec = sec % (3600*24); // (3600*24) = 86400

        hour = sec / 3600;
        sec = sec % 3600;

        min = sec / 60;
        sec = sec % 60;

        cout << "Day: " << day << ", ";
        
        cout << "Hour: " << hour << ", ";
        
        cout << "Min: " << min << ", ";
        
        cout << "Sec: " << sec << endl;

    }

    
    return 0;
}