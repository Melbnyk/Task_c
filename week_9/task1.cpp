#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	srand(time(0));
	int max=0,min =0, index;
	int m[12],a;
	for (int i = 0;i < 12;i++) {
		m[i] = rand() % 10 + 1;
	}
	
	cout << "Unsorted array = [ ";
	for (int i = 0;i < 12;i++) cout << m[i] <<" ";
	cout <<"]" << endl;

	for (int i = 0; i < 12; i++) {//max
		max = 0;
		for (int j = i; j < 12;j++) {
			if (m[j] > max) {
				max = m[j];
				index = j;
			}
		}
		m[index] = m[i];
		m[i] = max;
	}

	cout << "In descending order = [";
	for (int i = 0;i < 12;i++)cout << m[i] << " ";
	cout <<"]" << endl;
	
	for (int i = 0; i < 12; i++) {
			min = m[i];
			for (int j = i+1; j < 12;j++) {
				if (m[j] < min) {
					min = m[j];
					index = j;
				}
			}
			m[index] = m[i];
			m[i] = min;
		}

	cout << "In ascending order = [ ";
	for (int i = 0;i < 12;i++)cout << m[i] << " ";
	cout << "]" << endl;

	return 0;
}
