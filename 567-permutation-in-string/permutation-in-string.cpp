class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();
        unordered_map<char,int>freq,mp;
        for(int i=0;i<k;i++)
        {
            freq[s1[i]]++;
        }
        int left=0;
        for(int i=0;i<s2.size();i++)
        {
            mp[s2[i]]++;
            if(i>=k-1)
            {
                if(freq==mp)
                 return true;
                mp[s2[left]]--;
                if(mp[s2[left]]==0)
                 mp.erase(s2[left]);
                left++;
            }
        }
        return false;
    }
};