class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>map;
        for(int i=0;i<nums.size();i++){
           map[nums[i]]++;
        }
        n=n/2;
        for(auto it:map){
            if(it.second>n){
                return it.first;

            }
        }
return 0;
        
    }
};