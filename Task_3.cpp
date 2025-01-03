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
			cout << " �迭�� �߰��Ǿ����ϴ�. " << value << endl;
		}
		else {
			cout << " �迭�� ���� á���ϴ�. " << endl;
		}
	}

	void pop_back() {
		if (currentSize > 0) {
			--currentSize;
			cout << " �迭�� ������ ���Ұ� ���ŵǾ����ϴ�. " << endl;
		}
		else {
			cout << " �迭�� ����ֽ��ϴ�. " << endl;
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
		cout << "\n�迭�� ���� �߰� ���� ���α׷� " << endl;
		cout << " 1.���� �߰��ϱ� " << endl;
		cout << " 2.���� �����ϱ� " << endl;
		cout << " 3.�迭�� ���� ���� : " << endl;
		cout << " 4.�迭�� �� ���� : " << endl;
		cout << " 5.���α׷� ���� " << endl;
		cout << " ���� : ";
		int choice;
		cin >> choice;

		if (choice == 1) {
			int value;
			cout << " �߰��� ���� : ";
			cin >> value;
			vec.push_back(value);
		}
		else if (choice == 2) {
			cout << " ������ ���� ���� " << endl;
			vec.pop_back();
		}
		else if (choice == 3) {
			cout << " �迭�� ���� ���� : " << vec.getcurrentSize();
		}
		else if (choice == 4) {
			cout << " �迭�� �� ���� : " << vec.getcurrentCapacity();
		}
		else if (choice == 5) {
			cout << " ���α׷� ����. " << endl;
			break;
		}

	}



	return 0;

}
