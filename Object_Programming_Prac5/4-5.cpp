/***********************************************************************************************/
/*                              HW#3 : 클래스와 객체의 기본                                    */
/*                   작성자 : 김연신                    날짜 : 2023년 4월 03일                 */
/*                                                                                             */
/* 문제 정의 :  &가 입력될 때까지 여러 줄의 영문문자열을 입력받고, 찾는 문자열과               */
/*			   대치 할 문자열을 각각 입력 받아 문자열을 변경하는 프로그램을 작성하려고 한다.   */
/***********************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s; // 문자열을 저장할 string s를 선언
	string find; // 찾는 문자열을 저장할 string find 선언
	string replace; // 대치할 문자열을 저장할 string replace 선언
	int index; // 찾는 문자열이 존재하는 인덱스 값을 저장할 변수 index 선언
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
	getline(cin, s, '&'); // 문자 '&'을 입력받을때 까지 여러 줄의 문자열을 입력받아 s에 저장한다.

	cout << "find: ";
	cin.ignore(); // 버퍼에 개행문자 남아있지 않게 cin.ignore()함수로 버퍼를 지워준다.
	getline(cin, find); // 찾는 문자열 find 를 입력받는다.
	
	cout << "replace: ";
	getline(cin, replace); // 대치할 문자열 replace를 입력받는다.

	while (s.find(find) != -1) { // s에 find 문자열이 없을때 까지 반복
		index = s.find(find); // s문자열 안에 find 문자열이 처음나타나는 인덱스값을 index에 저장
		s.replace(index, find.length(), replace); // index값을 replace할 위치로 find의 길이만큼 replace 문자로 대치한다.
	}
	cout << s << endl; //최종 결과 출력

	return 0;
}