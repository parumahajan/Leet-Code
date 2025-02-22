#include <iostream>
using namespace std;
//TO SUBTRACT THE PRODUCT AND THE SUM OF DIGITS OF AN INTEGER
int main() {
    int n;
    cout << "Enter the integer: "; 
    cin >> n; 

    int sum = 0;
    int prod = 1;

    int digit, result;

        while (n > 0) {
            digit = n % 10; // Extract the last digit

            sum = sum + digit;
            prod = prod * digit;

            n = n / 10; // Remove the last digit
        }
        
    result = prod - sum;

    cout << "Result is: " << result << endl;
    return 0;
}

// --------------------------------------------
//* LEETCODE SOLUTION

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, prod = 1, result, digit;
        while (n > 0) {
            digit = n % 10;
            sum = sum + digit;
            prod = prod * digit;
            n = n / 10;
        }
        return prod - sum;
    }
};