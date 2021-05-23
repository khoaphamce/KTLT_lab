#include <iostream>

int Max(int a, int b){
    if (a >= b) return a;
    else return b;
}

int MaxSub(int* arr, int length){
    int sum = arr[0], MaxSum = arr[0];
    for (int i = 1; i < length; i++){
        // std::cout << "Compare " << arr[i] << " and " << sum + arr[i] << std:: endl;
        sum = Max(arr[i], sum + arr[i]);
        // std::cout << "Choose " << sum << std::endl;
        // std::cout << "Compare " << sum << " and " << MaxSum << std::endl;
        MaxSum = Max(MaxSum, sum);
        // std::cout << "Choose " << MaxSum << std::endl;
    }
    return MaxSum;
}

int main(){
    int n;
    std::cin >> n;
    int a[10000];
    for (int i = 0; i < n; i++) std::cin >> a[i];
    std::cout << MaxSub(a, n);
    return 0;
}