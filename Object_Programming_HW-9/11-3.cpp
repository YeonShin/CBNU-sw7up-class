/***************************************************************************************/
/*                          HW#9 : 가상함수와 추상클래스                               */
/*              작성자 : 김연신                    날짜 : 2023년 5월 28일              */
/*                                                                                     */
/* 문제 정의 : 추상 클래스 Calculator를 상속받는 Adder와 Subtractor 클래스를 구현하라  */
/***************************************************************************************/

#include <iostream>
using namespace std;

class Calculator { // 추상 클래스 Calculator
	void input() {
		cout << "정수 2개를 입력하세요>> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0; // 두 정수의 합/차 리턴
public:
	void run() {
		input();
		cout << "계산된 값은 " << calc(a, b) << endl;
	}
};

class Adder : public Calculator { // Calculator를 상속받는 Adder 클래스
	virtual int calc(int a, int b) { // 순수 가상 함수인 calc를 오버라이딩
		return a + b; // 두 정수의 합 리턴
	}
};
class Subtractor : public Calculator {// Calculator를 상속받는 Subtractor 클래스
	virtual int calc(int a, int b) { // 순수 가상 함수인 calc를 오버라이딩
		return a - b; // 두 정수의 차 리턴
	}
};

int main() {
	Adder adder; // Adder 클래스의 객체 선언
	Subtractor subtractor; // Subtractor 클래스의 객체 선언
	adder.run(); // 두 정수를 입력받고 합을 출력
	subtractor.run(); // 두 정수를 입력받고 차를 출력
}