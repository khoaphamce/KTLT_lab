#include <iostream>

void sortedSquares(int * nums, int size){
    // TODO
    for (int i = 0; i < size; i++){
        nums[i] = nums[i]*nums[i];
    }

    for (int i = 0; i < size-1; i++){
        for (int j = i+1; j < size; j++){
            if (nums[i] > nums[j]){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

int main(){
    int n;
    std::cout << "Array size: ";
    std::cin >> n;
    int *nums = new int [n];
    for (int i = 0; i < n; i++){
        std::cin >> nums[i];
    }
    sortedSquares(nums, n);
    for (int i = 0; i < n; i++){
        std::cout << nums[i] << "    ";
    }
    return 0;
}