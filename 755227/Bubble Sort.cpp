#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int num[4];
    int space = 0;

    for (int i = 0; i < 5; i++) {
        cin >> num[i];
    }

    for (int i = 5; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (num[j] > num[j + 1]) {
                space = num[j];
                num[j] = num[j + 1];
                num[j + 1] = space;
                space = 0;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << num[i] << " ";
    }

    cout << endl << endl;

    int k[4];
    int spacee;
    srand(time(NULL));
    
    for (int i = 0; i < 5; i++) {
        k[i] = rand() % 100;
    }

    for (int i = 5; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (k[j] > k[j + 1]) {
                spacee = k[j];
                k[j] = k[j + 1];
                k[j + 1] = spacee;
                spacee = 0;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << k[i] << " ";
    }
}
