#include <bits/stdc++.h>
using namespace std;
int main(){
    int nums[5] = {1,2,3,4,5};
    int target = 3;
    int size = sizeof(nums)/sizeof(nums[0]);

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(nums[i] + nums[j] == target){
                cout << " [" << i << "," << j << "] ";
            }
        }
    }
    return 0;
}

//?----------------------------------------------------------
//* LEETCODE SOLUTION
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                    }
            }
        }
        return {};
    }
};