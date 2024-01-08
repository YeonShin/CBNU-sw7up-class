/*************************************************************************************/
/*                       HW#8 : friend�� ������ �ߺ�                                 */
/*              �ۼ��� : �迬��                    ��¥ : 2023�� 5�� 22��            */
/*                                                                                   */
/* ���� ���� : Book ��ü�� Ȱ���Ͽ� ��¥ å���� �Ǻ��ϴ� !������ �Լ��� �ۼ�         */
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
	string getTitle() { 
		return title; // å�� �̸��� ��ȯ �޴´�
	}
	
	bool operator !(); // ��¥ å����(������ 0����) �Ǻ��ϴ� bool Ÿ���� ! ������ �Լ�
};

bool Book::operator !() {
	if (this->price == 0) { // ��ü�� price�� 0�̶��
		return true; // true ��ȯ
	}
	else { // 0�� �ƴ϶��
		return false; // false ��ȯ
	}
}

int main() {
	Book book("�������", 0, 50); // ������ 0
	if (!book) cout << "��¥��" << endl; // ������ 0�̹Ƿ� "��¥��" ���
}