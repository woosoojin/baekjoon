#include <iostream>
using namespace std;

int n;
int d[1001];

int dp(int x) {
	if (x == 1)
		return 1;
	if (x == 2)
		return 2;
	if (d[x] != 0)
		return d[x];

	return d[x] = (dp(x - 1) + dp(x - 2));
}

int main() {



	return 0;
}