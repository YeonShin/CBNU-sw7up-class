/***********************************************************************************************************/
/*                              HW#6 : �Լ��� ����, ���� ������                                            */
/*                    �ۼ��� : ȫ�浿                    ��¥ : 2023�� 5�� 10��                            */
/*                                                                                                         */
/* ���� ���� :  ���� ������ ���� �Է� �޾� Circle ��ü�� �������� �����ϴ� �����Լ�                        */
/*              readRadius()�� �����Ͽ� ��ü�� �������� �����ϰ� ��ü�� ����Լ��� ȣ���� ������ ����Ѵ�  */
/***********************************************************************************************************/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; } // Circle Ŭ������ �⺻ ������
	Circle(int radius) { this->radius = radius; } // �Ű������� ������ Ŭ������ ������, radius�� �Ű����� radius�� ����
	void setRadius(int radius) { this->radius = radius; } // ��� ���� radius�� �����ϴ� ��� �Լ� setRadius
	double getArea() { return 3.14 * radius * radius; } // ��ü(��)�� ������ ���ϴ� ��� �Լ� getArea()
};

void readRadius(Circle& a) { // ������ ���� ȣ��� ��ü�� ���� ���� �޴� ���� �Լ� readRadius, ������ ���� �Է� �ް� �����Ѵ�.
	int radius;
	cout << "���� ������ �������� �Է��ϼ���>>";
	cin >> radius;
	a.setRadius(radius);
}
int main() {
	Circle donut; // donut ��ü ����
	readRadius(donut); // readRadius �Լ� ������ ���� ȣ��� donut ��ü�� Circle��ü�� ���� �����Ѵ�. 
	cout << "donut�� ���� = " << donut.getArea() << endl; // donut��ü�� ����Լ� getArea()�� ȣ���� donut ��ü�� ������ ����Ѵ�.
}