class Solution {
public:
    string removeStars(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]!='*')
            st.push(s[i]);
           else
           {
            if(!st.empty() && s[i]=='*')
             st.pop();
           }
        }
        string t="";
        while(!st.empty())
        {
            t+=st.top();
            st.pop();
        }
        reverse(t.begin(),t.end());
        return t;
    }
};