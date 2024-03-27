/********************************************************************************************/
/*                          HW#5 : �������� ��ü�� �������                                 */
/*                 �ۼ��� : �迬��                    ��¥ : 2023�� 5�� 5��                 */
/*                                                                                          */
/* ���� ���� : ���� �߻�ȭ�� Circle Ŭ������ �ִ�. 3���� Circle ��ü�� ���� �迭�� �����ϰ� */
/*             ������ ���� �Է¹ް�, ������ 100���� ū ���� ������ ����Ͽ���               */
/********************************************************************************************/

#include <iostream>
using namespace std;

class Circle {
	int radius; // ���� ������ ��
public:
	void setRadius(int radius); // �������� �����Ѵ�.
	double getArea(); // ������ �����Ѵ�.
};

void Circle::setRadius(int radius) {
	this->radius = radius; // ���� ���� �Ű����� radius������ Ŭ������ ������� radius �� ����
}
double Circle::getArea() {
	return 3.14 * radius * radius; // ���� ���� ���� ���Ͽ� ��ȯ�Ѵ�
}

int main() {
	int count = 0; // ������ 100���� ū ���� ����
	int r;
	Circle ArrayCircle[3]; // ArrayCircle ��ü �迭 ���� (����Ʈ �����ڷ� �ʱ�ȭ)

	for (int i = 0; i < 3; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		ArrayCircle[i].setRadius(r); // ��ü �迭�� �������� ������� ����
		if (ArrayCircle[i].getArea() > 100) {
			count++; // ��ü �迭�� ����Լ� getArea()�� ��ȯ��(���� ����)�� 100���� �� ũ�� count �� 1����
		}
	}
	cout << "������ 100���� ū �� " << count << "���Դϴ�."; // ��� ���

}