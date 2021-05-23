#include <iostream>
#include <math.h>

int PrimeCheck(int n){
	int flag = 1;

	if (n == 2) return 1;

	if (n == 1 || n <= 0) return -1;

	double lim = std::sqrt(n);

	for (int i = 2; i <= lim; i++){
		if (n % i == 0) return -1;
	}

	return flag;
}

int PrimeByNo(int no){
	if (no == 1) return 2;
	
	int ord = 1;
	int num = 3;

	while(ord < no){
		if(PrimeCheck(num) == 1) ord += 1;
		num += 1;
	}	
	return num - 1;
}

int main(){
	int n;
	std::cin >> n;

	if (PrimeCheck(n) == 1){
		std::cout << n << " is a prime number" << std::endl;
	}

	if (n > 0){
		std::cout << PrimeByNo(n);
	} 
	else{
		std::cout << -1;
	}

	return 0;
}
