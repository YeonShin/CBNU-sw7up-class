#include <iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	int j;
	T* tmpArray = new T[sizeSrc];
	for (int i = 0; i < sizeSrc; i++) {
		for (j = 0; j < sizeMinus; j++) {
			if (src[i] == minus[j]) {
				--j;
				break;
			}
		}
		if (j == sizeMinus) {
			tmpArray[retSize] = src[i];
			retSize++;
		}
	}
	return tmpArray;
}


int main(){
	// remove() �Լ��� int�� ��üȭ�ϴ� ���
	cout << "���� �迭 {1,2,3,4}���� ���� �迭 {-3,5,10,1,2,3}�� ���ϴ�" << endl;

	int x[] = { 1,2,3,4 };
	int y[] = { -3,5,10,1,2,3 };
	int retSize=0;

	int *p = remove(x, 4, y, 6, retSize);
	if (retSize == 0) {
		cout << "��� ���ŵǾ� �����ϴ� �迭�� �����ϴ�." << endl;
		return 0;
	}
	else {
		for (int i = 0; i < retSize; i++) {
			cout << p[i] << ' ';
		}
		cout << endl;
	}

	delete[] p; 

	cout << "�Ǽ� �迭 {1.2,2.4,3.1,4.5}���� ���� �迭 {-3.2,5.1,10.4,1.2,2.4,3.1}�� ���ϴ�" << endl;

	double c[] = { 1.2, 2.4, 3.1, 4.5 };
	double d[] = { -3.2, 5.1, 10.4, 1.2, 2.4, 3.1 };
	int Size = 0;

	double* pp = remove(c, 4, d, 6, Size);
	if (Size == 0) {
		cout << "��� ���ŵǾ� �����ϴ� �迭�� �����ϴ�." << endl;
		return 0;
	}
	else {
		for (int i = 0; i < Size; i++) {
			cout << pp[i] << ' ';
		}
		cout << endl;
	}
	delete[] pp;
}