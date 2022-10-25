#include<iostream>
using namespace std;
int fact(int);
int C(int, int);
int main()
{
	cout << C(8, 5) <<endl<< C(5, 2) <<endl<< C(7, 0);
}
int fact(int n)
{	
	int fact = 1;
	for (; n > 1; n--) {
		fact *= n;
	}
	return fact;
}
int C(int n, int m)
{
	int C = fact(n) / (fact(n - m) * fact(m));
	return C;
}