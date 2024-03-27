/***********************************************************************************************************/
/*                              HW#6 : �Լ��� ����, ���� ������                                            */
/*                    �ۼ��� : ȫ�浿                    ��¥ : 2023�� 5�� 10��                            */
/*                                                                                                         */
/* ���� ���� :  Ŭ���� Accumulator�� add()�Լ��� ���� ���� �����ϴ� Ŭ�����̴�. AccumulatorŬ������        */
/*              �����Ͽ� ���α׷��� �ϼ��Ͻÿ�                                                             */
/***********************************************************************************************************/

#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value); // �Ű����� value�� ��� value�� �ʱ�ȭ�Ѵ�.
	Accumulator& add(int n); //value�� n�� ���� ���� �����Ѵ�.
	int get() { return value; }  // ������ �� value�� �����Ѵ�.
};
Accumulator::Accumulator(int value) {
	this->value = value; // �Ű����� value�� Ŭ������ ��� value�� �ʱ�ȭ�ϴ� �Ű������� ���� ������ ����
}

Accumulator& Accumulator::add(int n) { // Ŭ���� Accumulator �ڽ��� ������ ������ Ÿ������ ���� Ŭ������ ��� �Լ� add ����
	this->value = this->value + n; //��� value�� value�� �Ű����� n�� ���Ͽ� �����Ѵ�.
	return *this; // Ŭ���� Accumulator �ڱ� �ڽ��� ���� �����Ѵ�.

}
int main() {
	Accumulator acc(10); // value ���� 10���� ��ü�� �����Ѵ�.
	acc.add(5).add(6).add(7); // acc�� ����� 28�� �ȴ�. 
	cout << acc.get() << endl; // 28 ���
}