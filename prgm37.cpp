#include <iostream>

int main() {
    int i,num,sum = 0;

    
    std::cout << "Enter a number: ";
    std::cin >> num;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if (sum == num) {
        std::cout << num << " is a perfect number." << std::endl;
    }
     else 
     {
        std::cout << num << " is not a perfect number." << std::endl;
    }

    return 0;
}                                        