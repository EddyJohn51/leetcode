#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        //approach 1: loop through using iterators, call erase() on any occurance of val
        //O(n)

        for(vector<int>::iterator it = nums.begin(); it != nums.end();)
        {
            if(*it == val)
            {
                nums.erase(it);
            }else
            {
                ++it;
            }
        }

        return nums.size();
    }
};