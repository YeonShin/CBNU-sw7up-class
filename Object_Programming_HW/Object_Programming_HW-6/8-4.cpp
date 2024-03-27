/***********************************************************************************************************/
/*                              HW#6 : 함수와 참조, 복사 생성자                                            */
/*                    작성자 : 홍길동                    날짜 : 2023년 5월 10일                            */
/*                                                                                                         */
/* 문제 정의 :  책의 이름과 가격을 저장하는 Book 클래스이다. Book 클래스의 생성자, 소멸자, set() 함수를    */
/*              구현하고, 깊은 복사 생성자를 작성하라.                                                     */
/***********************************************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

class Book {
	char* title; // 제목 문자열
	int price; // 가격
public:
	Book(const char* title, int price); // 생성자
	~Book(); // 소멸자
	void set(const char* title, int price); // 책의 이름과 가격을 설정하는 함수 set
	void show() { cout << title << ' ' << price << "원" << endl; } // 제목 문자열과 가격을 출력하는 함수 show
};

Book::Book(const char* title, int price) {
	int len = strlen(title); // 동적 할당할 메모리 크기, 제목 문자열의 크기를 len에 저장
	this->title = new char[len + 1]; // title 문자열의 공간 할당
	strcpy(this->title, title); // 매개변수로 받은 문자열을 title에 복사
	this->price = price; // 매개변수로 받은 price로 멤버 price 가격 설정
}
void Book::set(const char* title, int price) { // 제목 문자열과 가격을 전달 받은 매개변수로 변경하는 함수 set
	int len = strlen(title);
	this->title = new char[len + 1]; // title 문자열의 공간 할당
	strcpy(this->title, title); // title에 문자열 복사
	this->price = price; // 가격 설정
}
Book::~Book() {
	if (title) { // title에 할당된 문자열이 있다면
		delete[] title; // 동적 할당 메모리 소멸
	}
}
int main() {
	Book cpp("명품C++", 10000); // cpp 객체 생성
	Book java = cpp; // java 객체를 생성하고, cpp객체를 복사
	java.set("명품자바", 12000); // java 객체의 문자열과 가격 설정
	cpp.show(); // cpp 객체 출력
	java.show(); // java 객체 출력
}