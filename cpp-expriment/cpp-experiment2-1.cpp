#include<iostream>
using namespace std;
double MAX(double, double);
int main()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << MAX(MAX(a, b), MAX(c, d));
	return 0;
}

double MAX(double a, double b)
{
	double max;
	if (a >= b) max = a;
	else max = b;
	return max;
};