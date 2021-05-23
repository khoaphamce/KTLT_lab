#include <iostream>
#include <string>

std::string OrdCheck(std::string Input){
    int len = Input.length();
    for (int i = 1; i < len; i++){
        if (int(Input[i-1]) > int(Input[i])) return "false";
    }
    return "true";
}

int main(){
    std::string InStr[1000];
    int index = 0;
    InStr[index] = "";
    InStr[1] = "";

    while (InStr[index-1] != "***"){
        std::cin >> InStr[index];
        index++;
    }

    for (int i = 0; i < index-1; i++){
        std::cout << OrdCheck(InStr[i]);
        if (i < index-2) std::cout << std::endl;
    }

    return 0;  
}