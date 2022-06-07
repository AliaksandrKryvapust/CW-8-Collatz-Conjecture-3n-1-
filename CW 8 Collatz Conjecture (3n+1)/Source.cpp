#include<iostream>
using namespace std;
unsigned int hotpo(unsigned int n) {
	int counter = 0;
	while (n != 1)	{
		(n % 2 == 0) ? n = n / 2 : n = 3 * n + 1;
		counter++;
	}
	return counter;
}
int main() {
	int n = 6;
	cout << hotpo(n) << endl;
	return 0;
}