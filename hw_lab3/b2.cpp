#include <iostream>

int findMax(int *vals, int numEls) {
    int max = vals[0];
    for(int i = 1; i < numEls; i++){
        if (vals[i] > max) max = vals[i];
    }
    return max;
}

int main(){
    int n;
    int *vals = new int[100];
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> vals[i];
    }
    std::cout << findMax(vals, n);
    return 0;
}