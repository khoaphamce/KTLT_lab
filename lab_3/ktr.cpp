#include <iostream>
using namespace std;

bool primeNum(int N) {
    // TODO
    if (N == 2) return true;
    if (N == 1) return false;
    if (N == 0) return false;

    bool flag = true;

    for (int i = 2; i < N && flag == true; i++){
        if (N % i == 0) flag = false;
    }

    return flag;
}

int main() {
    int n;
    std::cin >> n;
    int *arr = new int [n];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
        if (primeNum(arr[i]) == true) std::cout << arr[i] << std::endl;
    }
    return 0;
}