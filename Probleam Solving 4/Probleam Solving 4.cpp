// Probleam Solving 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#pragma warning(disable : 4996 )

#include <iostream>

using namespace std;
//struct stDate
//{
//    short Year;
//    short Month;
//    short Day;
//
//};
//
//bool isLeapYear(short Year)
//{
//    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
//}
//
//bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
//{
//    return  (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
//}
//
//short NumberOfDaysInAMonth(short Month, short Year)
//{
//
//    if (Month < 1 || Month>12)
//        return  0;
//
//    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
//
//}
//
//bool IsLastDayInMonth(stDate Date)
//{
//
//    return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
//
//}
//
//bool IsLastMonthInYear(short Month)
//{
//    return (Month == 12);
//}
//
//stDate IncreaseDateByOneDay(stDate Date)
//{
//    if (IsLastDayInMonth(Date))
//    {
//        if (IsLastMonthInYear(Date.Month))
//        {
//            Date.Month = 1;
//            Date.Day = 1;
//            Date.Year++;
//        }
//        else
//        {
//            Date.Day = 1;
//            Date.Month++;
//        }
//    }
//    else
//    {
//        Date.Day++;
//    }
//
//    return Date;
//}
//
//short DayOfWeekOrder(short Day, short Month, short Year)
//{
//    short a, y, m;
//    a = (14 - Month) / 12;
//    y = Year - a;
//    m = Month + (12 * a) - 2;
//    // Gregorian:
//    //0:sun, 1:Mon, 2:Tue...etc
//    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
//}
//
//short DayOfWeekOrder(stDate Date)
//{
//    return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
//
//}
//
//string DayShortName(short DayOfWeekOrder)
//{
//    string arrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
//
//    return arrDayNames[DayOfWeekOrder];
//
//}
//
//bool IsWeekEnd(stDate Date)
//{
//    //Weekends are Fri and Sat
//    short DayIndex = DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
//    return  (DayIndex == 5 || DayIndex == 6);
//}
//
//bool IsBusinessDay(stDate Date)
//{
//    //Weekends are Sun,Mon,Tue,Wed and Thur
//
//   /*
//    short DayIndex = DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
//    return  (DayIndex >= 5 && DayIndex <= 4);
//   */
//
//   //shorter method is to invert the IsWeekEnd: this will save updating code.
//    return !IsWeekEnd(Date);
//
//}
//
//short ReadDay()
//{
//    short Day;
//    cout << "\nPlease enter a Day? ";
//    cin >> Day;
//    return Day;
//}
//
//short ReadMonth()
//{
//    short Month;
//    cout << "Please enter a Month? ";
//    cin >> Month;
//    return Month;
//}
//
//short ReadYear()
//{
//    short Year;
//    cout << "Please enter a Year? ";
//    cin >> Year;
//    return Year;
//}
//
//stDate ReadFullDate()
//{
//    stDate Date;
//
//    Date.Day = ReadDay();
//    Date.Month = ReadMonth();
//    Date.Year = ReadYear();
//
//    return Date;
//}
//
//
//stDate CalculateVacationReturnDate(stDate DateFrom, short VacationDays)
//{
//
//    short WeekEndCounter = 0;
//
//    //in case the data  is weekend keep adding one day util you reach business day
//    //we get rid of all weekends before the first business day
//    while (IsWeekEnd(DateFrom))
//    {
//        DateFrom = IncreaseDateByOneDay(DateFrom);
//    }
//
//    //here we increase the vacation dates to add all weekends to it.
//
//    for (short i = 1; i <= VacationDays + WeekEndCounter; i++)
//    {
//
//        if (IsWeekEnd(DateFrom))
//            WeekEndCounter++;
//
//        DateFrom = IncreaseDateByOneDay(DateFrom);
//    }
//
//    //in case the return date is week end keep adding one day util you reach business day
//    while (IsWeekEnd(DateFrom))
//    {
//        DateFrom = IncreaseDateByOneDay(DateFrom);
//    }
//
//    return DateFrom;
//}
//
//short ReadVacationDays()
//{
//    short Days;
//    cout << "\nPlease enter vacation days? ";
//    cin >> Days;
//    return Days;
//}
//
//int main()
//{
//    cout << "\nVacation Starts: ";
//    stDate DateFrom = ReadFullDate();
//
//    short VacationDays = ReadVacationDays();
//
//    stDate ReturnDate = CalculateVacationReturnDate(DateFrom, VacationDays);
//
//    cout << "\n\nReturn Date: " << DayShortName(DayOfWeekOrder(ReturnDate)) << " , "
//        << ReturnDate.Day << "/" << ReturnDate.Month << "/" << ReturnDate.Year << endl;


