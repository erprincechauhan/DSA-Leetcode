class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stak;

        for(auto op : s){
            if(stak.empty() || stak.top() != op){
                stak.push(op);
            }

            else if(stak.top() == op){
                stak.pop();
            }
        }

        string result;
        while(!stak.empty()){
            result += stak.top();
            stak.pop();
        }

        reverse(result.begin(),result.end());
        return result;
        
    }
};