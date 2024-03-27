/*************************************************************************************/
/*                       HW#8 : friend와 연산자 중복                                 */
/*              작성자 : 김연신                    날짜 : 2023년 5월 22일            */
/*                                                                                   */
/* 문제 정의 : Book 객체를 활용하여 3개의 == 연산자를 가진 Book 클래스를 작성하여라  */
/*             price 비교 연산자와 title 비교 연산자 클래스 비교 연산자              */
/*************************************************************************************/

#include <iostream>
using namespace std;

class Book { // Book 클래스
	string title;
	int price;
	int pages;

public:
	Book(string title = "", int price = 0, int pages = 0) { // 클래스의 생성자
		this->title = title; this->price = price; this->pages = pages; // title, price, pages를 전달받은 인자로 설정한다
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << "페이지" << endl; // title과 가격, 페이지를 출력한다
	}
	string getTitle() { // 책의 이름을 반환 받는다
		return title;
	}
	bool operator==(int price); // 멤버 함수로 작성한 Book 객체의 price를 받은 int값과 비교하는 연산자 함수
	bool operator==(string title); // 멤버 함수로 작성한 Book 객체의 title을 받은 문자열과 비교하는 연산자 함수 
	bool operator==(Book op2); // 멤버 함수로 작성한 Book 객체와 다른 Book 객체 op2와 비교하는 연산자 함수
};

bool Book::operator==(int price) {
	if (this->price == price) { // 객체의 price와 전달받은 price와 같다면
		return true; // true 반환
	}
	else { // 같지 않다면
		return false; // false 반환
	}
}
bool Book::operator==(string title) { 
	if (this->title == title) { // 객체의 title과 전달받은 문자열 title이 같다면
		return true; 
	}
	else { // 같지 않다면
		return false;
	}
}
bool Book::operator==(Book op2) {
	if (price == op2.price && title == op2.title && pages == op2.pages) { // 객체의 price, title, pages가 전달받은 객체 op2의 price, title, pages와 같다면
		return true;
	}
	else { // 같지 않다면
		return false;
	}
}

int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);

	// price 비교
	if (a == 30000) cout << "정가 30000원" << endl;

	// 책 title 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;

	// title, price, pages 모두 비교
	if (a == b) cout << "두 책이 같은 책입니다." << endl;
}