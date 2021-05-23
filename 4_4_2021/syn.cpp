#include <iostream>
#include <string>

int main(){
    int n_temp, n;
    std::string str_num, str_inv;

    std::cin >> n_temp;
    n = abs(n_temp);
    str_num = std::to_string(n);

    int len = str_num.length();
    for (int i = len-1; i >= 0; i--){
        str_inv[len - 1 - i] = str_num[i];
    }

    for (int i = 0; i < len; i++){
        if (str_num[i] != str_inv[i]){
            std::cout << -1;
            return 0;
        }
    }

    std::cout << 1;

    return 0;
}