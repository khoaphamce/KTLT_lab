#include <iostream>

int gcd(int a, int b){
    int ReturnValue = -1;
    int min, max;

    if (a == b){
        if (a == 1 || b == 1) ReturnValue = 1;
        else ReturnValue = -1;
        return ReturnValue;
    } 
    else{
        if (a == 1 || b == 1){
            ReturnValue = 1;
            return ReturnValue;
        }

        if (a > b) { max = a; min = b; }
        else { max = b; min = a; }

        for (int i = 2; i <= min; i++){
            if ((max % i == 0) && (min % i == 0)){
                ReturnValue = -1;
                return ReturnValue;
            }
            
        }

        ReturnValue = 1;
        return ReturnValue;
    }

    return ReturnValue;
}

int main(){
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b);
    return 0;
}