#include <iostream>
#include <string>

int SubLen(std::string Input){
    int Len = Input.length();
    int MaxLen = 1, tempLen = 0;
    int startSub = 0, endSub = 0;
    for (int i = 0; i < Len-1; i++){
        int j = i;
        while(j < Len && Input[i] == Input[j]){
            startSub = i; 
            endSub = j;
            j++;
        }
        
        tempLen = (endSub - startSub + 1);
        if (tempLen > MaxLen && tempLen > 1) MaxLen = tempLen;
        
    }
    return MaxLen;
}

int main(){
    std::string Input;
    std::cin >> Input;
    std::cout << SubLen(Input);
    return 0;
}