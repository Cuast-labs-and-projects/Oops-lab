# include <iostream>
# include<string>

using namespace std;

class Date
{
    private:
    string date;
    int year;
    int month;
    int day;

    public:
    void initialize(string);
    string nextdate();
    bool isvalid();
    bool isLeap();
}d1;

void Date :: initialize(string input_date)
{
    date = input_date;
    day = stoi(input_date.substr(0, 2));
    month = stoi(input_date.substr(3, 5));
    year = stoi(input_date.substr(6, input_date.length()));
    cout<<day<<month<<year;
 
}
bool Date :: isLeap() 
{ 
// Return true if year  
// is a multiple pf 4 and 
// not multiple of 100. 
// OR year is multiple of 400. 
return (((year % 4 == 0) &&  
         (year % 100 != 0)) || 
         (year % 400 == 0)); 
}

bool Date :: isvalid()
{
  
    // If year, month and day  
    // are not in given range 
    if (year < 0) 
    return false; 
    if (month < 1 || month > 12) 
    return false; 
    if (day < 1 || day > 31) 
    return false; 
  
    // Handle February month  
    // with leap year 
    if (month == 2) 
    { 
        if (isLeap()) 
        return (day <= 29); 
        else
        return (day <= 28); 
    } 
  
    // Months of April, June,  
    // Sept and Nov must have  
    // number of days less than 
    // or equal to 30. 
    if (month == 4 || month == 6 || 
        month == 9 || month == 11) 
        return (day<= 30); 
  
    
return true; 
}

string Date ::nextdate()
{   int d=day,m=month,y=year;
    if (d > 0 && d < 28)	//checking for day from 0 to 27
		d += 1;
	if (d == 28)
	{
		if (m == 2)	//checking for february
		{
			if (isLeap())	//leap year check in case of feb
			{
				d = 29;
			}
			else
			{
				d = 1;
				m = 3;
			}
		}
		else	//when its not feb
			d += 1;
	}
	if (d == 29)	//last day check for feb
	{
		if (m == 2)
		{
			d = 1;
			m = 3;
		}
		else
			d += 1;
	}
	if (d == 30)	//last day check for april,june,September,November
	{
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
			d += 1;
		else
		{
			d = 1;
			m += 1;
		}
	}
	if (d == 31)	//last day of the month
	{
		d = 1;
		if (m == 12)	//checking for last day of the year
		{
			y += 1;
			m = 1;
		}
		else
			m += 1;

	}
    string tdate=to_string(d)+"/"+to_string(m)+"/"+to_string(y);
    return tdate;
}

int main()
{

   
   string date;

   cout<<"enter the date"<<endl;
   cin>>date;
   
   d1.initialize(date);
   if(d1.isvalid())
   {
       cout<<date<<","<<"valid"<<","<<"vnext date :"<<d1.nextdate();
   }
   else
   {
        cout<<date<<","<<"not-valid";
   }
   
   
   return 0;
}