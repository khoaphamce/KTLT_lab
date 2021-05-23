#include <iostream>

int calcSum(int*ar, int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i) sum += ar[i];
    return sum;
}

int main()
{
    int n;
    std::cin >> n;
    int *ar= new int[n];
    for(int i = 0; i < n; i++) std::cin >> ar[i];
    std::cout<< calcSum(ar, n);
    delete[] ar;
    return 0;
}