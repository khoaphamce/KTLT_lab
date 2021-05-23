#include <iostream>

int main(){
    int a, n, result = 1;

    std::cin >> a;
    std::cin >> n;
    result = a;

    if (n == 0){
        result = 1;
    } 
    else {
        for (int i = 2; i <= n; i++){
            result *= a;
        }
    }

    std::cout << result;
    return 0;
}