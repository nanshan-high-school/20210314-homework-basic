#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int k[5];
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
