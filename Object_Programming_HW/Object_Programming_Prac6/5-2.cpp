/*****************************************************************************/
/*                HW#4 : 생성자와 소멸자, 분할 컴파일                        */
/*      작성자 : 김연신                    날짜 : 2023년 4월 10일            */
/*                                                                           */
/* 문제 정의 : Oval 클래스는 주어진 사각형에 내접하는 타원을 추상화한 클래스 */
/*             Oval 클래스를 선언부와 구현부로 나누어 작성하라               */
/*****************************************************************************/

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class Oval { // Oval 클래스 선언
	int width; // 사각형의 너비 멤버 변수
	int height; // 사각형의 높이 멤버 변수
public:
	Oval(int w, int h); // 너비와 높이값을 매개 변수로 받는 생성자
	Oval(); // 너비와 높이를 1로 초기화하는 매개 변수 없는 생성자
	~Oval(); // width와 height를 출력하는 소멸자
	int getWidth(); // 타원의 너비를 리턴하는 멤버 함수
	int getHeight(); // 타원의 높이를 리턴하는 멤버 함수
	void set(int w, int h); // 타원의 너비와 높이를 변경하는 멤버 함수
	void show(); // 타원의 너비와 높이를 화면에 출력하는 멤버 함수
};

/* 클래스 구현부 */
Oval::Oval(int w, int h) { // 너비와 높이값을 매개 변수로 받는 생성자 구현
	width = w; // 매개변수 w값을 width에 저장
	height = h; // 매개변수 h값을 height에 저장
}
Oval::Oval() { // 너비와 높이를 1로 초기화하는 매개 변수 없는 생성자 구현
	width = 1; // 너비와 높이를 1로 초기화
	height = 1;
}
Oval::~Oval() { // width와 height를 출력하는 소멸자 구현
	cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
}
int Oval::getWidth() { // 타원의 너비를 리턴하는 멤버 함수
	return width; // 주어진 사각형에 내접하는 타원의 너비, 사각형의 너비 width와 같으므로 width를 리턴
}
int Oval::getHeight() { // 타원의 높이를 리턴하는 멤버 함수
	return height; // 주어진 사각형에 내접하는 타원의 높이, 사각형의 높이 height와 같으므로 height를 리턴
}
void Oval::set(int w, int h) { // 타원의 너비와 높이를 변경하는 멤버 함수
	width = w; // 타원의 너비 width를 전달받은 매개 변수 w 값으로 변경
	height = h; // 타원의 높이 height를 전달받은 매개 변수 h값으로 변경
}
void Oval::show() { // 타원의 너비와 높이를 화면에 출력하는 멤버 함수
	cout << "width = " << width << ", height = " << height << endl; // 타원의 너비와 높이 width와 height를 출력
}


int main() {
	Oval a, b(3, 4); // 객체 a를 선언하면서 매개 변수가 없는 생성자 호출, 객체 b를 선언하면서 매개 변수가 있는 생성자 호출 
	a.set(10, 20); // 객체 a의 멤버 함수 set을 호출, 객체 a의 width와 height 값을 10, 20으로 변경
	a.show(); // 객체 a의 멤버 함수 show 호출, 객체 a의 width와 height 값 출력
	cout << b.getWidth() << ", " << b.getHeight() << endl; // 객체 b의 멤버함수 getWidth를 호출, b의 width 값을 출력, b의 멤버 함수 getHeight 호출, b의 height 값 출력

	return 0; // 프로그램이 종료되면서 객체 b, a가 순서대로 소멸되면서 소멸자가 호출된다.
} //