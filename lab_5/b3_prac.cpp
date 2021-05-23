#include<iostream>

int *createPointer(int& n)
{
   int *point = &n;
   return point;
}

int main()
{
    int n, b;
    std::cin >> n >> b;
    int *p = createPointer(n);
    std::cout << *p << std::endl;
    n+=b;
    std::cout << *p;
    return 0;
}