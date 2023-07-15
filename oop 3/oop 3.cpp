// oop 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
# include <conio.h>
#include <string>
using namespace std;

/*task 01*/
//class NumDays
//{
//	float hours, days;
//public:
//	NumDays(float h)
//	{
//		hours = h;
//		days = 0;
//	}
//
//	float get_hours()
//	{
//		return hours;
//	}
//
//	float get_days()
//	{
//		days = hours / 8;
//		return days;
//	}
//
//	void operator+(NumDays& obj)
//	{
//		cout << "the sum of hours of objects = " << hours + obj.hours << endl;
//	}
//
//	void operator-(NumDays& obj)
//	{
//		cout << "the difference of hours of objects = " << hours - obj.hours << endl;
//	}
//
//	NumDays& operator++()
//	{
//		++hours;
//		days = hours / 8;
//		return *this;
//	}
//
//	NumDays& operator--()
//	{
//		--hours;
//		days = hours / 8;
//		return *this;
//	}
//
//	NumDays& operator++(int)
//	{
//		NumDays temp(*this);
//		++hours;
//		days = hours / 8;
//		return temp;
//	}
//
//	NumDays& operator--(int)
//	{
//		NumDays temp(*this);
//		--hours;
//		days = hours / 8;
//		return temp;
//	}
//
//	~NumDays()
//	{
//
//	}
//};

/*task 02*/
//class ship
//{
//	string name, built_year;
//
//public:
//	ship()
//	{
//		set_name();
//		set_year();
//	}
//
//	void set_name()
//	{
//		cout << "enter ship name : ";
//		getline(cin, name);
//	}
//
//	string get_name()
//	{
//		return name;
//	}
//
//	void set_year()
//	{
//		cout << "enter built year : ";
//		getline(cin, built_year);
//	}
//
//	string get_year()
//	{
//		return built_year;
//	}
//
//	virtual void print()
//	{
//		cout << "ship name = " << name << endl;
//		cout << "built year = " << built_year << endl;
//	}
//
//	~ship()
//	{
//
//	}
//};
//class cruiseShip : public ship
//{
//	int passengers;
//
//public:
//	cruiseShip()
//	{
//		set_passengers();
//	}
//
//	void set_passengers()
//	{
//		cout << "enter passenger capacity : ";
//		cin >> passengers;
//	}
//
//	int get_passengers()
//	{
//		return passengers;
//	}
//
//	void print()
//	{
//		cout << "ship name = " << get_name() << endl;
//		cout << "ship passenger carrying capacity = " << passengers << endl;
//	}
//
//	~cruiseShip()
//	{
//
//	}
//};
//class cargoShip : public ship
//{
//	int capacity;
//
//public:
//	cargoShip()
//	{
//		set_capacity();
//	}
//
//	void set_capacity()
//	{
//		cout << "enter the load carrying capacity in tons : ";
//		cin >> capacity;
//	}
//
//	int get_capacity()
//	{
//		return capacity;
//	}
//
//	void print()
//	{
//		cout << "ship name = " << get_name() << endl;
//		cout << "ship's load capacity = " << get_capacity() << endl;
//	}
//
//	~cargoShip()
//	{
//
//	}
//};

/*task 03*/
//class BasicShape
//{
//	double area;
//	
//public:
//	void setArea(double a)
//	{
//		area = a;
//	}
//
//	double getArea()
//	{
//		return area;
//	}
//
//	virtual void calcArea() = 0;
//};
//class Circle : public BasicShape
//{
//	long int centerX, centerY;
//	double radius;
//	
//public:
//	Circle(long int x, long int y, double r)
//	{
//		centerX = x;
//		centerY = y;
//		radius = r;
//		calcArea();
//	}
//
//	long int getCenterX()
//	{
//		return centerX;
//	}
//
//	long int getCenterY()
//	{
//		return centerY;
//	}
//
//	void calcArea()
//	{
//		double area = 3.14 * radius * radius;
//		setArea(area);
//	}
//
//	~Circle()
//	{
//
//	}
//};
//class Rectangle : public BasicShape
//{
//	long int width, length;
//
//public:
//	Rectangle(long int w, long int l)
//	{
//		width = w;
//		length = l;
//		calcArea();
//	}
//
//	long int getWidth()
//	{
//		return width;
//	}
//
//	long int getLength()
//	{
//		return length;
//	}
//
//	void calcArea()
//	{
//		double area = length * width;
//		setArea(area);
//	}
//
//	~Rectangle()
//	{
//
//	}
//};

/*task 04*/
class FileFilter {
public:
	virtual char transform(char ch) = 0;

	void doFilter(ifstream& in, ofstream& out) {
		char ch;
		while (in.get(ch)) {
			char transformedCh = transform(ch);
			out << transformedCh;
		}
	}
};
class UppercaseFilter : public FileFilter {
public:
	char transform(char ch) override {
		return toupper(ch);
	}
};
class CopyFilter : public FileFilter {
public:
	char transform(char ch) override {
		return ch;
	}
};

int main()
{
	/*NumDays obj(8.0), obj2(18.0);

	cout << "hours 1 = " << obj.get_hours() << endl;
	cout << "days 1 = " << obj.get_days() << endl;

	cout << "hours 2 = " << obj2.get_hours() << endl;
	cout << "days 2 = " << obj2.get_days() << endl;

	obj + obj2;
	
	obj - obj2;

	obj++;
	cout << "after post increment :\n";
	cout << " hours = " << obj.get_hours() << endl;
	cout << " days = " << obj.get_days() << endl;

	++obj;
	cout << "after pre increment :\n";
	cout << " hours = " << obj.get_hours() << endl;
	cout << " days = " << obj.get_days() << endl;

	obj2--;
	cout << "after post decrement :\n";
	cout << " hours = " << obj2.get_hours() << endl;
	cout << " days = " << obj2.get_days() << endl;

	--obj2;
	cout << "after pre decrement :\n";
	cout << " hours = " << obj2.get_hours() << endl;
	cout << " days = " << obj2.get_days() << endl;*/

	/*ship* Ship[3];

	Ship[0] = new ship;
	Ship[1] = new cruiseShip;
	Ship[2] = new cargoShip;

	for (int i = 0; i < 3; i++)
	{
		Ship[i]->print();
		delete Ship[i];
	}*/

	/*Circle obj(2,3,5);
	cout << "area of circle = " << obj.getArea() << endl;

	Rectangle obj2(1,7);
	cout << "area of rectangle = " << obj.getArea() << endl;*/

	ifstream inputFile("input.txt");
	ofstream uppercaseFile("uppercase.txt");
	ofstream copyFile("copy.txt");

	if (inputFile.is_open() && uppercaseFile.is_open() && copyFile.is_open()) {
		UppercaseFilter uppercaseFilter;
		CopyFilter copyFilter;

		uppercaseFilter.doFilter(inputFile, uppercaseFile);
		copyFilter.doFilter(inputFile, copyFile);

		inputFile.close();
		uppercaseFile.close();
		copyFile.close();

		cout << "Files filtered successfully!" << endl;
	}
	else {
		cout << "Failed to open files." << endl;
	}
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
