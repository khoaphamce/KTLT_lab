#include<iostream>

int* readArray()
{
    int n;
    std::cin >> n;
    int *arr = new int [n+1];
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    arr[n] = -1;
    int *p = &arr[0];
    return p;
}

int main()
{
    int *p= readArray();
    int *q = p;
    while(*p !=-1) 
    {
        std::cout << *p << " ";
        p = p + 1;
    }
    delete[] q;
    return 0;
}
