/*Write an algorithm to determine if a number n is round number.
A round number is a number defined by the following process:
Starting with any positive integer , replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or its loop endlessly in the cycle
which does not include 1.
Those numbers for which this process ends 1 are happy.
Return true if n is a happy number, and false if not .
Input: n = 19
Output: True
Explanation: 1^2 + 9^2 = 82  8^2 + 2^2 = 68  6^2 + 8^2 = 100  1^2 + 0^2 + 0^2 = 1
*/
#include <iostream>
#include <unordered_set>

using namespace std;

// Function to calculate the sum of squares of digits
int sumOfSquaresOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    unordered_set<int> seen;
    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);
        n = sumOfSquaresOfDigits(n);
    }
    return n == 1;
}

int main() {
    int n = 23;
    if (isHappy(n)) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }
    return 0;
}
