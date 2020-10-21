#include <iostream>
#include <string>

using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;
                  
    bool isThirty()
    {
        // 9: September, 4: April, 6: June, 11: November
        return ((month == 9) || (month == 4) || (month == 6) || (month == 11));
    }

    bool isDayValid()
    {
        if (isThirty())
        {
            if (day > 30)
            {
                return false;
            }
        }
        return (day > 0) && (day < 32);
    }

    bool isMonthValid()
    {
        return (month > 0) && (month < 13);
    }

    bool isYearValid()
    {
        return year > 0;
    }

    bool isLeapYear()
    {
        if ((year % 4 == 0) && (year % 100 != 0))
        {
            return true;
        }
        else if ((year % 100 == 0) && (year % 400 == 0))
        {
            return true;
        }
        return false;
    }

    void nextDateHelper(int *tempDay, int *tempMonth, int maxDays, int *tempYear)
    {
        if (day == maxDays)
        {
            *tempDay = 1;
            *tempMonth = (month % 12) + 1;
            if (month == 12)
            {
                *tempYear = year + 1;
            }
            else
            {
                *tempYear = year;
            }
        }
        else
        {
            *tempDay = day + 1;
            *tempMonth = month;
            *tempYear = year;
        }
    }

public:
    void setDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    bool isDateValid()
    {
        bool isDay = isDayValid();
        bool isMonth = isMonthValid();
        bool isYear = isYearValid();
        bool isLeap = isLeapYear();
        bool isFebValid = false;
        if (isLeap)
        {
            isFebValid = (month != 2) || (day <= 29);
        }
        else
        {
            isFebValid = (month != 2) || (day <= 28);
        }
        return (isDay && isMonth && isYear && isFebValid);
    }

    string nextDate()
    {
        if (!isDateValid())
        {
            return "invalid";
        }
        int tempDay;
        int tempMonth;
        int tempYear;

        if (month == 2)
        {
            if (isLeapYear())
            {
                nextDateHelper(&tempDay, &tempMonth, 29, &tempYear);
            }
            else
            {
                nextDateHelper(&tempDay, &tempMonth, 28, &tempYear);
            }
        }
        else if (isThirty())
        {
            nextDateHelper(&tempDay, &tempMonth, 30, &tempYear);
        }
        else
        {
            nextDateHelper(&tempDay, &tempMonth, 31, &tempYear);
        }
        return to_string(tempDay) + "/" + to_string(tempMonth) + "/" + to_string(tempYear);
    }
};

int main()
{
    Date date;
    int day, month, year;
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;

    date.setDate(day, month, year);
    string nextDate = date.nextDate();
    if (nextDate != "invalid")
    {
        cout << "Valid, Next date: " << nextDate << endl;
    }
    else
    {
        cout << "Not Valid\n";
    }

    return 0;
}
