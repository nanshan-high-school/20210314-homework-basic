#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int sort[5];
    int place;

    for (int i = 0; i < 5; i++) {
        sort[i] = rand() % 100;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i; j > 0; j--) {
            if (sort[j] < sort[j - 1]) {
                place = sort[j];
                sort[j] = sort[j - 1];
                sort[j - 1] = place;
            }
        }
    }
    
    for (int i = 0; i < 5; i++) {
        cout << sort[i] << " ";
    }  
}
