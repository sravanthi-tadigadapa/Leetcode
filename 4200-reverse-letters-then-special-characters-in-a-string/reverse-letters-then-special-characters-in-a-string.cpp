class Solution {
public:
    string reverseByType(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(!isalpha(s[i]))
             i++;
            else if(!isalpha(s[j]))
             j--;
            else
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
            int l=0;
            int r=s.size()-1;
            while(l<r)
            {
                if(s[l] >= 'a' && s[l] <= 'z')
                 l++;
                else if(s[r] >= 'a' && s[r] <= 'z')
                {
                 r--;
                }
                else
                {
                    swap(s[l],s[r]);
                     l++;
                     r--;
                }
            }
         return s;
    }
};