/*********************************************************************************/
/*                    HW#9 : �����Լ��� �߻�Ŭ����                               */
/*        �ۼ��� : �迬��                    ��¥ : 2023�� 5�� 28��              */
/*                                                                               */
/* ���� ���� : Shape Ŭ������ ��ӹ޾� Ÿ���� ǥ���ϴ� Oval, �簢���� ǥ���ϴ�   */
/*             Rect, �ﰢ���� ǥ���ϴ� Triangle Ŭ������ �ۼ��϶�                */
/*********************************************************************************/

#include <iostream>
using namespace std;

class Shape {
protected:
	string name;
	int a, b;
public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; a = w; b = h; } // Shape Ŭ������ �⺻ ������ name, a, b�� �������ش�
	string getName() { return name; } // ��ü�� �̸��� ��ȯ���ִ� �Լ�
	virtual double getArea() { return 0; } // ���̸� ��ȯ���ִ� �Լ�, �����Լ��� �����Ͽ� �Ļ�Ŭ������ �����ǵ� �Լ��� ȣ���ϵ��� �Ѵ�.
};

class Oval :public Shape { // Shape Ŭ������ ��ӹ��� Ÿ�� �Ļ�Ŭ����
public:
	Oval(string n, int w, int h) : Shape(n, w, h) {} // OvalŬ������ �⺻ �����ڷ� �⺻ Ŭ������ �����ڰ� ȣ���
	double getArea() { return a * b * 3.14; } // Oval Ŭ�������� ������ �� getArea() �Լ��� Ÿ���� ���̸� ��ȯ
};
class Rect : public Shape {
public:
	Rect(string n, int w, int h) : Shape(n, w, h) {} // RectŬ������ �⺻ �����ڷ� �⺻ Ŭ������ �����ڰ� ȣ���
	double getArea() { return a * b; } // Rect Ŭ�������� ������ �� getArea() �Լ��� �簢���� ���̸� ��ȯ
};

class Triangle : public Shape {
public:
	Triangle(string n, int w, int h) : Shape(n, w, h) {} // TriangleŬ������ �⺻ �����ڷ� �⺻ Ŭ������ �����ڰ� ȣ���
	double getArea() { return a * b / 2; } // Triangle Ŭ�������� ������ �� getArea() �Լ��� �ﰢ���� ���̸� ��ȯ
};

int main() {
	Shape* p[3]; // �⺻ Ŭ���� ShapeŬ���� �����͹迭 ����

	p[0] = new Oval("��붱", 10, 20); 
	p[1] = new Rect("����", 30, 40);
	p[2] = new Triangle("�佺Ʈ", 30, 40);

	for (int i = 0; i < 3; i++) {
		cout << p[i]->getName() << "���̴� " << p[i]->getArea() << endl; // �̸��� ���� ���
	}
	for (int i = 0; i < 3; i++) delete p[i]; // ���� �Ҵ���� �⺻ Ŭ���� �������� �޸� �Ҵ� ����
}