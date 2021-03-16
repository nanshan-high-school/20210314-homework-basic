#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main() {
    vector<int> list;
    int temp;
    srand(time(0));
    do {
        temp = rand() % 100;
        list.push_back(temp);
    } while (temp > 0);
    list.pop_back();
    for (int i = 1; i < list.size(); i++) {
        for (int count = i; count > 0; count--) {
            if (list[count] < list[count - 1]) {
                temp = list[count];
                list[count] = list[count - 1];
                list[count - 1] = temp;
            } else {
                break;
            }
        }
    }
    for (int n : list) cout << n << ' ';
}
