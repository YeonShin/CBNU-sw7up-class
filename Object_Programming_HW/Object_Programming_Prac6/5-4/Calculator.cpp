/* Calculator Ŭ���� ���� �κ� */

#include <iostream>
using namespace std;

// ������� include
#include "Calculator.h"
#include "Adder.h"

void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ���>>";
	int a, b;
	cin >> a >> b; // ���� �ΰ� �Է�
	Adder adder(a, b); // ������ ��ü ����, �Ű������� ���� ������ ȣ��
	cout << adder.process(); // ���� ���, Adder Ŭ������ ��� �Լ� process() ȣ��
}