#include <iostream>

using namespace std;

int main()
{
    int N,counter = 0;
    cin >> N;
    while (N != 0) {
        if (N % 10 > 3) counter++;
        N /= 10;
    }
    cout << "Number > 3  :" << counter << endl;
    return 0;
}
