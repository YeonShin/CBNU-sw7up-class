/* Adder 클래스 구현 부분 */

#include <iostream>
using namespace std;

#include "Adder.h" // Adder.h 헤더 파일 include

Adder::Adder(int a, int b) { // 클래스의 매개변수를 갖는 생성자 구현
	op1 = a; // 전달 받은 매개변수 a 값을 클래스의 멤버 변수 op1에 저장
	op2 = b; // 전달 받은 매개변수 b 값을 클래스의 멤버 변수 op2에 저장
}
int Adder::process() { // 클래스의 멤버 함수 process 구현
	return op1 + op2; // 두 정수의 합을 리턴
}