#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int sort[5];
    int place;
    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        sort[i] = rand() % 100;
    }
    
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            if (sort[i] > sort[i + 1]) {
                place = sort[i];
                sort[i] = sort[i + 1];
                sort[i + 1] = place;
            }
        }
    }
    
    for (int i = 0; i < 5; i++) {
        cout << sort[i];
        cout << " ";
    }
}
