# include <iostream>
# include <math.h>

using namespace std;

class Date_ref
{
protected:
    int day;
    int month;
    int year;
    public:             
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
        if (day + 1 > maxDays)
        {
            *tempDay = (day + 1) - maxDays;
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

    void nextDate()
    {
        if (!isDateValid())
        {
            cout<<"invalid"<<endl;
            return ;
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
        this->day=tempDay;
        this->month=tempMonth;
        this->year=tempYear;
       
    }
};

class Date:public Date_ref{

  public:
  void getdata(){
      cout<<"enter the date in dd/mm/yyyy order"<<endl; 
      cin>>day>>month>>year;
  }
  void showdata(){
      cout<<day<<"/"<<month<<"/"<<year<<endl;
  }
  void operator + (int a){
      for(int i=0;i<a;i++){
         this->nextDate();
      }
      
  }
  
};

int main()
{
    Date obj, new_obj;
    int a = 5;
    obj.getdata();


    cout << "The entered date is : ";
    obj.showdata();
    cout << "enter the number of days to be added" << endl;
    cin >> a;
    obj + a;
    cout << "the new date is : ";
    obj.showdata();
    return 0;
}
