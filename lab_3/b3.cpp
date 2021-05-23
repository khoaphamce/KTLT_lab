#include <iostream>
#include <string>

void printCan (int can) {
    // TODO
    std::string CanTable[10] = {"Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky"};
    std::cout << CanTable[can];
}

void printChi (int chi) {
	// TODO
	std::string ChiTable[12] = {"Ti", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui", "Than", "Dau", "Tuat", "Hoi"};
    std::cout << ChiTable[chi];
}

int calCan (int year) {
	// TODO
	return year % 10;
}

int calChi (int year) {
	// TODO
    int sum = 0;
	int div = year / 10;
    
    sum = sum + (div % 10)*10 + (year % 10);

    return sum % 12;
}

void calCanChi (int year) {
	// TODO

    int CanNum = calCan(year), ChiNum = calChi(year);

	printCan(CanNum);
    std::cout << ' ';
    printChi(ChiNum);
}

int main(){
    int year;
    std::cin >> year; 
    calCanChi(year);
    return 0;
}