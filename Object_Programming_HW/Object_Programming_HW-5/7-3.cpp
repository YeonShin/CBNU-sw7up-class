/**********************************************************************************************/
/*                            HW#5 : 여러가지 객체의 생성방법                                 */
/*                   작성자 : 김연신                    날짜 : 2023년 5월 5일                 */
/*                                                                                            */
/* 문제 정의 : Person은 사람, Family는 가족을 추상화한 클래스로 가족 구성원이 3명인 Simpson   */
/*             가족 클래스를 동적으로 생성하고, 각각의 가족구성원을 동적으로 생성한다.        */
/**********************************************************************************************/

#include <iostream>
using namespace std;

class Person { // 사람 클래스
	string name;
public:
	Person() { name = ""; } // 기본 생성자가 생성될 때 name 을 ""으로 초기화
	Person(string name) { this->name = name; } // string형의 name 을 매개변수로 받아 생성자를 생성할때 name으로 클래스의 멤버 변수 name 초기화 
	string getName() { return name; } // 멤버 변수 name을 반환하는 함수
	void setName(string name) { this->name = name; } // 전달 받은 name 스트링으로 멤버 name을 초기화하는 함수
};

class Family {
	string name;
	Person* p; // Person 배열 포인터
	int size; // Person 배열의 크기 가족 구성원 수
public:
	Family(string name, int size); // size 개수만큼 Person 배열 동적 생성
	void setName(int index, string name); // index번째 가족 구성원의 이름을 설정하는 함수
	void show(); // 모든 가족 구성원 출력
	~Family(); // 객체가 소멸되면서 동적 생성한 가족 구성원 객체를 초기화
};
Family::Family(string name, int size) {
	p = new Person[size]; // size 개수만큼 Person 배열을 객체 포인터 p에 동적 할당
	this->name = name; // 가족의 이름 설정
	this->size = size; // 가족 구성원 수를 설정
}
void Family::setName(int index, string name) {
	p[index].setName(name); // index번째 가족 구성원의 이름 설정
}
void Family::show() {
	cout << name << " 가족은 다음과 같이 " << size << "명입니다." << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i].getName() << "\t"; // 가족 구성원의 이름 출력
	}
}
Family::~Family() {
	delete [] p; // 가족구성원의 할당된 메모리를 초기화
}
int main() {
	Family* simpson = new Family("Simpson", 3); // Simpson 이름을 가진 가족구성원이 3명인 가족 클래스 크기 만큼 메모리를 동적으로 할당
	simpson->setName(0, "Mr.Simpson"); // 첫번째 가족 구성원의 이름 설정
	simpson->setName(1, "Mrs.Simpson"); // 두번째 가족 구성원의 이름 설정
	simpson->setName(2, "Bart Simpson"); // 세번째 가족 구성원의 이름 설정
	simpson->show(); // 모든 가족 구성원의 이름 출력
	delete simpson; // simpson 객체 포인터의 할당 받은 메모리를 초기화
}