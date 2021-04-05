#include <bits/stdc++.h>

using namespace std;

long long GetSum(long long x) {
	long long sum = 0;
	while (x > 0) {
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

long long GCD(long long a, long long b) {
	if (b == 0) {
		return a;
	}
	return GCD(b, a % b);
}
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n;
		cin >> n;
		// brute-force approach
		while (true) {
			// check if the GCD of the current number and the sum of its digits
			// is greater than 1
			if (GCD(n, GetSum(n)) > 1) {
				// if it's true, then break the loop
				break;
			}
			// otherwise, increment the value of 'n'
			n++;
		}
		cout << n << '\n';
	}
	return 0;
}
