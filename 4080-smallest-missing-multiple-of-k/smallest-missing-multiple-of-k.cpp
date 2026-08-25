class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>ele(nums.begin(),nums.end());
         int x=k;
         while(ele.count(x))
         {
            x+=k;
         }
        return x;
    }
};