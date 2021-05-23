#include <iostream>

void sum2(int * array, int numEls, int &result)
{
    result = 0;
    for (int i = 0; i < numEls; i++) result += array[i];
}

int main(){
    int n;
    int res;
    int *vals = new int[100];
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> vals[i];
    }
    sum2(vals, n, res);
    std::cout << res;
    return 0;
}