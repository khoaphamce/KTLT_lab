#include <iostream>
#include <fstream>
#include <string>

void process(std::string FileName){
    std::ifstream InFile(FileName);
    int n, m;
    double max, x, total_max;

    InFile >> n >> m;

    // std::cout << "Row: " << n << std::endl;
    // std::cout << "Col: " << m << std::endl;

    if (n > 0){
        for (int i = 0; i < n; i++){
            InFile >> x;
            max = x;
            for (int j = 1; j < m; j++){
                InFile >> x;
                if (x > max) max = x;
            }
            if (i == 0) total_max = max;
            else if (max > total_max) total_max = max;
            std::cout << max << ' ';
        }
    }
    std::cout << total_max;
}

int main(){
    std::string FileName = "max_line_test.txt";
    process(FileName);
    return 0;
}