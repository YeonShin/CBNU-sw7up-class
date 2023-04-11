#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:

	MyVector(int n, int val);
	void show();
	~MyVector() { delete[] mem; }
};

MyVector::MyVector(int n = 100, int val = 0) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) {
		mem[i] = val;
	}
}
void MyVector::show() {
	for (int i = 0; i < size; i++)
	{
		cout << mem[i] << " ";
	}
}

int main() {
	MyVector vec1;
	MyVector vec2(200, 1);
	vec1.show();
	vec2.show();

}