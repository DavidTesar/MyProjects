#include <iostream>
#include <ctime>
//#include <Windows.h>

using namespace std;

int main() {

	const int size = 100;
	int list[size];

	srand(time(NULL));

	for (int i = 0; i < size; ++i) {
		list[i] = rand() % 100;
		//cout << list[i] << ", ";
	}

	return 0;
}