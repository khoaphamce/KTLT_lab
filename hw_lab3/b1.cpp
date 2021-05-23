#include <iostream>

int cube(int a){
    return a*a*a;
}

void cube2 (int &a){
    a = a*a*a;
}

void cube3 (int *a){
    *a = *(a)*(*a)*(*a);
}

int main(){
    int a;
    std::cin >> a;
    cube2(a);
    std::cout << a;
    return 0;
}