#include <iostream>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <string>
#include <chrono>

using namespace std;

int fibb(long long n) {
	if (n > 2)
		return fibb(n - 1) + fibb(n - 2);
	else
		return 1;
}

int main() {
    long long n;
	cin >> n;
	clock_t time;
	time = clock();
	long long a[100];
	a[1] = 1;
	a[2] = 1;
	for (long long i = 3; i < n + 1; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	cout <<"Integer "<< a[n] << endl;
	cout << "Recurse " << fibb(n)<< endl;
	time = clock() - time;
	cout << "Time: "<<static_cast<float>(time) / CLOCKS_PER_SEC << endl;
	return 0;
 }