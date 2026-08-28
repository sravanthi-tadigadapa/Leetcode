class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        freq[0]=1;
        int count=0,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(freq.find(sum-k)!=freq.end())
            {
                count=count+freq[sum-k];
            }
            freq[sum]=freq[sum]+1;
        }
        return count;
        
    }
};