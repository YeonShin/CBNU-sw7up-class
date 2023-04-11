/*****************************************************************************************************/
/*                           HW#3 : 클래스와 객체의 기본                                             */
/*                작성자 : 김연신                    날짜 : 2023년 4월 03일                          */
/*                                                                                                   */
/* 문제 정의 :  String 타입의 Vector를 이용하여 문자열을 저장하는 벡터를 만들고, 5개의 이름을 입력   */
/*             받아 사전에서 가장 뒤에 나오는 이름을 출력하는 프로그램을 작성하라                    */
/*****************************************************************************************************/

#include <iostream>
#include <string> 
#include <vector>
// string, vector 헤더 파일 선언
using namespace std;

int main(void) {
	vector<string> v; // string 타입의 vector v 선언
	string name; // 벡터 v에 push_back 하기전에 잠시 저장해둘 string 선언
	cout << "이름을 5개 입력하라" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i+1 << ">>";
		getline(cin, name);
		v.push_back(name); // 벡터 v에 name 문자열을 삽입
	}
	string late = v.at(0); // 가장 뒤에 나오는 이름 string을 late라고 선언하고 벡터 v의 가장 첫 문자열로 초기화
	for (int j = 1; j < 5; j++) {
		if (late < v.at(j))
		{
			late = v.at(j); // 벡터 v에 삽입된 문자열을 순차적으로 크기를 비교하여 더 큰(사전상 더 뒤에 있는) 문자열을 late에 저장
		}
	}
	cout << "사전에서 가장 뒤에 나오는 이름은 " << late << endl;
	return 0;
}