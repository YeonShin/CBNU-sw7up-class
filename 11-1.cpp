/*********************************************************************************/
/*                    HW#9 : 가상함수와 추상클래스                               */
/*        작성자 : 김연신                    날짜 : 2023년 5월 28일              */
/*                                                                               */
/* 문제 정의 : Shape 클래스를 상속받아 타원을 표현하는 Oval, 사각형을 표현하는   */
/*             Rect, 삼각형을 표현하는 Triangle 클래스를 작성하라                */
/*********************************************************************************/

#include <iostream>
using namespace std;

class Shape {
protected:
	string name;
	int a, b;
public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; a = w; b = h; } // Shape 클래스의 기본 생성자 name, a, b를 설정해준다
	string getName() { return name; } // 객체의 이름을 반환해주는 함수
	virtual double getArea() { return 0; } // 넓이를 반환해주는 함수, 가상함수로 선언하여 파생클래스에 재정의된 함수를 호출하도록 한다.
};

class Oval :public Shape { // Shape 클래스를 상속받은 타원 파생클래스
public:
	Oval(string n, int w, int h) : Shape(n, w, h) {} // Oval클래스의 기본 생성자로 기본 클래스의 생성자가 호출됨
	double getArea() { return a * b * 3.14; } // Oval 클래스에서 재정의 된 getArea() 함수로 타원의 넓이를 반환
};
class Rect : public Shape {
public:
	Rect(string n, int w, int h) : Shape(n, w, h) {} // Rect클래스의 기본 생성자로 기본 클래스의 생성자가 호출됨
	double getArea() { return a * b; } // Rect 클래스에서 재정의 된 getArea() 함수로 사각형의 넓이를 반환
};

class Triangle : public Shape {
public:
	Triangle(string n, int w, int h) : Shape(n, w, h) {} // Triangle클래스의 기본 생성자로 기본 클래스의 생성자가 호출됨
	double getArea() { return a * b / 2; } // Triangle 클래스에서 재정의 된 getArea() 함수로 삼각형의 넓이를 반환
};

int main() {
	Shape* p[3]; // 기본 클래스 Shape클래스 포인터배열 선언

	p[0] = new Oval("빈대떡", 10, 20); 
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangle("토스트", 30, 40);

	for (int i = 0; i < 3; i++) {
		cout << p[i]->getName() << "넓이는 " << p[i]->getArea() << endl; // 이름과 넓이 출력
	}
	for (int i = 0; i < 3; i++) delete p[i]; // 동적 할당받은 기본 클래스 포인터의 메모리 할당 해제
}