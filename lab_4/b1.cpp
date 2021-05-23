#include<iostream>
#include<vector>

std::vector<bool> Dup;

bool checkDuplicate(std::vector<int> ar){
   int len = ar.size();
   if (len == 1){
       // std::cout << "Len is now 1" << std::endl;
       return true;
   }

   int CheckVal = ar[0];

   for (int i = 1; i < len; i++){
       // std::cout << "Check value: " << CheckVal << std::endl;
       if (CheckVal == ar[i]) return false;
   }

   ar.erase(ar.begin());
   return checkDuplicate(ar);
}

int main(){
    int n;
    std::cin >> n;
    std::vector<int> ar(n);

    for(int i=0;i<n;i++)
        std::cin >> ar[i];
    
    std::cout << checkDuplicate(ar);
    return 0;
}