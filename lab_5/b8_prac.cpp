#include <iostream>
using namespace std;
void swap(int *p, int *q)
{
    //std::cout << p << ' ' << q << std::endl;
    int temp = *p;
    *p = *q;
    *q = temp;
    //std::cout << p << ' ' << q << std::endl;
}
int main()
{
    int *a= new int, *b= new int;
    cin>>*a>>*b;
    swap(a,b);
    cout<<*a<<" "<<*b;
    delete a;
    delete b;
    return 0;
}