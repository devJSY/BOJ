#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main()
{
	long long a = 0;
	long long b = 0;

	cin >> a >> b;
	cout << a * b / gcd(a, b) << '\n';

	return 0;
}