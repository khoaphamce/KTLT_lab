#include<iostream>

int findMax(int*ar, int n)
{
    int max = ar[0];
    for (int i = 0; i < n; i++) if (max < ar[i]) max = ar[i];
    return max;
}

int main()
{
    int n;
    std::cin >> n;
    int *ar= new int[n];
    for(int i = 0; i < n; i++) std::cin >> ar[i];
    std::cout<< findMax(ar, n);
    delete[] ar;
    return 0;
}