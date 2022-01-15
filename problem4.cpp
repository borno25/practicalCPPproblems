// // birthday to age calculation

#include <iostream>
#include <ctime>
using namespace std;


int main()
{ 
    
    int date , month, year , current_date, current_month, current_year, dd=0, md=0, yd=0;

    
    
    // Birthdate input   
    
    cout << "Enter Birth date" << endl;
    cin >> date;
    
    cout << "Enter Birth month" << endl;
    cin >> month;
    
    cout << "Enter Birth Year" << endl;
    cin >> year;
    
    cout << "\nBirthdate is " << date << "-" << month << "-" << year << endl;
    
    
  
    // current date/time based on current system
    
    time_t now = time(0);
    tm *ltm = localtime(&now);

    // various components of tm structure put together in variables

    current_year = ltm->tm_year + 1900;
    current_month = 1 + ltm->tm_mon;
    current_date = ltm->tm_mday;

      
    if (current_month > month && current_date > date)
    {
        yd = current_year - year;
        md = current_month - month;
        dd = current_date - date;
    }

    else if (current_month > month && current_date < date)
    {
        yd = current_year - year;
        md = current_month - month - 1;
        dd = (30 - date) + current_date;
    }

    else if (current_month < month && current_date > date)
    {
        yd = current_year - year - 1;
        md = current_month;
        dd = current_date - date;
    }

    else if (current_month < month && current_date < date)
    {
        yd = current_year - year - 1;
        md = current_month;
        dd = (30 - date) + current_date;
    }

    else if (current_month == month && current_date > date)
    {
        yd = current_year - year;
        md = 0;
        dd = current_date - date;

    }

    else if (current_month == month && current_date < date)
    {
        yd = current_year - year - 1;
        md = current_month;
        dd = (30 - date) + current_date;

    }

    else if (current_month > month && current_date == date)
    {
        yd = current_year - year;
        md = current_month - month;
        dd = 0;
    }

    else if (current_month < month && current_date == date)
    {
        yd = current_year - year - 1;
        md = current_month;
        dd = 0;
    }

    else
        cout << "ERROR";


    cout << "You are " << yd << " years, " << md << " months and " << dd << " days \n \n";

}







