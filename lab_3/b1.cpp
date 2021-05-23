#include <iostream>

bool completeNum(int N){
    int sum = 0;
    for (int i = 1; i < N; i++){
        if (N % i == 0) sum += i;
    }
    if(N == sum) return true;
    else return false;
}

int main(){
    int n;
    std::cout << "Number: ";
    std::cin >> n;
    std::cout << completeNum(n);
    return 0;
}