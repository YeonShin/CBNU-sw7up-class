/************************************************************************************/
/*                              HW#7 : ���                                         */
/*          �ۼ��� : �迬��                    ��¥ : 2023�� 5�� 17��               */
/*                                                                                  */
/* ���� ���� :  Circle�� ��ӹ��� NameCircle Ŭ������ �ۼ��ϰ� ���ڵ��� ��������    */
/*            �̸��� �Է¹����� ���� ������ ���� ���ڸ� ���ϴ� ���α׷��� �ϼ��϶�  */
/************************************************************************************/

#include <iostream>
using namespace std;

class Circle { // Circle Ŭ����
protected:// protected ����� �Ļ� Ŭ������ ������ ���Ǵ� �κ�
	int radius; // ���� ������
public:
	Circle() { radius = 1; } // Circle Ŭ������ �⺻������, radius�� 1�� �ʱ�ȭ
	Circle(int radius){ this->radius = radius; } // �Ű������� ���� ������, ��� ���� radius�� �Ű����� radius�� ����
	int getRadius() { return radius; } // radius�� ��ȯ�ϴ� �Լ�
	void setRadius(int radius) { this->radius = radius; } // �������� �����ϴ� �Լ�
	double getArea() { return 3.14 * radius * radius; } // ���� ������ ����ϴ� �Լ�
};

class NamedCircle : public Circle { // Circle Ŭ������ �Ļ� Ŭ���� NamedCircle
	string name; // ���� �̸�
public:
	// �⺻ �����ڷ�, Circle�� �⺻ �����ڰ� ȣ��Ǹ鼭 radius�� 1�� �ʱ�ȭ, name�� "Name"���� �ʱ�ȭ
	NamedCircle() : Circle() { name = "Name"; } 
	// �Ű������� �ִ� ������, radius�� �Ű������� ���� Circle �����ڸ� ȣ���Ͽ� radius�� name�� �Ű������� ���� ������ ����
	NamedCircle(int radius, string name) : Circle(radius) { this->name = name; }

	void setName(string name) { this->name = name; } //���� �̸��� �����ϴ� �Լ�
	string getName() { return name; } // ���� �̸��� ��ȯ�ϴ� �Լ�
};

int main() {
	NamedCircle pizza[5]; // ��ü �迭 pizza ����
	int r, big; // �������� �Է¹��� ���� r�� ���� ������ ���� ��ü�� �ε����� ������ ���� big
	string n; // �̸��� �Է¹��� string ���� n
	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���." << endl;
	for (int i = 0; i < 5; i++) { // 5���� ���� �������� ���� �̸��� �Է¹޴´�
		cout << i + 1 << ">> ";
		cin >> r >> n;
		pizza[i].setRadius(r);
		pizza[i].setName(n);
	}
	big = 0; // ��ü �迭 pizza�� ���� ù��° ��ü�� �ε����� big���� ����
	for (int i = 1; i < 5; i++) {
		if (pizza[big].getRadius() < pizza[i].getRadius()) // �� ������ ū ��ü�� �ε����� big�� ����
		{
			big = i;
		}
	}
	cout << "���� ������ ū ���ڴ� " << pizza[big].getName() << "�Դϴ�" << endl; // ���� ū ������ ������ �̸��� ���
}