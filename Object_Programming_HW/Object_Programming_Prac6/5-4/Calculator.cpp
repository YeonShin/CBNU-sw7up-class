/* Calculator 클래스 구현 부분 */

#include <iostream>
using namespace std;

// 헤더파일 include
#include "Calculator.h"
#include "Adder.h"

void Calculator::run() {
	cout << "두 개의 수를 입력하세요>>";
	int a, b;
	cin >> a >> b; // 정수 두개 입력
	Adder adder(a, b); // 덧셈기 객체 생성, 매개변수를 갖는 생성자 호출
	cout << adder.process(); // 덧셈 계산, Adder 클래스의 멤버 함수 process() 호출
}