#include <iostream>
#include <iomanip>
#include <math.h>

double func(int n){
    double sum = 0;

    if (n == 0) return 1;

    for (int i = 1; i <= n; i++){
        sum = sum - (std::pow(-1, i)/(i * (i+1)));
    }

    sum = 1 - sum;
    return sum;
}

double inf_func(){
    double sum = 1;
    double sum_temp = func(0), minus = 1, lim = std::pow(10, -6);

    int i = 1;

    while (minus >= lim){
        //std::cout << "Calculate " << i << std::endl;
        sum = func(i);
        minus = abs(sum_temp - sum);
        sum_temp = sum; 
        i += 1;
    }

    return func(i-2);

}

int main(){
    int n;
    double sum = 0;

    std::cin >> n;

    sum = func(n); 

    std::cout << std::fixed << std::setprecision(10) << inf_func() << std::endl;

    std::cout << sum << std::endl;

    return 0;
}