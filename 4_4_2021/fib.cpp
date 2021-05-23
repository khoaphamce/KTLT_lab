#include <iostream>

int main(){
    int n, sum_1 = 0, sum_2 = 1;
    
    std::cin >> n;

    if (n == 1){
        std::cout << sum_1;
        return 0;
    }

    if (n == 2){
        std::cout << sum_1 << ' ' << sum_2;
        return 0;
    }

    std::cout << sum_1 << ' ' << sum_2;

    for (int i = 3; i <= n; i++){
        std::cout << ' ';
        int temp = sum_2;
        sum_2 = sum_1 + sum_2;
        std::cout << sum_2;
        sum_1 = temp;
    }

    return 0;
}