#include "pch.h"
#include<iostream>
#include<stdio.h>
#include<ctime>
#include<math.h>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
/*#define Largest(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))
int go = 60;

inline int large(int a,int b,int c)
{
	int max;
	if (a > b && a > c)
		max = a;
	else if (b > c && b > a)
		max = b;
	max = c;
	 return max;
}
class bus
{
	float passen;
	float no_of_buses;
	float bus_no;
	float fare;
	float cap;
public:
	bus()
	{
		
		cout << "Enter the bus no "<<endl;
		cin >> bus_no;
		cout << "Enter the no of pasengers " << endl;
		cin >> passen;
		cout << "Enter the capacity of bus" << endl;
		cin >> cap;
		cout << "Enter the total fair" << endl;
		cin >> fare;
		no_of_buses=no_of_bus(passen);
		cout << "Required buses " << ceil(no_of_buses);
	}
	float no_of_bus(float passen)
	{
		float buses_req;
		buses_req = passen/cap;
		return buses_req;
	}
};
class Scope 
{
public:
	int go;
	const static int go2=10;
public:
	Scope()
	{
		go = 70;
	}
	void call()
	{
		int go=90;
		cout << "Class 1 is called"<<endl;
		cout << "Function go is called " <<go<< endl;
		cout << "Class go is called" <<Scope::go<<endl;
		cout << "Class's static variable is called  go2:  " << go2<<endl;
		cout << "Global go is  called  " << ::go << endl;
		cout << "Other's class static is called go2 : ERROR : class not declared yet"<<endl;
		cout << "Other's class's go ERROR: Class object not declared in the scope " << endl;
		
	}
};
class Scope2
{
public:
	int go;
	const static int go2 = 20;
public:
	Scope2()
	{
		go = 80;
	}
	void call()
	{
		int go = 100;
		cout << "Class 2  is called " << go << endl;
		cout << "Class go is called" << Scope2::go << endl;
		cout << "Class's static variable is called  go2:  " << go2 << endl;
		cout << "Global go is  called  " << ::go << endl;
		cout << "Class1 static is called go "<<Scope::go2<< endl;
		cout << "ERROR: Class object not declared in the scope" << endl;
	}
};

int mon[] = { 1,2,3,4,5,6,7,8,9,10,11,12 }; //--Date code begins
int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
int sum_days[] = { 31,59,90,120,151,181,212,243,273,301,334,365 }; 
class Date 
{
	int day;
	int month;
	int year;
	int no_of_days;
public:
	Date()
	{
		cout << "\nEnter the day";
		cin >> day;
		cout << "Enter the month";
		cin >> month;
		cout << "Enter the year ";
		cin >> year;
		cal_days();
	}
	void cal_days()
	{
		int i=0;
		for (i; i < 12; i++)
		{
			if (month == mon[i])
				break;
		}
		no_of_days = sum_days[i-1]+day;
		
	}
	void put_date()
	{	
		cout<< day<<"/";
		cout<< month<<"/";
		cout<< year<<endl;
		cout << no_of_days;
	}
	void sub()
	{
		int inte;
		int diff,i=0;
		cout << "Enter the integer to be subtracted ";
		cin >> inte;
		if (inte < no_of_days)
		{
			no_of_days -= inte;
			for (i; i < 12; i++)
			{
				if (no_of_days > sum_days[i])
				{
					continue;
				}
				else
					break;
			}
			diff=sum_days[i] - no_of_days;
			day = diff;
			month = mon[i];
			
		}
		else if(inte>no_of_days)
		{
			inte -= no_of_days;
			year--;
			no_of_days = 365;
			no_of_days -= inte;
			for (i; i < 12; i++)
			{
				if (no_of_days > sum_days[i])
				{
					continue;
				}
				else
					break;
			}
			diff = sum_days[i] - no_of_days;
			day = diff;
			month = mon[i];
		}
	}
	void sub_date(Date d1, Date d2)
	{
		int diff, diff2;;
		if (d1.year > d2.year)
		{
			diff = d1.year - d2.year;
			if (d1.no_of_days > d2.no_of_days) 
			{
				diff2 = d1.no_of_days - d2.no_of_days;
			}
			else
			{
				diff2 = d2.no_of_days - d1.no_of_days;
			}
			cout << "The difference of the two dates in days and years is " << endl;
			cout <<"  days  "<< diff <<"   years "<< diff2;
		}
		else if (d2.year > d1.year)
		{
			diff = d2.year - d1.year;
			if (d1.no_of_days > d2.no_of_days)
			{
				diff2 = d1.no_of_days - d2.no_of_days;
			}
			else
			{
				diff2 = d2.no_of_days - d1.no_of_days;
			}
			cout << "The difference of the two dates in days and years is " << endl;
			cout << "  days  " << diff2 << "   years " << diff;
		}
	}
};

vector<int> seatNos;
vector<int>::iterator it;

class Peeps {

	char name[20];
	char regisNo[7];
	int phnNo;
	int seatNo;
	float hra, da;
	float basic, net;

public:
	Peeps() {
		cout << "Enter name: ";
		gets_s(name,20);
		cout << "Enter phone no: ";
		cin >> phnNo;
		getSeatNo();
		cout << "Your registration number: XE";
		getRegisNo(regisNo, 5);
		Date D1;
	}

	void getSeatNo() {
		cout << "Enter preferred seat no: ";
		cin >> seatNo;
		it = find(seatNos.begin(), seatNos.end(), seatNo);
		if (it != seatNos.end()) {
			seatNos.erase(it);
			return;
		}
		else {
			cout << "Seat not available!\n";
			getSeatNo();
		}
	}

	void getRegisNo(char *s, const int len) {
		static const char alphanum[] =
			"0123456789"
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
			"abcdefghijklmnopqrstuvwxyz";
		for (int i = 0; i < len; ++i) {
			s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
			cout << s[i];
		}
	}
};

*/
class serial
{
	int serial_code;
	string title;
	float duration;
	int Noofepisodes;

public:
	serial()
	{
		duration = 30;
		Noofepisodes = 10;
	}
	void New_serial()
	{
		cout << "Enter the serial code"<<endl;
		cin >> serial_code;
		cout << "Enter the Tile of the series" << endl;
		cin>>title;

	}
	void Other_enteries(float x, int y)
	{
		duration = x;
		Noofepisodes = y;
	}
	void Disp_data()
	{
		cout << "The Serial Code of the series is   " <<serial_code<< endl;
		cout << "The Title of the series is   "<<title<< endl;
		cout << "The Duration of the Episodes    " << duration << endl;
		cout << "The No of Episode in the series " << Noofepisodes << endl;
	}
};//Program 1
//Program 12 is above 
struct Name 
{
	string First;
	string Mid;
	string Last;
};
struct Phone
{
	string Area;
	string Ecxh;
	string numb;
};
class p_name
{
	Name n1;
	Phone p1;
public:
	p_name()
	{
		cout << "Enter the first name " << endl;
		cin >> n1.First;
		cout << "Enter the Middle name " << endl;
		cin >> n1.Mid;
		cout << "Enter the Last name " << endl;
		cin >> n1.Last;
		cout << "Enter the Area code where u live " << endl;
		cin >> p1.Area;
		cout << "Enter the Ecxh where u live " << endl;
		cin >> p1.Ecxh;
		cout << "Enter the Numb code where u live " << endl;
		cin >> p1.numb; 
	}
	void p_show()
	{
		cout << "the name is  " << n1.First <<" "<<n1.Mid<<" "<<n1.Last<<endl;
		cout << "the Area code  "<<p1.Area << endl;;
		cout << "the Ecxh is "<<p1.Ecxh << endl;;
		cout << "The Numb code where "<< p1.numb << endl;;
	}
	
};
class Roll_no
{
	
