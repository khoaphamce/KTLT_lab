#include <iostream>
#include <fstream>
#include <string>

void process(std::string fileName) {
    std::ifstream myFile(fileName);
    std::string bruh;
    int dem1 = 0, dem2 = 0, n = 0, line_count = 0;
    while(std::getline(myFile, bruh)){
        line_count++;
        int len = bruh.length();
        n += len;
        for (int i = 0; i < len; i++)
        if(bruh[i] == ' ') dem1++;
        else if((int(bruh[i]) >= 65 && int(bruh[i]) <= 90) || (int(bruh[i]) >= 97 && (bruh[i] <= 122))) dem2++;
    }
    myFile.close();
    std::cout << dem1 << ' ' << n + line_count - 1 << ' ' << dem2;
}

int main(){
    process("count_char.txt");
    return 0;
}