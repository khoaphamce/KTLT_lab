#include <iostream>

// implement calculate factorial function in here
long factorial(int n){
    long product = 1;
    for (int i = 1; i <= n; i++) product *= i;
    return product;
}


int main(int narg, char** argv)
{
    int N;
    std::cin >> N;
    long result;
    result = factorial(N);
    std::cout << result << std::endl;
    return 0;
}