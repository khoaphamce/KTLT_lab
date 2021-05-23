#include<iostream>

int fibonacci(int n)
{
    // std::cout << n << std::endl;

    if (n == 0) return 0;
    if (n == 1) return 1;

    //std::cout << "N-1: with n now = " << n << std::endl;
    //fibonacci(n-1);
    //std::cout << "N-2: with n now = " << n << std::endl;
    //fibonacci(n-2);

    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << fibonacci(n);
    return 0;
}