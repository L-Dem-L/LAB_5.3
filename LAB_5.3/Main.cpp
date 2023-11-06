#include <iostream>
#include <cmath>
using namespace std;
double t(const double x);
int main()
{
	double fp, fk, z;
	int n;
	cout << "fp = "; cin >> fp;
	cout << "fk = "; cin >> fk;
	cout << "n = "; cin >> n;
	double dp = (fk - fp) / n;
	double f = fp;
	while (f <= fk)
	{
		z = t(f * f) + 2 * t(2 * f + 1) + sqrt(t(1));
		cout << f << " " << z << endl;
		f += dp;
	}
	return 0;
}
double t(const double x)
{
	if (abs(x) >= 1)
		return (cos(x) + 1) / (exp(x) + pow(sin(x),2));
	else
	{
		double S = 0;
		int j = 0;
		double a = x;
		S = a;
		do
		{
			j++;
			double R = -(x*x)/(4*(j*j)+2*j);
			a *= R;
			S += a;
		} while (j < 5);
		return S;
	}
}
