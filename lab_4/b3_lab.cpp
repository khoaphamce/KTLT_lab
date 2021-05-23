#include<iostream>
#include<string>
using namespace std;
bool palindrome(string strg)
{
    int len, k, j;
    len = strg.length();
    k = len/2;
    j = 0;
    bool palin = true;
    while ( j < k && palin)
       if (strg[j] != strg[len -1-j])
         palin = false;
       else
         ++ j;
   return (palin);
}
bool palindromeRecursion(string s)
{
    //std::cout << "String now: " << s << std::endl;

    int len = s.length();
    bool ReturnVal = true;

    if (len <= 1) return true;

    if (s[0] == s[len-1]){
        s.erase(0, 1);
        s.erase(len-2, 1);
        ReturnVal = palindromeRecursion(s);
    } else ReturnVal = false;

    return ReturnVal;
}
int main()
{
    std::string s;
    std::cin >> s;

    while (s[0] != '*'){
        if (palindrome(s)) std::cout << "true" << ' ';
        else std::cout << "false" << ' ';

        if (palindromeRecursion(s)) std::cout << "true";
        else std::cout << "false";

        std::cin >> s;
        if (s[0] != '*')
            std::cout << endl;
    }
    // std::cout << palindrome(s) << ' ' << palindromeRecursion(s);
    return 0;
}


