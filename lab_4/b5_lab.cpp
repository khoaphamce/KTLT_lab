#include <iostream>

long long superPow(long long a, long long b)
{
    if (b == 0 || a == 1) return 1;
    if (b == 1) return a;
    if (b % 2 == 0) return (superPow(a, b-2) * a*a);
    else return (superPow(a, b-1) * a);
}


int main()
{
    long long a,b;
    std::cin >> a >> b;
    std::cout << superPow(a,b);
    return 0;
}