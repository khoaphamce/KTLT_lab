#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>    

int main(){
    std::ofstream FileOut("count_char.txt");
    int n = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++){
        int res = rand() % (90 - 27 + 1) + 27;
        FileOut << char(res);
    }
    return 0;
}