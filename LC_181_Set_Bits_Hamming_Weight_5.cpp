/*
QUESTION:
Write a function that takes the binary representation of a positive integer, and returns the number of set bits

DESCRIPTION:
Counting the number of 1's in the binary representation of a given integer n (also known as the Hamming Weight)
*/
//More runtime solution
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the positive number: ";
    cin >> n;
    cout << endl;

    int count = 0;

    while(n!= 0){

        if(n&1){
            count++;
        }

        n = n >> 1;
    }

    cout << count;
}

//Less Runtime solution
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the positive number: ";
    cin >> n;
    cout << endl;

    int count = 0;

    // Iterate until all bits are traversed
    while (n != 0) {

        // Increment count if the last bit is 1
        count = count + (n & 1);
            
        // Right shift n to check the next bit
        n = n >> 1;
    }
    cout << count;
    return 0;
}

//EXPLAINATION
//FIND NUMBER OF HAMMING BITS (No. of 1's present in the binary bit)
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << endl;

    int count; 
    // we will increment it whenever we get a 1, and at last we will print it
    // (which will show how many 1's are present in it)

    while(n!=0){
        if(n&1) { //jaise hi 1 hit hua, inc count
            count++;
        }
        // now if it is 1 or not, we will still Right Shift it, so that we can fetch the next number
        n = n >> 1;
    }

    cout << count;
    return 0;
}