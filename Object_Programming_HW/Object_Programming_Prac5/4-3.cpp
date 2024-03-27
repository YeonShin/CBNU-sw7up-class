/****************************************************************************************/
/*                         HW#3 : 클래스와 객체의 기본                                  */
/*                작성자 : 김연신                    날짜 : 2023년 4월 03일             */
/*                                                                                      */
/* 문제 정의 :  너비(width)와 높이(height)를 가지고 면적 계산 기능을 가진 Rectangle     */
/*				클래스를 작성하고 전체 프로그램을 완성하라.                             */
/****************************************************************************************/

#include <iostream>
using namespace std;

class Rectangular { // Rectangular 클래스 선언
public: //클래스의 접근 지정자를 public으로 지정
	int width; // 클래스 Rectangular의 멤버 변수
	int height; // 클래스 Rectangular의 멤버 변수
	int getArea(); // 클래스 Rectangular의 멤버 함수
};
int Rectangular::getArea() { // Rectangular 클래스의 멤버함수 getArea() 구현
	return width * height; // 클래스의 멤버변수 너비(width)와 높이(height)의 곱으로 면적을 계산하여 반환
}

int main() {
	Rectangular rect; // Rectangular 클래스의 객체 rect 선언
	rect.width = 3; // 객체 rect의 멤버 변수 width를 3으로 초기화
	rect.height = 5; // 객체 rect의 멤버 변수 height를 5로 초기화
	cout << "사각형의 면적은 " << rect.getArea() << endl; // rect의 멤버 함수 getArea()를 호출하여 사각형의 면적을 구하여 출력한다.
	return 0;
}