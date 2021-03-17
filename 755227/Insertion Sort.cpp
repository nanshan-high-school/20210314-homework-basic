#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int num[5];
    int space;
    
    for (int i = 0; i < 5; i++) {
        num[i] = rand() % 100;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i; j > 0; j--) {
            if (num[j] < num[j - 1]) {
                space = num[j];
                num[j] = num[j - 1];
                num[j - 1] = space;
                space = 0;
            }
        }

        for (int k = 0; k < 5; k++) {
            cout << num[k] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        cout << num[i] << " ";
    }
}
