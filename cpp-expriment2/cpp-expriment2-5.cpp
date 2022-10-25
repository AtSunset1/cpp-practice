#include<iostream>
using namespace std;
int func(int);
int main()
{
	int x;
	cin >> x;
	cout << func(x);
}

int func(int x)
{
	if (x == 1)return 1;
	else return func(x - 1) + x;
}