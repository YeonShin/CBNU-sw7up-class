/*****************************************************************************/
/*                HW#4 : �����ڿ� �Ҹ���, ���� ������                        */
/*      �ۼ��� : �迬��                    ��¥ : 2023�� 4�� 10��            */
/*                                                                           */
/* ���� ���� : Rectangle Ŭ������ �ۼ��ϰ� ���α׷��� �ϼ��϶�.              */
/*             Rectangle Ŭ������ width�� height �� ��� ������ 3���� ������ */
/*             �׸��� isSquare() �Լ��� ������                               */
/*****************************************************************************/

#include <iostream>
using namespace std;

class Rectangle { // Rectangle Ŭ���� ����
	int width; // �ʺ� ��� ���� width
	int height; // ���� ��� ���� height
public:
	Rectangle(); // �Ű� ���� ���� ������
	Rectangle(int w, int h); // ������ �Ű� ���� w, h�� ���� ������ 
	Rectangle(int a); // ������ �Ű� ���� a�� ���� ������
	bool isSquare(); // ���簢������ �Ǻ��� ��� �Լ� isSquare() 
};

Rectangle::Rectangle() { // �Ű� ���� ���� ������ ����
	width = 1; // Ŭ������ ��� ���� width ���� 1�� �ʱ�ȭ
	height = 1; // Ŭ������ ��� ���� height ���� 1�� �ʱ�ȭ
}
Rectangle::Rectangle(int w, int h) { // �� ���� �Ű������� ���� ������ ����
	width = w; // ��� ���� width�� w������ �ʱ�ȭ
	height = h; // ��� ���� height�� h������ �ʱ�ȭ
}
Rectangle::Rectangle(int a) { //�� ���� �Ű������� ���� ������ ����
	width = a; // �� ��� ���� width, height�� a������ �ʱ�ȭ
	height = a;
}
bool Rectangle::isSquare() {
	if (width == height) { // ��� ���� width�� height�� ���ٸ�
		return true; // true ��ȯ (���簢���̴�.)
	}
	return false;
}

int main() {
	Rectangle rect1; // �Ű����� ���� ������ ȣ��
	Rectangle rect2(3, 5); // �� ���� �Ű� ������ ���� ������ ȣ�� (3,5 ���� ����)
	Rectangle rect3(3); // �� ����  �Ű� ������ ���� ������ ȣ�� (3 ���� ����)

	if (rect1.isSquare()) { cout << "rect1�� ���簢���̴�." << endl; } // ��ü rect1�� width�� height ���� 1�� �����Ƿ� ���簢���̴�
	if (rect2.isSquare()) { cout << "rect2�� ���簢���̴�." << endl; } // ��ü rect2�� width�� 3, height�� ���� 5�� �ٸ��Ƿ� ���簢���� �ƴϴ�.
	if (rect3.isSquare()) { cout << "rect3�� ���簢���̴�." << endl; } // ��ü rect3�� width�� height�� ���� 3���� �����Ƿ� ���簢���̴�.

	return 0;
}