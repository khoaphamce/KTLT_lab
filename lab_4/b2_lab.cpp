#include<iostream>
#include<vector>

long long infinite2DArray(int x, int y)
{
    if (x == 0 && y == 0)
        return 0;
    if (x == 0 && y == 1)
        return 1;
    if (x == 1 && y == 0)
        return 1;
    if (x >= 2 && y == 0)
        return infinite2DArray(x-1, 0) + infinite2DArray(x-2, 0);
    if (x == 0 && y >= 2)
        return infinite2DArray(0, y-1) + infinite2DArray(0, y-2);
    if (x >= 1 && y >= 1)
        return infinite2DArray(x-1, y) + infinite2DArray(x, y-1);
    else
        return 0;
}

int main()
{
    int x,y;
    std::cin >> x >> y;
    std::cout << infinite2DArray(x,y);
    return 0;
}