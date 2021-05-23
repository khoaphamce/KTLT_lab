#include <iostream>

void Print2D(int a[][1000], int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            std::cout << a[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}


int main(){
    int col_val [1000][1000];
    int row, col;

    std::cin >> row;
    std::cin >> col;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cin >> col_val[j][i];
        }
    }

    Print2D(col_val, col, row);
    return 0;
}
