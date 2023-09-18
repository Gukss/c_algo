#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	list<char> list;
	int num;

	getline(cin, s);
	cin >> num;

	//list �Է¹��� ������ �ʱ�ȭ
	for (auto e : s) {
		list.push_back(e);
	}

	//iter�� �������� ����Ű�� �ְ�
	auto cursor = list.end();
	char input;
	char ch;
	for (int i = 0; i < num; i++) {
		cin >> input;
		if (input == 'P') {
			//���ڸ� �ϳ� �� �Է¹ް�, iter�� ����Ű�� �ִ� ���� �߰��Ѵ�.
			cin >> ch;
			list.insert(cursor, ch);
		}
		else if (input == 'L') {
			//iter�� ó���� �ƴϸ� �������� �̵��Ѵ�.
			if (cursor != list.begin()) {
				cursor--;
			}
		}
		else if (input == 'D') {
			//iter�� �������� �ƴϸ� ���������� �̵��Ѵ�.
			if (cursor != list.end()) {
				cursor++;
			}
		}
		else if (input == 'B') {
			//iter�� ó���� �ƴϸ� �������� �̵��ؼ� �ϳ� �����ϰ� 
			// �� �������� ����Ű�� �ִ� iter�� cursor�� �ʱ�ȭ���ش�.
			if (cursor != list.begin()) {
				cursor--;
				cursor = list.erase(cursor);
			}
		}
	}
	for (auto e : list) {
		cout << e;
	}
}