struct stDate
{
	short Year;
	short Month;
	short Day;
};

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12 * a) - 2;
	// Gregorian://0:sun, 1:Mon, 2:Tue...etcreturn
	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}
short DayOfWeekOrder(stDate Date)
{
	
	
	return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
}



short NumberOfDayesInMonth(short Month,short Year)
{
	if (Month<1 || Month>12)
	
		return 0;
	


		int NumberOfDayes[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };


	return  (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDayes[Month - 1];
	
	
}


string MonthShortName(short MonthNumber)
{ 
	string Months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun",
		"Jul", "Aug", "Sep", "Oct", "Nov", "Dec" }; 
	return (Months[MonthNumber - 1]);
}



short TotalDay(short Day,int Month,int Year)
{
	int Pointer=0;
	for (int i = 1; i <= Month; i++)
	{
		

		int Total = NumberOfDayesInMonth(i, Year);
		if (i == Month)
		{
			Total = 0;


		}

		Pointer = Pointer+Total;
	}
	return  Pointer+Day;
	
}


bool IsLastDayInMonth(stDate Date)

{   return (Date.Day == NumberOfDayesInMonth(Date.Month, Date.Year));

} bool IsLastMonthInYear(stDate Date)
{
	  return (Date.Month == 12);
}


stDate IncreaseDateByOneDay(stDate Date)
{
	if (IsLastDayInMonth(Date))

	{

		if (IsLastMonthInYear(Date))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Day = 1;
			Date.Month++;

		}
	
	{

	}
	}
	else
	{
		Date.Day++;
	}
	return Date;
}






stDate GetDateFromTotalDays(short Days, stDate Date)
{

	short RemainnigDays = Days+ TotalDay( Date.Day, Date. Month ,Date.Year);
	short MonthDay = 0;
	Date.Month = 1;
	while (true)
	{
		MonthDay = NumberOfDayesInMonth(Date.Month, Date.Year);
		if (RemainnigDays > MonthDay)
		{
			RemainnigDays -= MonthDay;
			Date.Month++;
		
		if (Date.Month > 12)
		{
			Date.Month = 1;
			Date.Year++;
		}
		}
		else
		{
			Date.Day = RemainnigDays;
			break;
		}
	}

	return Date;
}


bool IsDate1BeforeDate2(stDate Date1, stDate Date2) 
{ 
   return  (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);

}

bool IsDate1EqualDate2(stDate Date1, stDate Date2) 
{
	return (Date1.Year == Date2.Year) ? (Date1.Month == Date2.Month) ? (Date1.Day == Date2.Day) ? true : false:false:false;
}






int GetDiffrentInDay(stDate Date1, stDate Date2, bool IncludeEndDaay=false)
{
	
	
	int Dayes = 0;
	while (IsDate1BeforeDate2( Date1,  Date2))
	{
		
		Dayes++;
		Date1 = IncreaseDateByOneDay(Date1);
	}

	/*while (!IsDate1BeforeDate2(Date1, Date2))
	{

		Dayes--;
		Date2 = IncreaseDateByOneDay(Date2);
	}*/

	return IncludeEndDaay ? ++Dayes : Dayes;
}


