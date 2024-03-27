/****************************************************************************************/
/*                                  HW#7 : 상속                                         */
/*          작성자 : 김연신                        날짜 : 2023년 5월 17일               */
/*                                                                                      */
/* 문제 정의 :  BaseArray 클래스를 상속받아 큐처럼 작동하는 MyQueue 클래스를 작성하라   */
/****************************************************************************************/

#include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity; // 동적 할당된 메모리 용량
	int* mem;	  // 정수 배열을 만들기 위한 메모리 포인터
protected:
	BaseArray(int capacity = 100) { // 클래스의 기본 생성자, capacity의 디폴트 값은 100으로 메모리 용량을 설정한 후 그 만큼 메모리 포인터에 메모리 공간을 할당한다
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() { delete [] mem; } // 클래스의 소멸자로, 소멸되면서 동적 할당 받은 메모리 포인터의 메모리 공간을 해제한다
	void put(int index, int val) { mem[index] = val; } // 매개변수로 받은 인덱스 값에 해당하는 메모리의 위치에 val 값을 저장한다
	int get(int index) { return mem[index]; } // 인덱스 값에 해당하는 메모리 위치의 값을 리턴
	int getCapacity() { return capacity; } // 메모리 용량을 리턴
};

class MyQueue : public BaseArray { // BaseArray 클래스를 상속받은 MyQueue 클래스
private:
	int rear = 0; // 큐의 끝으로 삽입 연산이 일어날 위치
	int front = 0; // 큐의 다른 한쪽 끝으로 삭제 연산이 일어날 위치
public:
	MyQueue(int capacity) : BaseArray(capacity) { ; } // 매개변수를 갖는 생성자로 매개변수 BaseArray(capacity)의 생성자를 호출하여 큐의 용량을 설정 
	void enqueue(int data){ // 큐의 삽입 연산
		if (rear >= getCapacity()) { // rear가 큐의 용량보다 크거나 같다면 즉, 큐가 가득 차있다
			cout << "Queue is Full" << endl;
		}
		else {
			rear++; // 다음에 데이터가 들어갈 위치로 재설정하기 위해 rear값 증가
			put(rear, data); //큐의 한쪽 끝에 data를 삽입
		}
	}
	int dequeue() {
		if (rear == 0) { // rear가 0이라면 즉, 큐가 비어있다면
			cout << "Queue is Empty" << endl;
		}
		front++; // 큐의 다음 데이터를 가리키게 front값을 증가
		rear--; // 데이터를 제거했으므로 큐의 크기 값의 변동이 있어야 하므로 rear값을 감소시킨다.
		return get(front); //큐의 다른 한쪽끝에 있는 데이터를 삭제
	}
	int length() { return rear; } // 큐의 rear위치값은 큐의 크기와 같다.
	int capacity() { return getCapacity(); } // 큐의 용량을 리턴

};

int main() {
	MyQueue mQ(100);
	int n;

	cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n); // 큐에 삽입
	}
	cout << "큐의 용량 : " << mQ.capacity() << ", 큐의 크기 : " << mQ.length() << endl;

	cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력
	}

	cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
}