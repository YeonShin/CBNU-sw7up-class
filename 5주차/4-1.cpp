#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str[5];
	string late = str[0];
	for (int i = 0; i < 5; i++) {
		cout << "이름 >> ";
		getline(cin, str[i]);
	}
	for (int j = 1; j < 5; j++) {
		if (late < str[j]) {
			late = str[j];
		}
	}
	cout << "사전에서 가장 뒤에 나오는 문자열은 " << late << endl;
	return 0;
}
