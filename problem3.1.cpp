// make a program sleep like this =======
// #include <windows.h>

// Sleep(number of milliseconds);


#include <iostream>
#include <conio.h>
#include <process.h>
#include <dos.h>
#include <windows.h>

using namespace std;

int h = 0, m = 0, s = 0, ms = 0;
char ch ='p';

int main()
{
    void watch();
    watch();

    while (1)
    {
        if (kbhit())
            ch = getch();
        if (ch =='s'|| ch =='S')
            break;
        if (ch =='e'|| ch =='E')
            exit(0);
    }

    while (1)
    {
        watch();
        Sleep(1000);

        if (kbhit())
            ch = getch();

        if (ch =='r'|| ch =='R')
        {
            h = m = s = ms = 0;
            watch();

            while (1)
            {
                if (kbhit())
                    ch = getch();
                if (ch =='s'|| ch =='S')
                    break;
                if (ch =='e'|| ch =='E')
                    exit(0);
            }
        }
        else if (ch =='p'|| ch =='P')
            while (1)
            {
                if (kbhit())
                    ch = getch();
                if (ch =='s'|| ch =='S')
                    break;
                if (ch =='e'|| ch =='E')
                    exit(0);
                if (ch =='r'|| ch =='R')
                {
                    ch ='c';
                    h = m = s = ms = 0;
                    watch();
                }
            }
        else if (ch =='e'|| ch =='E') {
            exit(0); }

        if(ms != 99) {
            ms++;
        }
        else
        {
            ms = 0;
            if (s != 59)
                s++;
            else
            {
                s = 0;
                if (m != 59)
                    m++;
                else
                {
                    m = 0;
                    h++;
                }
            }
        }
    }
}

void watch()
{
    system("cls");
    cout <<"\n\n\n\n\n\t\t\t\t############ #";
    cout <<"\n\t\t\t\t #Stopwatch #";
    cout <<"\n\t\t\t\t############ #";
    cout <<"\n\n\t\t\t\t  "<< h <<":"<< m <<":"<< s <<":"<< ms;

    cout <<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tPress Key";
    cout <<"\n\t\t\t\t\t\t\t———";
    cout <<"\n\t\t\t\t\t\t\ts->Start";
    cout <<"\n\t\t\t\t\t\t\tp->Pause";
    cout <<"\n\t\t\t\t\t\t\tr->Reset";
    cout <<"\n\t\t\t\t\t\t\te->Exit";
}