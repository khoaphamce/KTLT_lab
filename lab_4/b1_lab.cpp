#include<iostream>
using namespace std;
int gcdRecursion(int p, int q)
{
    //TODO
    int max, min;
    int ReturnVal = 1;

    //std::cout << p << ' ' << q << std::endl;

    if (p >= q){
        max = p;
        min = q;
    }
    else{
        max = q;
        min = p;
    }

    if (min == 0) return ReturnVal = max;
    else ReturnVal = gcdRecursion(min, max % min);

    //std::cout << "ReturnVal: " << ReturnVal << std::endl;
    return ReturnVal;
}
int gcdIteration(int p, int q)
{
   //TODO
   int max, min;
   int ReturnVal = 1;
   
   if (p >= q){
       max = p;
       min = q;
   }
   else{
       max = q;
       min = p;
   }

   for (int i = min; i >= 1 && ReturnVal == 1; i--){
        if ((max % i == 0) && (min % i == 0))
            ReturnVal = i;
   }
   return ReturnVal;
}
int main()
{
    int p,q;
    cin>>p>>q;
    cout<<gcdRecursion(p,q)<< " "<<gcdIteration(p,q);
    return 0;
}
