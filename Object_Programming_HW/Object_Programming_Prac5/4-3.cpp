/****************************************************************************************/
/*                         HW#3 : Ŭ������ ��ü�� �⺻                                  */
/*                �ۼ��� : �迬��                    ��¥ : 2023�� 4�� 03��             */
/*                                                                                      */
/* ���� ���� :  �ʺ�(width)�� ����(height)�� ������ ���� ��� ����� ���� Rectangle     */
/*				Ŭ������ �ۼ��ϰ� ��ü ���α׷��� �ϼ��϶�.                             */
/****************************************************************************************/

#include <iostream>
using namespace std;

class Rectangular { // Rectangular Ŭ���� ����
public: //Ŭ������ ���� �����ڸ� public���� ����
	int width; // Ŭ���� Rectangular�� ��� ����
	int height; // Ŭ���� Rectangular�� ��� ����
	int getArea(); // Ŭ���� Rectangular�� ��� �Լ�
};
int Rectangular::getArea() { // Rectangular Ŭ������ ����Լ� getArea() ����
	return width * height; // Ŭ������ ������� �ʺ�(width)�� ����(height)�� ������ ������ ����Ͽ� ��ȯ
}

int main() {
	Rectangular rect; // Rectangular Ŭ������ ��ü rect ����
	rect.width = 3; // ��ü rect�� ��� ���� width�� 3���� �ʱ�ȭ
	rect.height = 5; // ��ü rect�� ��� ���� height�� 5�� �ʱ�ȭ
	cout << "�簢���� ������ " << rect.getArea() << endl; // rect�� ��� �Լ� getArea()�� ȣ���Ͽ� �簢���� ������ ���Ͽ� ����Ѵ�.
	return 0;
}