#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, string> dic;
		
	// �ܾ� 3���� map�� ����
	dic.insert(make_pair("love", "���"));
	dic.insert(make_pair("apple", "���"));
	dic["cherry"] = "ü��";

	cout << "����� �ܾ� ���� " << size(dic) << endl;

	string eng;
	while (true) {
		cout << "ã�� ���� �ܾ�>> ";
		cin >> eng;
		if (eng == "exit") {
			break;
		}

		if (dic.find(eng) == dic.end()) {
			cout << "����" << endl;
		}
		else {
			cout << dic.at(eng) << endl;
		}
	}
	cout << "�����մϴ�..." << endl;
}
