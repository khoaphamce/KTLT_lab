#include <iostream>

int main(){
    int inp = 0, sum = 0;

    std::cout << "Input number, input -1 if exit: ";
    
    while(inp != -1){
        std::cin >> inp;
        if (inp % 2 != 0) continue;
        sum += inp;
    }
    std::cout << std::endl << "Sum: " << sum << std::endl;
    return 0;
}