#include <iostream>

int main(){
    int *arr = new int [3];
    int max, max_2;
    
    max_2 = -2147483648;
    max = -2147483647;

    for (int i = 0; i <= 2; i++){
        std::cout << "Element" << '[' << i << ']' << ": ";
        std::cin >> arr[i];
        if (arr[i] > max){
            max_2 = max;
            max = arr[i];
        } else if (arr[i] < max && arr[i] > max_2){
            max_2 = arr[i];
        }
    }
    std::cout << "Second max: " << max_2 << std::endl;
    return 0;
}