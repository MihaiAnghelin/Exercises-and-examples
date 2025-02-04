#include <iostream>

#include <cmath>

using namespace std;

int nr_cifre(int n)
{
	int ret = 0;
	while (n)
	{
		n = n / 10;
		ret++;
	}
	return ret;
}

int main()
{
	long long n, k;

	cin >> n >> k;

	const long long p = pow(10, nr_cifre(n));

	const long long cpy = n;
	while ((k - 1) % 72 > 0)
	{
		k--;
		//cout << n << ' ' << n % 72 << '\n';
		n = ((n % 72) * (p % 72) + cpy % 72) % 72;
	}
	cout << n % 72;
	
	return 0;
}