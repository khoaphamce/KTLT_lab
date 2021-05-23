#include <iostream>
using namespace std;
int permutation(int n, int m)
{
    if (n == m || m == 0) return 1;
    if (0 < m && m < n){
        return permutation(n-1, m) + permutation(n-1, m-1);
    }
    return 1;
}
int main()
{
    int n, m;
    std::cin >> m >> n;
   cout << permutation(n,m);
   return 0;
}
