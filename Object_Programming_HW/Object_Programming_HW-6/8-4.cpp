/***********************************************************************************************************/
/*                              HW#6 : �Լ��� ����, ���� ������                                            */
/*                    �ۼ��� : ȫ�浿                    ��¥ : 2023�� 5�� 10��                            */
/*                                                                                                         */
/* ���� ���� :  å�� �̸��� ������ �����ϴ� Book Ŭ�����̴�. Book Ŭ������ ������, �Ҹ���, set() �Լ���    */
/*              �����ϰ�, ���� ���� �����ڸ� �ۼ��϶�.                                                     */
/***********************************************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

class Book {
	char* title; // ���� ���ڿ�
	int price; // ����
public:
	Book(const char* title, int price); // ������
	~Book(); // �Ҹ���
	void set(const char* title, int price); // å�� �̸��� ������ �����ϴ� �Լ� set
	void show() { cout << title << ' ' << price << "��" << endl; } // ���� ���ڿ��� ������ ����ϴ� �Լ� show
};

Book::Book(const char* title, int price) {
	int len = strlen(title); // ���� �Ҵ��� �޸� ũ��, ���� ���ڿ��� ũ�⸦ len�� ����
	this->title = new char[len + 1]; // title ���ڿ��� ���� �Ҵ�
	strcpy(this->title, title); // �Ű������� ���� ���ڿ��� title�� ����
	this->price = price; // �Ű������� ���� price�� ��� price ���� ����
}
void Book::set(const char* title, int price) { // ���� ���ڿ��� ������ ���� ���� �Ű������� �����ϴ� �Լ� set
	int len = strlen(title);
	this->title = new char[len + 1]; // title ���ڿ��� ���� �Ҵ�
	strcpy(this->title, title); // title�� ���ڿ� ����
	this->price = price; // ���� ����
}
Book::~Book() {
	if (title) { // title�� �Ҵ�� ���ڿ��� �ִٸ�
		delete[] title; // ���� �Ҵ� �޸� �Ҹ�
	}
}
int main() {
	Book cpp("��ǰC++", 10000); // cpp ��ü ����
	Book java = cpp; // java ��ü�� �����ϰ�, cpp��ü�� ����
	java.set("��ǰ�ڹ�", 12000); // java ��ü�� ���ڿ��� ���� ����
	cpp.show(); // cpp ��ü ���
	java.show(); // java ��ü ���
}