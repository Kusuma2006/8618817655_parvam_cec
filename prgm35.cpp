
#include <iostream>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int isSphenic(int num) {
    int factors[3], count = 0, divisorCount = 0;
    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            divisorCount += (i * i == num) ? 1 : 2;
        }
    }
    if (divisorCount != 8) return 0;
    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) { 

            
            int found = 0;
            for (int j = 0; j < count; j++) {
                if (factors[j] == i) found = 1;
            }
            if (!found && count < 3) factors[count++] = i;
            num /= i;
        }
    }
    if (num > 1) {
        int found = 0;
        for (int j = 0; j < count; j++) {
            if (factors[j] == num) found = 1;
        }
        if (!found && count < 3) factors[count++] = num;
    }
    if (count != 3) return 0;
    for (int i = 0; i < count; i++) {
        if (!isPrime(factors[i])) return 0;
    }
    return 1;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << num << " is " << (isSphenic(num) ? "" : "not ") << "a sphenic number." << std::endl;
    return 0;
}