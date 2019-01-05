#include <iostream>
#include <cmath>

using namespace std;

int main (void)
{
	double x = 123.4567;
	cout << ((double)((int) (x*pow(10,3)+.5)))/pow(10,3)<< endl;
	return 0;
}
