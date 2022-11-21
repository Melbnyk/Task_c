#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int random(int min, int max)
{
	max++;
	return abs(rand() % (max - min)) + min;
}

int main() {
	srand(time(0));
	int m[12], a;
	for (int i = 0;i < 12;i++) {
		m[i] = random(-10,30);
	}

	for (int i = 0;i < 12;i++) {
		cout << m[i] << " ";
	}
	cout << endl;

	for (int i = 0;i < 12;i++) {
		if (m[i] < 0) m[i] = 0;
	}

	for (int i = 0;i < 12;i++) {
		cout << m[i] << " ";
	}
	return 0;
}
