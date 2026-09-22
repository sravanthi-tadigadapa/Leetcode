class Solution {
public:
    string predictPartyVictory(string senate) {
        int n=senate.size();
        queue<int>r;
        queue<int>d;
        for(int i=0;i<n;i++)
        {
            if(senate[i]=='R')
             r.push(i);
            if(senate[i]=='D')
             d.push(i);
        }
        while(!r.empty() && !d.empty())
        {
            int ra=r.front();
            r.pop();
            int di=d.front();
            d.pop();
            if(ra<di)
            {
                r.push(ra+n);
            }
            else
             d.push(di+n);    
        }
        if(d.empty())
         return "Radiant";
        else
         return "Dire";
        
        
    }
};
