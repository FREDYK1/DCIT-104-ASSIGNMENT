#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    // 2 is the only even prime number.
    if (num == 2) {
        return true;
    }
    // Apart from 2 all even numbers are not prime numbers.
    if (num % 2 == 0) {
        return false;
    }
    //Check all odd numbers and see if it is a prime.
    for 5(int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int sum = 0;

    // Iterate through numbers from 1 to 100
    for (int i = 1; i <= 100; ++i) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    //Output the sum of the function.
    cout << "The sum of all prime numbers between 1 and 100 is: " << sum <<endl;

    return 0;
}
