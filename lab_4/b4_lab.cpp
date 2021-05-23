#include<iostream>
#include<vector>

void MakePerm(std::vector<int>ar ,int head, int last, int &MinGoodness){
    if (head == last){
        int len = ar.size();
        int sum = 0;
        for (int i = 0; i < len-1; i++){
            sum += std::abs(ar[i] - ar[i+1]);
            //std::cout << ar[i] << ' ';
        }
        //std::cout << ar[len-1] << std::endl;
        if (sum < MinGoodness) MinGoodness = sum;
    } else{
        for(int i = head; i <= last; i++){
            std::swap(ar[i], ar[head]);
            MakePerm(ar, head+1, last, MinGoodness);
            std::swap(ar[i], ar[head]);
        }
    }
}

long long calcPermutation(std::vector<int>ar, int n)
{
    int MinGoodness = 0;
    for (int i = 0; i < n-1; i++) MinGoodness += std::abs(ar[i] - ar[i+1]);
    MakePerm(ar, 0, n-1, MinGoodness);
    return MinGoodness;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for(int i = 0; i < n; i++) std::cin >> arr[i];
    std::cout << calcPermutation(arr,n);
    return 0;
}
