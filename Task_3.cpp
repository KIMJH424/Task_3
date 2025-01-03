#include<iostream>
#include<vector>


using namespace std;
template<typename T>


class SimpleVector {
private:
	T* data;
	int currentSize;
	int currentCapacity;

public:
	SimpleVector() {
		currentSize = 0;
		currentCapacity = 10;
		data = new T[currentCapacity];
	}
	SimpleVector(int num) {
		currentSize = 0;
		currentCapacity = num;
		data = new T[currentCapacity];
	}
	void push_back(const T& value) {
		if (currentSize < currentCapacity) {
			data[currentSize++] = value;
			cout << " 배열에 추가되었습니다. " << value << endl;
		}
		else {
			cout << " 배열이 가득 찼습니다. " << endl;
		}
	}

	void pop_back() {
		if (currentSize > 0) {
			--currentSize;
			cout << " 배열의 마지막 원소가 제거되었습니다. " << endl;
		}
		else {
			cout << " 배열이 비어있습니다. " << endl;
		}
	}
	int getcurrentSize() {
		return currentSize;
	}
	int getcurrentCapacity() {
		return currentCapacity;
	}
	~SimpleVector() {
		delete[] data;
	}
};

int main() {
	SimpleVector<int> vec;
	
	while (true) {
		cout << "\n배열의 원소 추가 제거 프로그램 " << endl;
		cout << " 1.원소 추가하기 " << endl;
		cout << " 2.원소 제거하기 " << endl;
		cout << " 3.배열의 현재 개수 : " << endl;
		cout << " 4.배열의 총 개수 : " << endl;
		cout << " 5.프로그램 종료 " << endl;
		cout << " 선택 : ";
		int choice;
		cin >> choice;

		if (choice == 1) {
			int value;
			cout << " 추가할 원소 : ";
			cin >> value;
			vec.push_back(value);
		}
		else if (choice == 2) {
			cout << " 마지막 원소 제거 " << endl;
			vec.pop_back();
		}
		else if (choice == 3) {
			cout << " 배열의 현재 개수 : " << vec.getcurrentSize();
		}
		else if (choice == 4) {
			cout << " 배열의 총 개수 : " << vec.getcurrentCapacity();
		}
		else if (choice == 5) {
			cout << " 프로그램 종료. " << endl;
			break;
		}

	}



	return 0;

}
