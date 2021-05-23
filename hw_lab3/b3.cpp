#include <iostream>

int sum1(int array[], int numEls)
{
   int sum = 0;
    for(int i = 0; i < numEls; i++){
        sum += array[i];
    }
    return sum;
}

int main(){
    int n;
    int *vals = new int[100];
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> vals[i];
    }
    std::cout << sum1(vals, n);
    return 0;
}