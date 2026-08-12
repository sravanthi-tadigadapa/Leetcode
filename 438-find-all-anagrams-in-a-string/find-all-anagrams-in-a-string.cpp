class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>freq,mp;
        int k=p.size();
        for(int i=0;i<k;i++)
        {
            freq[p[i]]++;
        }
       vector<int>ans;
       int left=0;
       for(int i=0;i<s.size();i++)
       {
         mp[s[i]]++;
         if(i>=k-1)
         {
            if(freq==mp)
             ans.push_back(left);
            mp[s[left]]--;
            if(mp[s[left]]==0)
             mp.erase(s[left]);
            left++;
         }
       }
        return ans;
    }
};