#include <iostream>

int main(){
    double input = 1, min;
    int pos_count = 0;
    
    std::cin >> input;

    if (input >= 0) pos_count += 1;
    min = input;

    while(input != 0){
        std::cin >> input;
        if (input >= 0) pos_count += 1;
        if (min > input) min = input;
    }

    std::cout << pos_count << ' ' << min;
    return 0;
}