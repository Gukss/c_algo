#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int roomNum;
int v[10];
int len;
int iMin;
int result;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> roomNum;
	len = to_string(roomNum).length();
	//���� ���� ������ Ƚ���� ���� ����
	int max = INT_MIN;
	for (int i = 0; i < len; i++) {
		int target = roomNum % 10;
		v[target] += 1;
		roomNum /= 10;
		//6�̶� 9�� Ƚ���� �ִ뿩�� �������� �ʴ´�.
		if (((target != 6) && (target != 9)) && max < v[target]) {
			max = v[target];
			//���� ���� ������ idx�� ���� ����
			iMin = target;
		}
	}
	if ((v[6] + v[9]) % 2 == 0) {
		//6�̶� 9 ������ ������ �� ũ�� �ش� ���ڷ� �ٲ۴�.
		if ((v[6] + v[9]) / 2 > max) {
			max = (v[6] + v[9]) / 2;
		}
	}
	else {
		if ((v[6] + v[9]) / 2 + 1 > max) {
			max = (v[6] + v[9]) / 2 + 1;
		}
	}
	cout << max;
}