string CheckDdayesBorn(short DayOrder)
{
	string arr[]{ "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };

	return arr[DayOrder];
};










int ReadYear()
{
	int Number;
	cout << "Please Enter a year to cheack " << endl;
	cin >> Number;
	return Number;
	
}

int ReadMonths()
{
	int Number;
	cout << "Please Enter a Months to cheack " << endl;
	cin >> Number;
	return Number;
}

int ReadDay()
{
	int Number;
	cout << "Please Enter a Day to cheack " << endl;
	cin >> Number;

	return Number;
}

int AddReadDay()
{
	int Number;
	cout << "Please Enter a Add  Day to Date " << endl;
	cin >> Number;
	return Number;
}


stDate ReadFullDate()
{
	stDate Date;
	Date.Day=ReadDay();
	Date.Month=ReadMonths();
	Date.Year=ReadYear();
	return Date;
}


stDate GetSystemDate()
{  stDate Date;
  time_t t = time(0);
 tm* now = localtime(&t); 
 Date.Year = now->tm_year + 1900;
 Date.Month = now->tm_mon + 1;
  Date.Day = now->tm_mday; return Date;

}

short IsEndOfweek(short DayOrder )
{
	cout << "Is it end of Week?"<<endl;
	 if (CheckDdayesBorn(DayOrder)== "Sat" )
	{
		
		cout << "Yes is end of week";
	}
	else
	{
		cout << "No is not end of week";
	}
	 return DayOrder;
}
short Isweekend(short DayOrder)
{
	cout << "Is it weekend?" << endl;
	if (CheckDdayesBorn(DayOrder) == "Fri")
	{

		cout << "Yes Is it weekend";
	}
	else
	{
		cout << "No is not weekend";
	}
	return DayOrder;
}
short IsBuisnessDay(short DayOrder)
{
	cout << "Is it BuisnessDay?" << endl;
	if (CheckDdayesBorn(DayOrder) != "Sat"||CheckDdayesBorn(DayOrder)!= "Fri")
	{

		cout << "Yes Is it BuisnessDay";
	}
	else
	{
		cout << "No is not BuisnessDay";
	}
	return DayOrder;
}

short DaysUntilEndOfWeek(stDate Date)
{
	int DaysUntel=DayOfWeekOrder(Date);
	short Counter=0;
	while (true)
	{
		if (DaysUntel < 6)
		{
			
			DaysUntel++;
			Counter++;

		}
		else

			break;
		
	}
	
	return Counter;
}

short DaysUntilEndOfYear(stDate Date)
{
	int Pointer = 1;
	for (int i = Date.Month; i < 13; i++)
	{


		int Total = NumberOfDayesInMonth(i, Date.Year);
		if (i == 13)
		{
			Total = 0;
		}

		Pointer = Pointer + Total;
	}
	return  Pointer - Date.Day;

}

short DaysUntilEndOfMonth(stDate Date)
{
	int Total = NumberOfDayesInMonth(Date.Month, Date.Year);

	int result = Total - Date.Day;
	return result;

}

short VactionDays(stDate Date1, stDate Date2, bool IncludeEndDaay = false)
{
	int Dayes = 0;
	int Counter = 0;
	while (IsDate1BeforeDate2(Date1, Date2))
	{
		short DayIndex = DayOfWeekOrder(Date1);
		if ((DayIndex == 5 || DayIndex == 6))
		{
			Counter++;
		}
		
		Dayes++;
		Date1 = IncreaseDateByOneDay(Date1);
	}
	//return IncludeEndDaay ? ++Dayes : Dayes;
	return Dayes-Counter;
}

stDate EnterVaction(stDate Date,int AddDay)
{
	while (AddDay>0)
	{
		short DayIndex = DayOfWeekOrder(Date);
		if (DayIndex == 5 || DayIndex == 6)
		{
			Date = IncreaseDateByOneDay(Date);
		}
		else
		{
			Date = IncreaseDateByOneDay(Date);
			AddDay--;
			
		}

		if (short DayIndex = DayOfWeekOrder(Date)==5)
		{
			Date = IncreaseDateByOneDay(Date);
			Date = IncreaseDateByOneDay(Date);
		}
		else if(short DayIndex = DayOfWeekOrder(Date) == 6)
		{
			Date = IncreaseDateByOneDay(Date);
		}
	
	}
	return Date ;
	
}



//string CheckDdayesBorn(short DayOrder)
//{
//	string arr[]{ "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
//
//	return arr[DayOrder];
//};

bool IsDate1EqualDate3(stDate Date1, stDate Date3)
{
	return (Date1.Year == Date3.Year) ? (Date1.Month == Date3.Month) ? (Date1.Day == Date3.Day) ? true : false : false : false;
}

bool IsDate3BeforeDate4(stDate Date3, stDate Date4)
{
	return  (Date3.Year < Date4.Year) ? true : ((Date3.Year == Date4.Year) ? (Date3.Month < Date4.Month ? true : (Date3.Month == Date4.Month ? Date3.Day < Date4.Day : false)) : false);

}

int OverLap(stDate Date1, stDate Date2, stDate Date3, stDate Date4)
{


	int Counter = 0;
	while (IsDate1BeforeDate2(Date1, Date2))
	{

		if (IsDate1EqualDate3(Date1,Date3))
		{
			Counter++;
			Date3 = IncreaseDateByOneDay(Date3);
		}
		
		Date1 = IncreaseDateByOneDay(Date1);
		
	}

	return Counter;
	
}


int main()
{
	/*stDate Date1 = ReadFullDate();
	stDate Date2 = ReadFullDate();
	stDate Date3 = ReadFullDate();
	stDate Date4 = ReadFullDate();

	cout<<"Dayes Count is : "<<OverLap(Date1, Date2, Date3, Date4);*/

	cout<<MonthShortName(3);

	//int add = AddReadDay();


	//Date1=EnterVaction(Date1, add);
	//cout << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;














	//stDate Date1 = ReadFullDate();


	//cout << "\n Day Name " << CheckDdayesBorn(DayOfWeekOrder(Year, Months, Dayes));

	
	
	
	//stDate Date1 = GetSystemDate();
	

	//stDate Date2 = ReadFullDate();


	/*cout << "Vacition From ," << CheckDdayesBorn(DayOfWeekOrder(Date1.Day, Date1.Month, Date1.Year));
	cout << Date1.Day << "/" << Date1.Month << "/" << Date1.Year<<endl;
	cout<<"Vacition to ,"<< CheckDdayesBorn(DayOfWeekOrder(Date2));
	cout << Date2.Day << "/" << Date2.Month << "/" << Date2.Year<<endl;
	cout << endl;
	cout<<"Actual Vaction Dayes is " << VactionDays(Date1, Date2);*/


	

	/*cout <<"Today is " <<  CheckDdayesBorn(DayOfWeekOrder(Date1.Day, Date1.Month, Date1.Year))<<" , ";
	cout<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year<<endl;
	cout << endl;

	 cout<<IsEndOfweek(DayOfWeekOrder(Date1.Day, Date1.Month, Date1.Year))<<endl;
	 cout << endl;
	cout<<Isweekend(DayOfWeekOrder(Date1.Day, Date1.Month, Date1.Year))<<endl;
	cout << endl;
	cout<<IsBuisnessDay(DayOfWeekOrder(Date1.Day, Date1.Month, Date1.Year))<<endl;

	cout << endl;

	cout<<"DaysUntilEndOfWeek : " << DaysUntilEndOfWeek(Date1)<<" Day(s)"<<endl;
	cout << "DaysUntilEndOfMonth : " << DaysUntilEndOfMonth(Date1) << " Day(s)" << endl;
	cout <<"DaysUntilEndOfYear : " << DaysUntilEndOfYear(Date1)<< " Day(s)" << endl;*/


	




	 

	//TotalDay(Date1.Day, Date1.Month, Date1.Year);
	//stDate Date2 = ReadFullDate();
	//TotalDay(Date2.Day, Date2.Month, Date2.Year);
	//Date1 = IncreaseDateByOneDay(Date1);
	//cout << "\nDate after adding one day is:" << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

	
	

	
	











	/*cout << "\nDiffrence is: "
		<< GetDiffrentInDay(Date1, Date2,false) << " Day(s)."; 
	cout << "\nDiffrence (Including End Day) is: "
		<< GetDiffrentInDay(Date1, Date2, true) << " Day(s).";*/



	




	//CheckLastDayes(Date1.Day, Date1.Month, Date1.Year);
	/*if (IsDate1BeforeDate2(Date1, Date2))
	
		cout << "\nYes, Date1 is Less than Date2.";

	else

		cout << "\nNo, Date1 is NOT Less than Dat";*/


	/*if (IsDate1EqualDate2(Date1, Date2))

		cout << "\nYes, Date1 is Equal Date2.";

	else

		cout << "\nNo, Date1 is NOT Not Equal Date2.";*/
	

	//short Days = AddReadDay();
	//Date = GetDateFromTotalDays(Days, Date);
	//cout << "\nDate after adding [" << Days << "] days is: "; 
	//cout << Date.Day << "/" << Date.Month << "/" << Date.Year;






	/*short DaysOrderInYear = TotalDay(Day, Months, Year);
	cout << "\nNumber of Days from the begining of the year is " << DaysOrderInYear << "\n\n"; 
	stDate Date; 
	
	Date = GetDateFromDayOrderInYear(DaysOrderInYear, Year);  
	cout << "Date for [" << DaysOrderInYear << "] is: ";  
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;*/

	

	

	//PrintYearCalendar(Year);

	/*short Months=1;

	
	PrintMonthCalender(Months, Year);
			
	do
	{
		
		Months++;

		PrintMonthCalender(Months, Year);
		
	

	} while (Months<12);*/
	
	 
    system("pause>0");


}

