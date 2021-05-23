#include<iostream>
using namespace std;
void transposeMatrix(int** ar, int n)
{
   for (int i = 0; i < n; i++){
       for (int j = 0; j < n; j++) if (i > j) std::swap(ar[i][j], ar[j][i]);
   }
}
int main()
{
    int n;
    cin>>n;
    int **ar= new int*[n];
    for(int i=0;i<n;i++) ar[i] = new int[n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) cin>>ar[i][j];
    transposeMatrix(ar,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) cout<<ar[i][j]<<" ";
        cout<<endl;
    }
    for(int i=0;i<n;i++) delete[] ar[i];
    delete[] ar;
    return 0;
}