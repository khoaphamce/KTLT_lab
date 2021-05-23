#include <iostream>
#include <string>

void StrCopy(std::string Input, char* Output){
    int LenIn = Input.length();
    for (int i = 0; i < LenIn; i++) Output[i] = Input[i];
}

int FindMax(int& a, int& b){
    if (a > b) return a;
    else return b;
}

int ConcatCheck(std::string* str1, int& n, std::string* str2, int& m){
    std::string Input1 = "", Input2 = "";
    char Max[1024], Min[1024];
    int len1 = 0, len2 = 0, MaxLen, MinLen;
    for (int i = 0; i < n; i++){
        Input1.append(str1[i]);
    }
    //std::cout << "Input 1: " << Input1 << std::endl;
    for (int i = 0; i < m; i++){
        Input2.append(str2[i]);
    }
    //std::cout << "Input 2: " << Input2 << std::endl;
    len1 = Input1.length();
    len2 = Input2.length();
    MaxLen = FindMax(len1, len2);
    if (MaxLen == len1){
        StrCopy(Input1, Max);
        StrCopy(Input2, Min);
        MinLen = Input2.length();
    }
    else{
        StrCopy(Input1, Min);
        StrCopy(Input2, Max);
        MinLen = Input1.length();
    }
    // std::cout << "Max[0]: " << Max[0] << std::endl;
    // std::cout << "Min[0]: " << Min[0] << std::endl;
    int flag = 1;
    for (int i = 0; i < MaxLen && flag == 1; i++){
        if (i < MinLen){
            if (int(Max[i]) != int(Min[i])){
                flag = -1;
                //std::cout << "Found not equal at: " << Max[i] << " and " << Min[i] << std::endl;
            }
            //std::cout << "Flag now: " << flag << std::endl;
        }
        else{
            flag = -1;
        }
    }
    return flag;
}

int main(){
    int n, m;
    std::string str1[1024], str2[1024];
    std::cin >> n >> m;
    
    for (int i = 0; i < n; i++){
        std::cin >> str1[i];
    }

    for (int i = 0; i < n; i++){
        std::cin >> str2[i];
    }

    int check = ConcatCheck(str1, n, str2, m);

    if (check == 1){
        std::cout << "true";
    } 
    else std::cout << "false";

    return 0;
}