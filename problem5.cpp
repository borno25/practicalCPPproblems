#include<iostream>

using namespace std;

int main() {

    float money;
    float friends;

    cout << "How much money?" << endl;
    cin >>money;

    cout << "\nHow many friends" << endl;
    cin >>friends;

    cout << "each friend will have " << friends/money << endl;

    return 0;
}

