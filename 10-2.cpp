/************************************************************************************/
/*                              HW#7 : 상속                                         */
/*          작성자 : 김연신                    날짜 : 2023년 5월 17일               */
/*                                                                                  */
/* 문제 정의 :  Circle을 상속받은 NameCircle 클래스를 작성하고 피자들의 반지름과    */
/*            이름을 입력받으면 가장 면적이 넓은 피자를 구하는 프로그램을 완성하라  */
/************************************************************************************/

#include <iostream>
using namespace std;

class Circle { // Circle 클래스
protected:// protected 멤버로 파생 클래스에 접근이 허용되는 부분
	int radius; // 원의 반지름
public:
	Circle() { radius = 1; } // Circle 클래스의 기본생성자, radius를 1로 초기화
	Circle(int radius){ this->radius = radius; } // 매개변수를 갖는 생성자, 멤버 변수 radius를 매개변수 radius로 설정
	int getRadius() { return radius; } // radius를 반환하는 함수
	void setRadius(int radius) { this->radius = radius; } // 반지름을 설정하는 함수
	double getArea() { return 3.14 * radius * radius; } // 원의 면적을 계산하는 함수
};

class NamedCircle : public Circle { // Circle 클래스의 파생 클래스 NamedCircle
	string name; // 원의 이름
public:
	// 기본 생성자로, Circle의 기본 생성자가 호출되면서 radius가 1로 초기화, name을 "Name"으로 초기화
	NamedCircle() : Circle() { name = "Name"; } 
	// 매개변수가 있는 생성자, radius를 매개변수로 갖는 Circle 생성자를 호출하여 radius와 name을 매개변수로 받은 값으로 설정
	NamedCircle(int radius, string name) : Circle(radius) { this->name = name; }

	void setName(string name) { this->name = name; } //원의 이름을 설정하는 함수
	string getName() { return name; } // 원의 이름을 반환하는 함수
};

int main() {
	NamedCircle pizza[5]; // 객체 배열 pizza 선언
	int r, big; // 반지름을 입력받을 변수 r과 가장 면적이 넓은 객체의 인덱스를 저장할 변수 big
	string n; // 이름을 입력받을 string 변수 n
	cout << "5개의 정수 반지름과 원의 이름을 입력하세요." << endl;
	for (int i = 0; i < 5; i++) { // 5개의 정수 반지름과 원의 이름을 입력받는다
		cout << i + 1 << ">> ";
		cin >> r >> n;
		pizza[i].setRadius(r);
		pizza[i].setName(n);
	}
	big = 0; // 객체 배열 pizza의 가장 첫번째 객체의 인덱스를 big으로 설정
	for (int i = 1; i < 5; i++) {
		if (pizza[big].getRadius() < pizza[i].getRadius()) // 더 면적이 큰 객체의 인덱스를 big에 저장
		{
			big = i;
		}
	}
	cout << "가장 면적이 큰 피자는 " << pizza[big].getName() << "입니다" << endl; // 가장 큰 피자의 면적과 이름을 출력
}