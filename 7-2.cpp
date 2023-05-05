/**********************************************************************************************/
/*                            HW#5 : 여러가지 객체의 생성방법                                 */
/*                   작성자 : 김연신                    날짜 : 2023년 5월 5일                 */
/*                                                                                            */
/* 문제 정의 : 색의 3요소인 red, green, blue로 색을 추상화한 Color 클래스를 선언하고 활용하라 */
/**********************************************************************************************/

#include <iostream>
using namespace std;

class Color {
	int red, green, blue; // 색을 추상화한 멤버 변수들
public:
	Color() { red = green = blue = 0; } // 기본 생성자의 멤버 변수들 값을 0으로 초기화
	Color(int r, int g, int b) { red = r; green = g; blue = b; } // 객체가 생성 될때 매개변수 r,g,b 값으로 멤버 변수들 값을 초기화
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; } // 받은 매개변수 r,g,b값으로 멤버 변수들 값 초기화
	void show() { cout << red << ' ' << green << ' ' << blue << endl; } // 멤버 변수 red, green, blue를 순서대로 출력
};

int main() {
	Color screenColor(255, 0, 0); // red가 255이고 나머지는 0인 객체 screenColor 선언
	Color* p; // Color 클래스의 객체 포인터 p 선언
	p = &screenColor; // 객체 포인터 p에 객체 screenColor의 주소 저장
	p->show(); // p의 멤버 함수 show() 호출
	Color colors[3]; // 객체 배열 colors[3] 선언
	p = colors; // 객체 포인터 p에 객체 배열의 첫번째 원소의 주소 저장

	p[0].setColor(255, 0, 0); // 객체 포인터 p의 첫번째 원소의 멤버 함수 setColor를 호출, red의 값을 255, 나머지 두 변수의 값을 0으로 설정
	p[1].setColor(0, 255, 0); // 객체 포인터 p의 두번째 원소의 멤버 함수 setColor를 호출, green의 값을 255, 나머지 두 변수의 값을 0으로 설정
	p[2].setColor(0, 0, 255); // 객체 포인터 p의 세번째 원소의 멤버 함수 setColor를 호출, blue의 값을 255, 나머지 두 변수의 값을 0으로 설정

	for (int i = 0; i < 3; i++) {
		p[i].show(); // 객체 포인터 p의 i번째 멤버 함수 show를 호출
	}
}