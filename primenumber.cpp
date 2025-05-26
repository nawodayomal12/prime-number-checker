#include <iostream>
using namespace std;


bool isPrime(int number) {
    if (number <= 1)
        return false; 
    if (number == 2)
        return true;  
    if (number % 2 == 0)
        return false; 

    
    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main() {
    int userInput;

    cout << "Enter a number: ";
    cin >> userInput;

    if (isPrime(userInput))
        cout << userInput << " is a prime number." << endl;
    else
        cout << userInput << " is not a prime number." << endl;

    return 0;
}
