// TO CHECK IF A NUMBER IS A PALINDROME 
// (ONLY VALID FOR A NUMBER, AND NOT A STRING OR ALPHABETS)
// (WITHOUT USING STRING)

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; 
    cout << "Enter the number: ";
    cin  >> n;

    long long rem , sum = 0; //THIS IS DONE SO THAT IN CASE IF A LARGE NUMBER IS INPUTTED,
    //THEN IT CAN HANDLE THE OPERATION LIKE * OR /, SO WE USE LONG LONG 

    int temp; // Temporary variable
    temp = n; // n ki value temporarily temp meh daal di 

    while(n > 0){
        rem = n % 10;
        sum = (sum * 10) + rem;
        n = n/10;
    }

    if(temp == sum){
        cout << "The number is a Palindrome";
    }
    else{
        cout<< " The number is not a Palindrome";
    }
    return 0;
}