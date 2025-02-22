//* BRUTE FORCE TECHNIQUE TO FIND THE SINGLE NUMBER OUT OF REPEATED ELEMENTS
//? LOGIC: Count the number of times an elt is repeated, and print the elt with count = 1;

#include <bits/stdc++.h>
using namespace std;

int find_unique(int nums[], int size){

    for(int i=0; i < size; i++){
        int count = 0;

        for(int j=0; j < size; j++){

            if(nums[i] == nums[j]){
                count++;
            }
        }

            if(count == 1){
                return nums[i];
            }
    }
    return -1;
}

int main(){
    int nums[5] = {1,2,1,2,3};
    int size = sizeof(nums)/sizeof(nums[0]);

    int unique_no = find_unique(nums, size);

    cout << "The unique number is: " << unique_no;
    
    return 0;
}

//* --------------------------------------------------

//* TO FIND THE SINGLE UNIQUE NUMBER OUT OF ELEMENTS WHERE 2 ELEMENTS ARE REPEATED EACH TIME, EXCEPT FOR THAT SINGLE ELEMENT

//? LOGIC: TAKE XOR OF ALL THE NUMBERS PRESENT IN AN ARRAY (isse baaki saare elts cut jaenge, aur hmare paas sirf unique number hi bachega)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1,2,1,2,5}; 
    //out of these, each 2 elts will be same, except for just one
    //our task is to print that unique no which is not repeated

    int size = sizeof(arr)/sizeof(arr[0]);
    cout << size;

    int total_xor = 0;

    for(int i=0; i<size; i++){
        total_xor = total_xor ^ arr[i];
    }
    return 0;
}

//* --------------------------------------------------

//* TO FIND THE SINGLE UNIQUE NUMBER OUT OF ELEMENTS WHERE 3 ELEMENTS ARE REPEATED EACH TIME, EXCEPT FOR THAT SINGLE ELEMENT

