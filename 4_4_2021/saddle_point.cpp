#include <iostream>

bool CheckMax(int num, int* a, int len){
    //std::cout << std::endl << "Checking max of number " << num << " with" << std::endl;
    for (int i = 0; i < len; i++){
        //std::cout << a[i] << "     ";
        if (a[i] > num) return false;
    }
    return true;
}

bool CheckMin(int num, int* a, int len){
    //std::cout << std::endl << "Checking min of number " << num << " with" << std::endl;
    for (int i = 0; i < len; i++){
        //std::cout << a[i] << "     ";
        if (a[i] < num) return false;
    }
    return true;
}

// void Print2D(int a[][1000], int row, int col){
//     //std::cout << std::endl;
//     for (int i = 0; i < row; i++){
//         for (int j = 0; j < col; j++){
//             //std::cout << a[i][j];
//         }
//         //std::cout << std::endl;
//     }
// }

int main(){
    int arr [1000][1000];
    int col_val [1000][1000];
    int row, col;

    std::cin >> row;
    std::cin >> col;
    //std::cout << "Row, col: " << row << ", " << col << std::endl;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cin >> arr[i][j];
            col_val[j][i] = arr[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if (CheckMin(arr[i][j], arr[i], row) == true && CheckMax(arr[i][j], col_val[j], col) == true){
                std::cout << arr[i][j];
                return 0;
            }
        }
    }

    std::cout << -1;

    return 0;
}