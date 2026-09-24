class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> staks;
        stack <char> stakt;

        for(auto op : s){
            if(op != '#'){
                staks.push(op);
            }

            else if(!staks.empty()){
                staks.pop();
            }
        }

        for(auto op :t){
            if(op != '#'){
                stakt.push(op);
            }

            else if(!stakt.empty()){
                stakt.pop();
            }
        }

        return staks == stakt;
        
    }
};