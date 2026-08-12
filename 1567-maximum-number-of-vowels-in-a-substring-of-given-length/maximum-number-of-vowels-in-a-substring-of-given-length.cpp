class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0,maxi=0;
        int left=0;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch=='a' || ch=='e' || ch=='i' ||ch=='o' || ch=='u')
             count++;
            if(i>=k-1)
            {
                maxi=max(maxi,count);
                if(s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o' || s[left]=='u')
                 count--;
                left++;

            }
        }
        return maxi;
        
    }
};