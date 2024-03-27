/***********************************************************************************************************/
/*                              HW#6 : 함수와 참조, 복사 생성자                                            */
/*                    작성자 : 홍길동                    날짜 : 2023년 5월 10일                            */
/*                                                                                                         */
/* 문제 정의 :  클래스 Accumulator는 add()함수를 통해 값을 누적하는 클래스이다. Accumulator클래스를        */
/*              구현하여 프로그램을 완성하시오                                                             */
/***********************************************************************************************************/

#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value); // 매개변수 value로 멤버 value를 초기화한다.
	Accumulator& add(int n); //value에 n을 더해 값을 누적한다.
	int get() { return value; }  // 누적된 값 value를 리턴한다.
};
Accumulator::Accumulator(int value) {
	this->value = value; // 매개변수 value로 클래스의 멤버 value를 초기화하는 매개변수를 갖는 생성자 구현
}

Accumulator& Accumulator::add(int n) { // 클래스 Accumulator 자신의 참조를 데이터 타입으로 갖는 클래스의 멤버 함수 add 구현
	this->value = this->value + n; //멤버 value를 value에 매개변수 n을 더하여 설정한다.
	return *this; // 클래스 Accumulator 자기 자신을 참조 리턴한다.

}
int main() {
	Accumulator acc(10); // value 값을 10으로 객체를 생성한다.
	acc.add(5).add(6).add(7); // acc의 멤버가 28이 된다. 
	cout << acc.get() << endl; // 28 출력
}