class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left=0;
      int sum=0;
      int count=0;
      for(int i=0;i<arr.size();i++)
      {
        sum+=arr[i];
        if(i>=k-1)
        {
          int avg=sum/k;
          if(avg>=threshold)
           count++;
          sum=sum-arr[left];
          left++;
        }
      }
      return count;
        
    }
};