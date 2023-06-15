#ifndef __TWOSUM__
#define __TWOSUM__

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:

    vector<int> twoSum(vector<int>& nums, int target) {


        /* My first thought is to have two nested loops that loop over the entire vector and check each pair of values until a match is found. Runs in O(n^2) time */
        for(int i = 0; i < nums.size(); ++i) {
            int cur = nums[i];
            for(int j = i + 1; j < nums.size(); ++j) {      // inner loop starts at one past the current position of the outer loop variable to check each pair of values
                int next = nums[j];
                if(cur + next == target) {                  // if the two values add to the target, return the indices of the two values
                vector<int> ans = {i, j};
                return ans;
            }
        }
    }
};

#endif