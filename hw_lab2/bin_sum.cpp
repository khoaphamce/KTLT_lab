#include <iostream>
#include <string>

std::string MaxString(std::string a, std::string b){
    if (a.length() > b.length()) return a;
    else return b;
}

std::string MinString(std::string a, std::string b){
    if (a.length() > b.length()) return b;
    else return a;
}

std::string bin_add(std::string a, std::string b){
    while(a[0] == '0') a.erase(0, 1);
    while(b[0] == '0') b.erase(0 ,1);
    //     b.erase(0, 1);
    //     std::cout << "After remove 0: " << b << std::endl;
    // }
    // std::cout << "String b: " << b << std::endl;

    std::string max_temp = MaxString(a, b), min_temp = MinString(a, b);
    std::string max = max_temp, min = min_temp;
    int MaxLen = max_temp.length(), MinLen = min_temp.length();
    if(MaxLen == 0 && MinLen == 0) return "0";
    for (int i = 0; i < MaxLen; i++) max[MaxLen - 1 - i] = max_temp[i];
    // std::cout << "String max: " << max << std::endl;
    for (int i = 0; i < MinLen; i++) min[MinLen - 1 - i] = min_temp[i];
    // std::cout << "String min: " << min << std::endl;
    // std::cout << "Max len: " << MaxLen << std::endl;
    // std::cout << "Min len: " << MinLen << std::endl;
    std::string result = "";
    char carry = '0';
    char add_val = '0';

    for (int i = 0; i < MaxLen; i++){
        if (i < MinLen){
            if (max[i] == '0' && min[i] == '0'){
                if (carry == '0'){
                    add_val = '0';
                } 
                else{
                    add_val = '1';
                    carry = '0';
                }
            }
            else if ((max[i] == '1' && min[i] == '0') || (max[i] == '0' && min[i] == '1')){
                if (carry == '0'){
                    add_val = '1';
                } 
                else{
                    add_val = '0';
                    carry = '1';
                }
            }
            else if (max[i] == '1' && min[i] == '1'){
                if (carry == '0'){
                    add_val = '0';
                    carry = '1';
                } 
                else{
                    add_val = '1';
                    carry = '1';
                }
            }
            result = add_val + result;
            // std::cout << "Result now: " << result << std::endl;
            // std::cout << "Carry now: " << carry << std::endl;
        } 
        else{
            if (max[i] == '0' && carry == '0') add_val = '0';
            else if (max[i] == '0' && carry == '1'){
                add_val = '1';
                carry = '0';
            }
            else if (max[i] == '1' && carry == '0'){
                add_val = '1';
            }
            else if (max[i] == '1' && carry == '1'){
                add_val = '0';
                carry = '1';
            }
            result = add_val + result;
            // std::cout << "Result now: " << result << std::endl;
            // std::cout << "Carry now: " << carry << std::endl;
        }
    }
    if (carry == '1') result = '1' + result;
    return result;
}

int main(){
    std::string a, b;
    std::cin >> a;
    std::cin >> b;
    std::cout << bin_add(a, b);
    return 0;
}