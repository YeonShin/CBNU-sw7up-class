/*************************************************************************************/
/*                       HW#8 : friend�� ������ �ߺ�                                 */
/*              �ۼ��� : �迬��                    ��¥ : 2023�� 5�� 22��            */
/*                                                                                   */
/* ���� ���� : Book ��ü�� Ȱ���Ͽ� 3���� == �����ڸ� friend �Լ��� �ۼ��϶�         */
/*             price �� �����ڿ� title �� ������ Ŭ���� �� ������              */
/*************************************************************************************/

#include <iostream>
using namespace std;

class Book { // Book Ŭ����
	string title;
	int price;
	int pages;

public:
	Book(string title = "", int price = 0, int pages = 0) { // Ŭ������ ������
		this->title = title; this->price = price; this->pages = pages; // title, price, pages�� ���޹��� ���ڷ� �����Ѵ�
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << "������" << endl; // title�� ����, �������� ����Ѵ�
	}
	string getTitle() { // å�� �̸��� ��ȯ �޴´�
		return title;
	}
	// 3���� ������ �Լ��� Ŭ���� Book�� friend �Լ��� �����Ѵ�
	friend bool operator==(Book& op1, int price); 
	friend bool operator==(Book& op1, string title);
	friend bool operator==(Book& op1, Book op2);
};

bool operator==(Book& op1, int price); // ��� �Լ��� �ۼ��� Book ��ü�� price�� ���� int���� ���ϴ� ������ �Լ�
bool operator==(Book& op1, string title); // ��� �Լ��� �ۼ��� Book ��ü�� title�� ���� ���ڿ��� ���ϴ� ������ �Լ� 
bool operator==(Book& op1, Book op2); // ��� �Լ��� �ۼ��� Book ��ü�� �ٸ� Book ��ü op2�� ���ϴ� ������ �Լ�

bool operator==(Book& op1, int price) {
	if (op1.price == price) { // ��ü�� price�� ���޹��� price�� ���ٸ�
		return true; // true ��ȯ
	}
	else { // ���� �ʴٸ�
		return false; // false ��ȯ
	}
}
bool operator==(Book& op1, string title) {
	if (op1.title == title) { // ��ü�� title�� ���޹��� ���ڿ� title�� ���ٸ�
		return true;
	}
	else { // ���� �ʴٸ�
		return false;
	}
}
bool operator==(Book& op1, Book op2) {
	if (op1.price == op2.price && op1.title == op2.title && op1.pages == op2.pages) { // ��ü�� price, title, pages�� ���޹��� ��ü op2�� price, title, pages�� ���ٸ�
		return true;
	}
	else { // ���� �ʴٸ�
		return false;
	}
}

int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);

	// price ��
	if (a == 30000) cout << "���� 30000��" << endl;

	// å title ��
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl;

	// title, price, pages ��� ��
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl;
}