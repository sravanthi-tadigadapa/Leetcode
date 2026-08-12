class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0,left=0;
        unordered_set<char>sr;
        for(int i=0;i<s.size();i++)
        {
            while(sr.count(s[i]))
            {
             sr.erase(s[left]);
             left++;
            }
            sr.insert(s[i]);
            maxi=max(maxi,i-left+1);
        }
        return maxi;
    }
};