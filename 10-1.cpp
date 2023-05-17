/************************************************************************************/
/*                              HW#7 : 상속                                         */
/*          작성자 : 김연신                    날짜 : 2023년 5월 17일               */
/*                                                                                  */
/* 문제 정의 :  Circle을 상속받은 NameCircle 클래스를 작성하고 프로그램을 완성하라  */
/*                - - - - - - -                                                     */
/************************************************************************************/

#include <iostream>
using namespace std;

class Circle {
protected:
	int radius; // protected 멤버로 Circle의 파생 클래스는 접근이 허용됨
public:
	Circle() { this->radius = 1; } // Circle 클래스의 기본 생성자
	Circle(int radius) { this->radius = radius; } // 매개변수가 있는 Circle 클래스의 생성자
	int getRadius() { return radius; } // radius값을 반환하는 함수
};

class NamedCircle: public Circle {
protected: 
	string name; // 원의 이름
public:
	NamedCircle() : Circle() { name = "Name"; } // Circle의 파생클래스 NamedCircle의 기본생성자로 Circle() 기본생성자를 호출하고, name을 "Name"으로 초기화
	NamedCircle(int radius, string name) : Circle(radius) { this->name = name; } // 매개변수가 있는 NamedCircle의 생성자
	void show() { cout << "반지름이 " << getRadius() << "인 " << name << endl; } // 반지름과 이름 출력하는 함수
};

int main() {
	NamedCircle waffle(3, "waffle");	// 반지름이 3이고 이름이 waffle인 원
	waffle.show(); 
}