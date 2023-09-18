//moves zeroes to end of the array

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //using two pointers approach
        int i=0;
        for(int j=i;j<nums.size();j++){
            if(nums[j]!=0){
            swap(nums[j],nums[i]);
            i++;
            }
        }
        
    }
};