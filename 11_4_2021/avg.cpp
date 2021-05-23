#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

int NumberOfNum (std::string num){
    int len = num.length();
    int count = 0, i = 0;
    while(num[i] != '.' && i < len){ 
        count += 1;
        i++;
    }
    return count;
}

void process (std::string fileName){
    std::ifstream myFile(fileName);
    std::string bruh;
    double TotalHeight = 0, TotalWeight = 0;
    int n;

    std::getline(myFile, bruh);
    n = int(bruh[0]) - int('0');
    
    while(std::getline(myFile, bruh)){
        int len = bruh.length();
        int ord = 0, i = 0;
        std::string Weight = "", Height = "";
        while(i < len){
            if (bruh[i] == ','){
                ord += 1;
            }
            
            if (ord == 3 && i < len){
                i++;
                if (bruh[i] != ','){
                    Height.push_back(bruh[i]);
                // std::cout << "Doing height addition " << std::endl;
                // std::cout << "Height now: " << Height << std::endl;
                } 
            } 
            else if (ord == 4 && i < len){
                i++;
                if (bruh[i] != ','){
                    Weight.push_back(bruh[i]);
                // std::cout << "Doing weight addition " << std::endl;
                // std::cout << "Weight now: " << Weight << std::endl;
                }
            }
            else i++; 
            
        }
        ord = 0;
        // std::cout << Height << std::endl;
        // std::cout << Weight << std::endl;
        TotalWeight += std::stod(Weight);
        TotalHeight += std::stod(Height);
    }
    // std::cout << "Total weight: " << TotalWeight << std::endl;
    // std::cout << "Total height: " << TotalHeight << std::endl;
    std::cout << TotalHeight/n << ' ';
    std::cout << TotalWeight/n;
    //std::cout << TotalHeight/n << ' ' << TotalWeight/n;
}

int main(){
    process("avg.txt");
    return 0;
}