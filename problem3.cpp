//2. Timer. Ex- type start to start. stop to stop. pause to pause and resume to resume.
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    
    int ms = 0;
    int s = 0;
    int m = 0;

    while(true){
        
        Sleep(1);
        ms++;
        
        if(ms > 59) {
            s += 1;
            ms = 0;
        }
        if (s > 59) {
            m += 1;
            s = 0;
            ms = 0;
        }
        
        system("cls");
        
        cout << m << ":"
             << s << ":"
             << ms << endl;
    }

    return 0;
}