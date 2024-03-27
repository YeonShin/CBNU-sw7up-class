/**********************************************************************************************/
/*                            HW#5 : �������� ��ü�� �������                                 */
/*                   �ۼ��� : �迬��                    ��¥ : 2023�� 5�� 5��                 */
/*                                                                                            */
/* ���� ���� : Person�� ���, Family�� ������ �߻�ȭ�� Ŭ������ ���� �������� 3���� Simpson   */
/*             ���� Ŭ������ �������� �����ϰ�, ������ ������������ �������� �����Ѵ�.        */
/**********************************************************************************************/

#include <iostream>
using namespace std;

class Person { // ��� Ŭ����
	string name;
public:
	Person() { name = ""; } // �⺻ �����ڰ� ������ �� name �� ""���� �ʱ�ȭ
	Person(string name) { this->name = name; } // string���� name �� �Ű������� �޾� �����ڸ� �����Ҷ� name���� Ŭ������ ��� ���� name �ʱ�ȭ 
	string getName() { return name; } // ��� ���� name�� ��ȯ�ϴ� �Լ�
	void setName(string name) { this->name = name; } // ���� ���� name ��Ʈ������ ��� name�� �ʱ�ȭ�ϴ� �Լ�
};

class Family {
	string name;
	Person* p; // Person �迭 ������
	int size; // Person �迭�� ũ�� ���� ������ ��
public:
	Family(string name, int size); // size ������ŭ Person �迭 ���� ����
	void setName(int index, string name); // index��° ���� �������� �̸��� �����ϴ� �Լ�
	void show(); // ��� ���� ������ ���
	~Family(); // ��ü�� �Ҹ�Ǹ鼭 ���� ������ ���� ������ ��ü�� �ʱ�ȭ
};
Family::Family(string name, int size) {
	p = new Person[size]; // size ������ŭ Person �迭�� ��ü ������ p�� ���� �Ҵ�
	this->name = name; // ������ �̸� ����
	this->size = size; // ���� ������ ���� ����
}
void Family::setName(int index, string name) {
	p[index].setName(name); // index��° ���� �������� �̸� ����
}
void Family::show() {
	cout << name << " ������ ������ ���� " << size << "���Դϴ�." << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i].getName() << "\t"; // ���� �������� �̸� ���
	}
}
Family::~Family() {
	delete [] p; // ������������ �Ҵ�� �޸𸮸� �ʱ�ȭ
}
int main() {
	Family* simpson = new Family("Simpson", 3); // Simpson �̸��� ���� ������������ 3���� ���� Ŭ���� ũ�� ��ŭ �޸𸮸� �������� �Ҵ�
	simpson->setName(0, "Mr.Simpson"); // ù��° ���� �������� �̸� ����
	simpson->setName(1, "Mrs.Simpson"); // �ι�° ���� �������� �̸� ����
	simpson->setName(2, "Bart Simpson"); // ����° ���� �������� �̸� ����
	simpson->show(); // ��� ���� �������� �̸� ���
	delete simpson; // simpson ��ü �������� �Ҵ� ���� �޸𸮸� �ʱ�ȭ
}