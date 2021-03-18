#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> sI;
    int boxes;
    while (true) {
        cin >> boxes;
        if (boxes == 0) {
            break;
        }
        sI.push_back(boxes);
    }
    int temp = 0;
    int i;
    for (int j = 0; j < sI.size(); j++) {
        for (i = 0; i < sI.size() - 1; i++) {
            if (sI[i] > sI[i + 1]) {
            temp = sI[i];
            sI[i] = sI[i + 1];
            sI[i + 1] = temp;
            }
        } 
    }
    for (int i = 0; i < sI.size(); i++) {
        cout << sI[i];
    }
}