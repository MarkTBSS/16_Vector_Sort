#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> markVector;
    markVector = {1, 6, 10, 8, 4};
    int size = markVector.size();
    cout << "Size : " << size << endl;

    // จัดเรียงตาม ascending order (น้อยไปมาก)
    sort(markVector.begin(), markVector.end());
    for (int value : markVector) {
        cout << value << " ";
    }

    return 0;
}