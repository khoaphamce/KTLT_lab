#include <iostream>
#include <math.h>

int PrimeCheck(int n){
	int flag = 1;

	if (n == 2) return 1;

	if (n == 1 || n <= 0) return -1;

	double lim = n;

	for (int i = 2; i <= sqrt(lim); i++){
		if (n % i == 0) return -1;
	}

	return flag;
}

void prime_conv(int MainNum){
    int n = MainNum;
    int prime_num = 2;
    int arr[1000];
    int arr_ind = -1;
    // int PrimeConfirm = -1;

    while (n >= prime_num){
        // std::cout << "Prime now: " << prime_num << std::endl;
        while ((n >= prime_num) && (PrimeCheck(prime_num) == 1) && (n % prime_num == 0)){
            // std::cout << prime_num << " is a prime and valid" << std::endl;
            arr_ind += 1;
            arr[arr_ind] = prime_num;
            // std::cout << arr[arr_ind] << std::endl;
            n = n/prime_num;
            // std::cout << "n now: " << n << std::endl;
        }
        prime_num += 1;
    }
    // if (conv_flag == true){
    arr_ind += 1;
    arr[arr_ind] = n;

    int pow_count = 1;
    int i = 0;

    while(i < arr_ind){
        while (arr[i] == arr[i+1] && i < arr_ind-1){
            pow_count += 1;
            i++;
        }
        if (i < arr_ind && pow_count > 1){ 
            if (i-1 > 0) {
                std::cout << '*';
            }
            std::cout << arr[i-1] << '^' << pow_count;
            i++;
            pow_count = 1;
        } 
        else if (i < arr_ind && pow_count == 1){
            pow_count = 1;
            if (i > 0) std::cout << '*';
            std::cout << arr[i];
            i++;
        }
        pow_count = 1;
    }
    // }
    // else {
    //     std::cout << MainNum;
    // }

}

int main(){
    int n;
    std::cin >> n;
    prime_conv(n);
    return 0; 
}