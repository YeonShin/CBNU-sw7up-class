/***********************************************************************************************************/
/*                              HW#6 : 함수와 참조, 복사 생성자                                            */
/*                    작성자 : 홍길동                    날짜 : 2023년 5월 10일                            */
/*                                                                                                         */
/* 문제 정의 :  정수 반지름 값을 입력 받아 Circle 객체에 반지름을 설정하는 전역함수                        */
/*              readRadius()를 구현하여 객체의 반지름을 설정하고 객체의 멤버함수를 호출해 면적을 출력한다  */
/***********************************************************************************************************/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; } // Circle 클래스의 기본 생성자
	Circle(int radius) { this->radius = radius; } // 매개변수를 가지는 클래스의 생성자, radius를 매개변수 radius로 설정
	void setRadius(int radius) { this->radius = radius; } // 멤버 변수 radius를 설정하는 멤버 함수 setRadius
	double getArea() { return 3.14 * radius * radius; } // 객체(원)의 면적을 구하는 멤버 함수 getArea()
};

void readRadius(Circle& a) { // 참조에 의한 호출로 객체에 참조 전달 받는 전역 함수 readRadius, 반지름 값을 입력 받고 설정한다.
	int radius;
	cout << "정수 값으로 반지름을 입력하세요>>";
	cin >> radius;
	a.setRadius(radius);
}
int main() {
	Circle donut; // donut 객체 생성
	readRadius(donut); // readRadius 함수 참조에 의한 호출로 donut 객체를 Circle객체에 참조 전달한다. 
	cout << "donut의 면적 = " << donut.getArea() << endl; // donut객체의 멤버함수 getArea()를 호출해 donut 객체의 면적을 출력한다.
}