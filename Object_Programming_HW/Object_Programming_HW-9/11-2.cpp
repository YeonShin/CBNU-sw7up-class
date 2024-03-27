/*********************************************************************************/
/*                    HW#9 : �����Լ��� �߻�Ŭ����                               */
/*        �ۼ��� : �迬��                    ��¥ : 2023�� 5�� 28��              */
/*                                                                               */
/* ���� ���� : �߻� Ŭ���� Calculator �� ��ӹ޾� GoodCalc Ŭ������ �����϶�     */
/*********************************************************************************/

#include <iostream>
using namespace std;

class Calculator { 
public:
	virtual int add(int a, int b) = 0; // �� ������ �� ����
	virtual int subtract(int a, int b) = 0; // �� ������ �� ����
	virtual double average(int a[], int size) = 0; // �迭 a�� ��� ����. size�� �迭�� ũ��
};

class GoodCalc : public Calculator { // Calculator Ŭ���� ��ӹ��� GoodCalc �Ļ� Ŭ����
protected:
	int sum = 0; // �迭�� ����� ���� ������ ����
public:
	virtual int add(int a, int b) { // ���� ���� �Լ� add �������̵�
		return (a + b); // �� ������ �� ����
	}
	virtual int subtract(int a, int b) { // ���� ���� �Լ� subtract �������̵�
		return (a - b); // �� ������ �� ����
	}
	virtual double average(int a[], int size) { // ���� ���� �Լ� average �������̵�
		for (int i = 0; i < size; i++) {
			sum += a[i]; // �迭�� ũ�⸸ŭ �ݺ��Ͽ� �迭�� ��ҵ��� ���� sum�� ����
		}
		return (sum / size); // �迭 a�� ��� ����
	}
};
int main() {
	int a[] = { 1,2,3,4,5 };
	Calculator* p = new GoodCalc();
	cout << p->add(2, 3) << endl; // �� ������ �� ���
	cout << p->subtract(2, 3) << endl; // �� ������ �� ���
	cout << p->average(a, 5) << endl; // �迭 a�� ��� ���
	delete p; // �⺻Ŭ������ �������� �����Ҵ� �޸� �Ҵ� ���� 
}