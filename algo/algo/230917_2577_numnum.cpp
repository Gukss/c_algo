#include <iostream>
#include <string>

using namespace std;
int A, B, C;
int mul;
int result[10];
int len;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> A >> B >> C;

	mul = A * B * C;
	len = to_string(mul).length();
	for (int i = 0; i < len; i++) {
		int target = mul % 10;
		result[target] += 1;
		mul /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << result[i] << '\n';
	}

}