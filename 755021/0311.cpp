#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int A[5], a;

    srand(time(0));
    for(int i = 0; i < 5; i++) {
        A[i] = rand() % 10;
        cout << A[i] << " ";
    }

    cout << endl << endl;

    for(int i = 5; i > 0; i--) {
        for(int j = 0; j <= i - 1; j++) {
            if( A[j] > A[j + 1]) {
                a = A [j];
                A[j] = A[j + 1];
                A[j + 1] = a;
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        cout << A[i] << " ";
    }
}
