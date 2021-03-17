#include <iostream>
using namespace std;
int main() {
    int bobble[5] = {5, 2, 1, 4, 3};
    int a;
    
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            if (bobble[i] > bobble[i + 1]) {
                a = bobble[i];
                bobble[i] = bobble[i + 1];
                bobble[i + 1] = a;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << bobble[i] << ",";
    }
}
