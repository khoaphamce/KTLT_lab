#include <iostream>
#include <string>

int SubLen(std::string Input){
    int Len = Input.length();
    int MaxLen = 1, tempLen = 0;
    int startSub = 0, endSub = 0;
    for (int Start = 0; Start < Len-1; Start++){
        for (int End = Start+1; End < Len; End++){
            int Mark[256], Check[256];
            int MarkInd = 0;
            bool flag = true;
            for (int i = Start; i <= End && flag == true; i++){
                if (Check[int(Input[i])] != 666){
                    startSub = Start;
                    endSub = i;
                    Check[int(Input[i])] = 666;
                    Mark[MarkInd] = int(Input[i]);
                    MarkInd++;
                }
                else flag = false;
            }
            tempLen = (endSub - startSub + 1);
            if (tempLen > MaxLen && tempLen > 1) MaxLen = tempLen;

            for(int i = 0; i < MarkInd; i++){
                Check[Mark[i]] = -100;
                Mark[i] = 0;
            }
        
        }
        
    }
    return MaxLen;
}

int main(){
    std::string Input;
    std::cin >> Input;
    std::cout << SubLen(Input);
    return 0;
}