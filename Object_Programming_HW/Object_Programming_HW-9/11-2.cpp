/*********************************************************************************/
/*                    HW#9 : 가상함수와 추상클래스                               */
/*        작성자 : 김연신                    날짜 : 2023년 5월 28일              */
/*                                                                               */
/* 문제 정의 : 추상 클래스 Calculator 를 상속받아 GoodCalc 클래스를 구현하라     */
/*********************************************************************************/

#include <iostream>
using namespace std;

class Calculator { 
public:
	virtual int add(int a, int b) = 0; // 두 정수의 합 리턴
	virtual int subtract(int a, int b) = 0; // 두 정수의 차 리턴
	virtual double average(int a[], int size) = 0; // 배열 a의 평균 리턴. size는 배열의 크기
};

class GoodCalc : public Calculator { // Calculator 클래스 상속받은 GoodCalc 파생 클래스
protected:
	int sum = 0; // 배열의 요소의 합을 저장할 변수
public:
	virtual int add(int a, int b) { // 순수 가상 함수 add 오버라이딩
		return (a + b); // 두 정수의 합 리턴
	}
	virtual int subtract(int a, int b) { // 순수 가상 함수 subtract 오버라이딩
		return (a - b); // 두 정수의 차 리턴
	}
	virtual double average(int a[], int size) { // 순수 가상 함수 average 오버라이딩
		for (int i = 0; i < size; i++) {
			sum += a[i]; // 배열의 크기만큼 반복하여 배열의 요소들의 합을 sum에 저장
		}
		return (sum / size); // 배열 a의 평균 리턴
	}
};
int main() {
	int a[] = { 1,2,3,4,5 };
	Calculator* p = new GoodCalc();
	cout << p->add(2, 3) << endl; // 두 정수의 합 출력
	cout << p->subtract(2, 3) << endl; // 두 정수의 차 출력
	cout << p->average(a, 5) << endl; // 배열 a의 평균 출력
	delete p; // 기본클래스의 포인터의 동적할당 메모리 할당 해제 
}