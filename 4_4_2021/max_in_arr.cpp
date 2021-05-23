#include <iostream>
#include <iomanip>

int main(){
    int n;
    std::cin >> n;
    double a[10000];
    std::cin >> a[0];
    double max = a[0];
    for (int i = 1; i < n; i++){
        std::cin >> a[i];
        if (max < a[i]) max = a[i];
    }
    std::cout << std::fixed << std::setprecision(10) << max;
    return 0;
}