	int roll_no;
	string name;
	string Class;
	float avg_Marks;
	float Percentage;
	void Cal()
	{
		Percentage = avg_Marks / (float)5;
	}
public:
	Roll_no()
	{
		cout << "Enter the name " << endl;
		cin >>name;
		cout << "Enter the roll no " << endl;
		cin >>roll_no;
		cout << "Enter the class " << endl;
		cin >> Class;
		cout << "Enter the avg_marks " << endl;
		cin >> avg_Marks;
		Cal();
	}
	void Put_no()
	{
		cout << "The name  "<<name<<endl;
		cout << "the roll no  "<< roll_no<<endl;
		cout << "the class " << Class<<endl;
		cout << "The avg_marks " <<avg_Marks<<endl;
		cout << "The Calculated ercentage is " << Percentage << endl;
	}
};
int main()
{
	/*
	//	 bus b1;
	//	Scope s1;s1.call();
	//	Scope2 s2; s2.call();	//-----------Program 2

	{	int i, j, k;
		cout << "Enter the first no." << endl;
	cin >> i;
	cout << "Enter the second no." << endl;
	cin >> j;
	cout << "Enter the third no." << endl;
	cin >> k;
	cout << "The largest no is  " << Largest(i, j, k) << endl;

	cout << "The largest using the inline function " << large(i, j, k);

		}//----Program 3 it is above


	Date d1;
	d1.put_date();
	d1.sub();
	d1.put_date();
	cout << "Now Date subtraction ";
	Date d2,d3;
	d3.sub_date(d2,d3);
	for (int i = 1; i <= 100; i++)
		seatNos.push_back(i);
	Peeps p[2];
*/
	
	//Program -12

	//serial s1;
	//s1.New_serial();
	//s1.Disp_data();
//	s1.Other_enteries(24, 900);
//	s1.Disp_data();

	//Program -13

//	p_name p20;
//  p20.p_show();

	//Program -14
	
	Roll_no r1;
	r1.Put_no();
}
