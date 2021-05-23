#include <iostream>

int** readArray()
{
    int n = 10;
    int m = 10;
    int **arr = new int* [n];
    for (int i = 0; i < m; i++) arr[i] = new int [m];
    int j = 0;

    for (int i = 0; i < n; ++i){
        // std::cout << "Now at i = " << i << std::endl;
        j = 0;
        while (j < m){
            std::cin >> arr[i][j];
            // std::cout << "assigned to " << i << ' ' << j << std::endl;
            if (arr[i][j] == 0 && j < m-1){
                ++j;
                while (j < m){
                    arr[i][j] = 0;
                    ++j;
                }
            } else ++j;
        }
    }

    return arr;
}

int main()
{
    int** ar = readArray();
    for(int i=0;i<10;i++)
    {
        for(int j = 0; j < 10; j++) std::cout << ar[i][j] << " ";
        std::cout << std::endl;
    }
    for(int i = 0; i < 10; i++) delete[] ar[i];
    delete[] ar;
    return 0;
}

