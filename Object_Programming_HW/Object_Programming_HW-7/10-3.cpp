/****************************************************************************************/
/*                                  HW#7 : ���                                         */
/*          �ۼ��� : �迬��                        ��¥ : 2023�� 5�� 17��               */
/*                                                                                      */
/* ���� ���� :  BaseArray Ŭ������ ��ӹ޾� ťó�� �۵��ϴ� MyQueue Ŭ������ �ۼ��϶�   */
/****************************************************************************************/

#include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity; // ���� �Ҵ�� �޸� �뷮
	int* mem;	  // ���� �迭�� ����� ���� �޸� ������
protected:
	BaseArray(int capacity = 100) { // Ŭ������ �⺻ ������, capacity�� ����Ʈ ���� 100���� �޸� �뷮�� ������ �� �� ��ŭ �޸� �����Ϳ� �޸� ������ �Ҵ��Ѵ�
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() { delete [] mem; } // Ŭ������ �Ҹ��ڷ�, �Ҹ�Ǹ鼭 ���� �Ҵ� ���� �޸� �������� �޸� ������ �����Ѵ�
	void put(int index, int val) { mem[index] = val; } // �Ű������� ���� �ε��� ���� �ش��ϴ� �޸��� ��ġ�� val ���� �����Ѵ�
	int get(int index) { return mem[index]; } // �ε��� ���� �ش��ϴ� �޸� ��ġ�� ���� ����
	int getCapacity() { return capacity; } // �޸� �뷮�� ����
};

class MyQueue : public BaseArray { // BaseArray Ŭ������ ��ӹ��� MyQueue Ŭ����
private:
	int rear = 0; // ť�� ������ ���� ������ �Ͼ ��ġ
	int front = 0; // ť�� �ٸ� ���� ������ ���� ������ �Ͼ ��ġ
public:
	MyQueue(int capacity) : BaseArray(capacity) { ; } // �Ű������� ���� �����ڷ� �Ű����� BaseArray(capacity)�� �����ڸ� ȣ���Ͽ� ť�� �뷮�� ���� 
	void enqueue(int data){ // ť�� ���� ����
		if (rear >= getCapacity()) { // rear�� ť�� �뷮���� ũ�ų� ���ٸ� ��, ť�� ���� ���ִ�
			cout << "Queue is Full" << endl;
		}
		else {
			rear++; // ������ �����Ͱ� �� ��ġ�� �缳���ϱ� ���� rear�� ����
			put(rear, data); //ť�� ���� ���� data�� ����
		}
	}
	int dequeue() {
		if (rear == 0) { // rear�� 0�̶�� ��, ť�� ����ִٸ�
			cout << "Queue is Empty" << endl;
		}
		front++; // ť�� ���� �����͸� ����Ű�� front���� ����
		rear--; // �����͸� ���������Ƿ� ť�� ũ�� ���� ������ �־�� �ϹǷ� rear���� ���ҽ�Ų��.
		return get(front); //ť�� �ٸ� ���ʳ��� �ִ� �����͸� ����
	}
	int length() { return rear; } // ť�� rear��ġ���� ť�� ũ��� ����.
	int capacity() { return getCapacity(); } // ť�� �뷮�� ����

};

int main() {
	MyQueue mQ(100);
	int n;

	cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n); // ť�� ����
	}
	cout << "ť�� �뷮 : " << mQ.capacity() << ", ť�� ũ�� : " << mQ.length() << endl;

	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' '; // ť���� �����Ͽ� ���
	}

	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}