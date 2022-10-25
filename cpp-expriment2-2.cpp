#include<iostream>
using namespace std;
unsigned gbd(unsigned, unsigned);
int main()
{
	int a, b,c,d;
	cin >> a >> b>>c>>d;
	cout << gbd(gbd(gbd(a,b),c),d);
}
unsigned gbd(unsigned a, unsigned b)
{	
	int mul = a * b;
	while (a % b != 0) {
		int i;
		i = a % b;
		a = b;
		b = i;
	}
	return mul/b;
}