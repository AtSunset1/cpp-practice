#include<iostream>
using namespace std;
bool isPrime(unsigned);
unsigned gotbaha(unsigned);
int main()
{
	for (int i = 100; i <= 200; i+=2) {
		cout << i << '=' << gotbaha(i) << '+' << i - gotbaha(i) << endl;
	}
	return 0;
}

bool isPrime(unsigned n)
{		
	if (n == 1 || n == 0) return 0;
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

unsigned gotbaha(unsigned x)
{
	if (x < 6 || x % 2 != 0)return 0;

	int i=1;
	do {
		if (isPrime(i) && isPrime(x - i)) return i;
		i += 2;
	} while (1);
}
