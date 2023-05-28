/***************************************************************************************/
/*                          HW#9 : �����Լ��� �߻�Ŭ����                               */
/*              �ۼ��� : �迬��                    ��¥ : 2023�� 5�� 28��              */
/*                                                                                     */
/* ���� ���� : �߻� Ŭ���� Calculator�� ��ӹ޴� Adder�� Subtractor Ŭ������ �����϶�  */
/***************************************************************************************/

#include <iostream>
using namespace std;

class Calculator { // �߻� Ŭ���� Calculator
	void input() {
		cout << "���� 2���� �Է��ϼ���>> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0; // �� ������ ��/�� ����
public:
	void run() {
		input();
		cout << "���� ���� " << calc(a, b) << endl;
	}
};

class Adder : public Calculator { // Calculator�� ��ӹ޴� Adder Ŭ����
	virtual int calc(int a, int b) { // ���� ���� �Լ��� calc�� �������̵�
		return a + b; // �� ������ �� ����
	}
};
class Subtractor : public Calculator {// Calculator�� ��ӹ޴� Subtractor Ŭ����
	virtual int calc(int a, int b) { // ���� ���� �Լ��� calc�� �������̵�
		return a - b; // �� ������ �� ����
	}
};

int main() {
	Adder adder; // Adder Ŭ������ ��ü ����
	Subtractor subtractor; // Subtractor Ŭ������ ��ü ����
	adder.run(); // �� ������ �Է¹ް� ���� ���
	subtractor.run(); // �� ������ �Է¹ް� ���� ���
}