class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int left = 0;
        double currentSum = 0;
        double maxAvg = -10000000;

        for(int right = 0; right < nums.size(); right++)
        {
            currentSum += nums[right];

            if(right >= k - 1)
            {
                double cAvg = currentSum / k;

                maxAvg = max(cAvg, maxAvg);
                currentSum -= nums[left];
                left++;
            }
        }

        return maxAvg;
        

        
    }
};