# include <iostream>
using namespace std;

struct time
{
	int hours;
	int min;
	int sec;
};

void swap(int, int, int);

int main()
{
	time d1;
	cout << "Please! Enter number hours: "; cin >> d1.hours;
	cout << "Please! Enter number minutes: "; cin >> d1.min;
	cout << "Please! Enter number seconds: "; cin >> d1.sec;
	cout << "hours= " << d1.hours << ";" << "minutes = " 
		<< d1.min << ";" << "seconds = " << d1.sec << endl;
	swap(d1.hours, d1.min, d1.sec);
	system("pause");
	return 0;

}

void swap(int a, int b, int c)
{
	int temp = a;
	a = b;
	b = c;
	c = temp;
	cout << "hours= " << a << ";" << "minutes = "
		<< b << ";" << "seconds = " << c << endl;
}