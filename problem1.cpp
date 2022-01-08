// 1. Convert sec into min hour and day format

#include <iostream>

using namespace std;

int main() {

    long long int n, sec, min, hour, day;

    cout << "Enter sec that you want to convert : \n";

    cin >> n;
    // operation
    sec = n;
    min = n/60;
    hour = n/3600;
    day = n/86400;
    
    // printing
    cout << "sec : " << sec << endl;
    cout << "min : " << min << endl;
    cout << "hour : " << hour << endl;
    cout << "day : " << day << endl;

    return 0;
}