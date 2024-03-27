/********************************************************************************************/
/*                          HW#5 : 여러가지 객체의 생성방법                                 */
/*                 작성자 : 김연신                    날짜 : 2023년 5월 5일                 */
/*                                                                                          */
/* 문제 정의 : 원을 추상화한 Circle 클래스가 있다. 3개의 Circle 객체를 가진 배열을 선언하고 */
/*             반지름 값을 입력받고, 면적이 100보다 큰 원의 개수를 출력하여라               */
/********************************************************************************************/

#include <iostream>
using namespace std;

class Circle {
	int radius; // 원의 반지름 값
public:
	void setRadius(int radius); // 반지름을 설정한다.
	double getArea(); // 면적을 리턴한다.
};

void Circle::setRadius(int radius) {
	this->radius = radius; // 전달 받은 매개변수 radius값으로 클래스의 멤버변수 radius 값 설정
}
double Circle::getArea() {
	return 3.14 * radius * radius; // 원의 면적 값을 구하여 반환한다
}

int main() {
	int count = 0; // 면적이 100보다 큰 원의 개수
	int r;
	Circle ArrayCircle[3]; // ArrayCircle 객체 배열 선언 (디폴트 생성자로 초기화)

	for (int i = 0; i < 3; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		ArrayCircle[i].setRadius(r); // 객체 배열의 반지름을 순서대로 설정
		if (ArrayCircle[i].getArea() > 100) {
			count++; // 객체 배열의 멤버함수 getArea()의 반환값(원의 면적)이 100보다 더 크면 count 값 1증가
		}
	}
	cout << "면적이 100보다 큰 원 " << count << "개입니다."; // 결과 출력

}