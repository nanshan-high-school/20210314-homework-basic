#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int min;
    int min_num;
    int sort[5];

    for (int i = 0; i < 5; i++) {
        sort[i] = rand() % 100;
    }

    for (int i = 0; i < 5; i++) {
        min = sort[i];
        min_num = i;
        for (int j = i; j < 5; j++) {
            if (sort[j] < min) {
                min = sort[j];
                min_num = j;
            }
        }
        sort[min_num] = sort[i];
        sort[i] = min;
    }
    
    for (int i = 0; i < 5; i++) {
        cout << sort[i] << " ";
    }
}
