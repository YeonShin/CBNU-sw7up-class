/* Adder Ŭ���� ���� �κ� */

#include <iostream>
using namespace std;

#include "Adder.h" // Adder.h ��� ���� include

Adder::Adder(int a, int b) { // Ŭ������ �Ű������� ���� ������ ����
	op1 = a; // ���� ���� �Ű����� a ���� Ŭ������ ��� ���� op1�� ����
	op2 = b; // ���� ���� �Ű����� b ���� Ŭ������ ��� ���� op2�� ����
}
int Adder::process() { // Ŭ������ ��� �Լ� process ����
	return op1 + op2; // �� ������ ���� ����
}