class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]!="D" && operations[i]!="C" && operations[i]!="+")
            {
                st.push(stoi(operations[i]));
            }
            else if(operations[i]=="D")
            {
                int ans=st.top();
                st.push(2*ans);
            }
            else if(operations[i]=="C")
             st.pop();
            else if(operations[i]=="+")
            {
                int fi=st.top();
                st.pop();
                int se=st.top();
                st.push(fi);
                st.push(fi+se);
            }
        }
            int sum=0;
            while(!st.empty())
            {
                sum+=st.top();
                st.pop();
            }
        return sum;
    }
};