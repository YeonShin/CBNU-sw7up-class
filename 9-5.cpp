/*************************************************************************************/
/*                       HW#8 : friend와 연산자 중복                                 */
/*              작성자 : 김연신                    날짜 : 2023년 5월 22일            */
/*                                                                                   */
/* 문제 정의 : Book 객체를 활용하여 공짜 책인지 판별하는 !연산자 함수를 작성         */
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
	string getTitle() { 
		return title; // 책의 이름을 반환 받는다
	}
	
	bool operator !(); // 공짜 책인지(가격이 0인지) 판별하는 bool 타입의 ! 연산자 함수
};

bool Book::operator !() {
	if (this->price == 0) { // 객체의 price가 0이라면
		return true; // true 반환
	}
	else { // 0이 아니라면
		return false; // false 반환
	}
}

int main() {
	Book book("벼룩시장", 0, 50); // 가격은 0
	if (!book) cout << "공짜다" << endl; // 가격이 0이므로 "공짜다" 출력
}