#include<iostream>

int * getValueAtIndex(int * arr, int n, int k)
{
   if (k > n-1 || k < 0) return NULL;
   else {
       int *p = &arr[k];
       return p;
   }
}

int main()
{
    int n;
    std::cin >> n;
    int *ar = new int[n];
    for(int i = 0; i < n; i++)std:: cin>>ar[i];
    int k;
    std::cin >> k;
    int *p = getValueAtIndex(ar,n,k);
    if(p == NULL) std::cout << "NULL pointer";
    else std::cout << *p;
    delete[] ar;
    return 0;
}