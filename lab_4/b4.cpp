#include<iostream>

using namespace std;

void ArrDel(int * arr, int pos, int &n){
    for (int i = pos; i+1 < n; i++){
        arr[i] = arr[i + 1];
    }
}

int recursiveSearch(int& n , int m, int arr[], int index)
{
    if (index == n) return -1;
    if (m == arr[index]){
        int lim = m;
        int tempN = n;
        for (int i = 0; i < lim && i + m - 1 < tempN; i++)
        {
            // std::cout << "Doing delete at " << index << std::endl;
            ArrDel(arr, index, tempN);
            n--;
        }
        return index;
    }
    else return recursiveSearch(n, m, arr, index + 1);
}

int n,m;

int main()
{
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int res = recursiveSearch(n,m,arr,0);
    cout<<res<<endl;
    //if (res != -1)
        for(int i=0;i<n;i++) cout<< arr[i] <<" ";
    return 0;
}