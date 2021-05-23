#include <iostream>
#include <string>

std::string StrCop(std::string Input, int Start, int End){
    std::string result = "";
    int ind = -1;
    for (int i = Start; i <= End; i++){
        ind += 1;
        result = result + Input[i];
        // std::cout << "Char to assign: " << Input[i] << std::endl;
        // std::cout << "Result now: " << result << std::endl << std::endl;
    }
    return result;
}

std::string LongestSyn(std::string InStr){
    int Len = InStr.length(), max = 0, count = 0;
    int startSub = 0, endSub = 0, temp_startSub = Len;
    std::string MaxSyn = "";
    bool flag = true;
    for (int start = 0; start < Len - 1; start++){
        for (int end = Len-1; end > start; end--){
            // std::cout << "Start: " << start << std::endl << "End: " << end << std::endl << std::endl;
            flag = true;
            int i = start, j = end;
            count = 0;
            bool flag_count = false;
            for (i = start, j = end; i < j; i++, j--){
                // std::cout << "String: " << InStr << std::endl;
                // std::cout << "i: " << i << std::endl << "j: " << j << std::endl << std::endl;
                if (InStr[i] != InStr[j]){
                //     std::cout << InStr[i] << " not equal " << InStr[j] << std::endl << std::endl;
                    flag = false;
                    break;
                }
                else if (i < j && flag_count == false){
                    flag_count = true;
                    count = j-i+1;
                    startSub = i;
                    endSub = j;
                //     std::cout << InStr[i] << " is equal to " << InStr[j] << std::endl << "Count now: " << count << std::endl << "Start now:" << startSub << std::endl << "End now: " << endSub << std::endl << std::endl;
                }
            }
            if (count == max && count >= 2 && flag == true){
                if (startSub < temp_startSub){
                    max = count;
                    MaxSyn = StrCop(InStr, startSub, endSub);
                    temp_startSub = startSub;
                }
            }
            else if (count > max && count >= 2 && flag == true){
                max = count;
                MaxSyn = StrCop(InStr, startSub, endSub);
                temp_startSub = startSub;
            }
                // std::cout << "Max now: " << max << std::endl;
                // std::cout << "MaxSyn now: " << MaxSyn << std::endl << std::endl;
        }
    }
    if (MaxSyn == "") MaxSyn = InStr[0];
    return MaxSyn;
}

int main(){
    std::string Input;
    std::cin >> Input;
    std::cout << LongestSyn(Input);
    return 0;
}