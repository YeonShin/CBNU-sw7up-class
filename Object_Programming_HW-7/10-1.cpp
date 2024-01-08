/************************************************************************************/
/*                              HW#7 : ���                                         */
/*          �ۼ��� : �迬��                    ��¥ : 2023�� 5�� 17��               */
/*                                                                                  */
/* ���� ���� :  Circle�� ��ӹ��� NameCircle Ŭ������ �ۼ��ϰ� ���α׷��� �ϼ��϶�  */
/*                - - - - - - -                                                     */
/************************************************************************************/

#include <iostream>
using namespace std;

class Circle {
protected:
	int radius; // protected ����� Circle�� �Ļ� Ŭ������ ������ ����
public:
	Circle() { this->radius = 1; } // Circle Ŭ������ �⺻ ������
	Circle(int radius) { this->radius = radius; } // �Ű������� �ִ� Circle Ŭ������ ������
	int getRadius() { return radius; } // radius���� ��ȯ�ϴ� �Լ�
};

class NamedCircle: public Circle {
protected: 
	string name; // ���� �̸�
public:
	NamedCircle() : Circle() { name = "Name"; } // Circle�� �Ļ�Ŭ���� NamedCircle�� �⺻�����ڷ� Circle() �⺻�����ڸ� ȣ���ϰ�, name�� "Name"���� �ʱ�ȭ
	NamedCircle(int radius, string name) : Circle(radius) { this->name = name; } // �Ű������� �ִ� NamedCircle�� ������
	void show() { cout << "�������� " << getRadius() << "�� " << name << endl; } // �������� �̸� ����ϴ� �Լ�
};

int main() {
	NamedCircle waffle(3, "waffle");	// �������� 3�̰� �̸��� waffle�� ��
	waffle.show(); 
}