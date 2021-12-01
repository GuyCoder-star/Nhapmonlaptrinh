/* nhập n. In ra n số đầu tiên trong dãy Fibonacci */
#include <iostream>
#include <vector>

using namespace std;

void input();
void output();

int n;
vector<int> arr = {1, 1};

int main() {
    input();
    for (int i = 2; i < n; i++) {
        int temp;
        temp = arr[i-1] + arr[i-2];
        arr.push_back(temp);
    }
    output();
}
void input() {
    cin >> n;
}

void output() {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}