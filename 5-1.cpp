/*****************************************************************************/
/*                HW#4 : 생성자와 소멸자, 분할 컴파일                        */
/*      작성자 : 김연신                    날짜 : 2023년 4월 10일            */
/*                                                                           */
/* 문제 정의 : Rectangle 클래스를 작성하고 프로그램을 완성하라.              */
/*             Rectangle 클래스는 width와 height 두 멤버 변수와 3개의 생성자 */
/*             그리고 isSquare() 함수를 가진다                               */
/*****************************************************************************/

#include <iostream>
using namespace std;

class Rectangle { // Rectangle 클래스 선언
	int width; // 너비 멤버 변수 width
	int height; // 높이 멤버 변수 height
public:
	Rectangle(); // 매개 변수 없는 생성자
	Rectangle(int w, int h); // 정수형 매개 변수 w, h를 갖는 생성자 
	Rectangle(int a); // 정수형 매개 변수 a를 갖는 생성자
	bool isSquare(); // 정사각형인지 판별할 멤버 함수 isSquare() 
};

Rectangle::Rectangle() { // 매개 변수 없는 생성자 구현
	width = 1; // 클래스의 멤버 변수 width 값을 1로 초기화
	height = 1; // 클래스의 멤버 변수 height 값을 1로 초기화
}
Rectangle::Rectangle(int w, int h) { // 두 개의 매개변수를 갖는 생성자 구현
	width = w; // 멤버 변수 width에 w값으로 초기화
	height = h; // 멤버 변수 height에 h값으로 초기화
}
Rectangle::Rectangle(int a) { //한 개의 매개변수를 갖는 생성자 구현
	width = a; // 두 멤버 변수 width, height에 a값으로 초기화
	height = a;
}
bool Rectangle::isSquare() {
	if (width == height) { // 멤버 변수 width와 height가 같다면
		return true; // true 반환 (정사각형이다.)
	}
	return false;
}

int main() {
	Rectangle rect1; // 매개변수 없는 생성자 호출
	Rectangle rect2(3, 5); // 두 개의 매개 변수를 갖는 생성자 호출 (3,5 인자 전달)
	Rectangle rect3(3); // 한 개의  매개 변수를 갖는 생성자 호출 (3 인자 전달)

	if (rect1.isSquare()) { cout << "rect1은 정사각형이다." << endl; } // 객체 rect1의 width와 height 값이 1로 같으므로 정사각형이다
	if (rect2.isSquare()) { cout << "rect2는 정사각형이다." << endl; } // 객체 rect2의 width는 3, height의 값은 5로 다르므로 정사각형이 아니다.
	if (rect3.isSquare()) { cout << "rect3은 정사각형이다." << endl; } // 객체 rect3의 width와 height의 값이 3으로 같으므로 정사각형이다.

	return 0;
}