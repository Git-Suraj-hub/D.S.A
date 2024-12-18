// CPP Program to interpolate using
// newton backward interpolation
#include <bits/stdc++.h>
using namespace std;

// Calculation of u mentioned in formula
float u_cal(float u, int n)
{
	float temp = u;
	for (int i = 1; i < n; i++)
		temp = temp * (u + i);
	return temp;
}

// Calculating factorial of given n
int fact(int n)
{
	int f = 1;
	for (int i = 2; i <= n; i++)
		f *= i;
	return f;
}

int main()
{
	// number of values given
	int n = 5;
	float x[] = { 2000, 2005, 2010, 
				2015, 2020 };
				
	// y[][] is used for difference 
	// table and y[][0] used for input
	float y[n][n];
	y[0][0] = 4400;
	y[1][0] = 7638;
	y[2][0] = 20728;
	y[3][0] = 24931;
	y[4][0] = 50151;

	// Calculating the backward difference table
	for (int i = 1; i < n; i++) {
		for (int j = n - 1; j >= i; j--)
			y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
	}

	// Displaying the backward difference table
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++)
			cout << setw(4) << y[i][j] 
				<< "\t";
		cout << endl;
	}

	// Value to interpolate at
	float value = 2018;

	// Initializing u and sum
	float sum = y[n - 1][0];
	float u = (value - x[n - 1]) / (x[1] - x[0]);
	for (int i = 1; i < n; i++) {
		sum = sum + (u_cal(u, i) * y[n - 1][i]) /
									fact(i);
	}

	cout << "\n Value at " << value << " is "
		<< sum << endl;
	return 0;
}
