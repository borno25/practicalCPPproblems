// 2723tk == 1000 500 100 50 20 10 5 2 1 ==

#include <iostream>

using namespace std;

int main() {
    
    int money, change = {0};
    
    int thousands, five_hundreds, hundreds, fiftys, twenties, tens, fives, twos, ones = {0};
    
    cout << "Enter money- ";

    cin >> money;
    
    thousands = money / 1000;
    change = money % 1000;

    five_hundreds = change / 500;
    change = change % 500;

    hundreds = change / 100;
    change = change % 100;

    fiftys = change / 50;
    change = change % 50;

    twenties = change / 20;
    change = change % 20;

    tens = change / 10;
    change = change % 10;

    fives = change / 5;
    change = change % 5;

    twos = change / 2;
    change = change % 2;

    ones = change / 1;

    cout << "1000 => " << thousands << endl;
    cout << "500 => " << five_hundreds << endl;
    cout << "100 => " << hundreds << endl;
    cout << "50 => " << fiftys << endl;
    cout << "20 => " << twenties << endl;
    cout << "10 => " << tens << endl;
    cout << "5 => " << fives << endl;
    cout << "2 => " << twos << endl;
    cout << "1 => " << ones << endl;
    
    return 0;
}