class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> stak;
        for(const string op : operations){
            if(op != "+" && op != "D" && op != "C"){
                stak.push(stoi(op));
            }

            else if(op == "C"){
                stak.pop();
            }

            else if(op == "D"){
                stak.push(2 * stak.top());
            }

            else if(op == "+"){
                int top1 = stak.top(); 
                stak.pop();           
                
                int top2 = stak.top(); 
            
                stak.push(top1);
                stak.push(top1 + top2);
            }
        }
        
        int sum = 0;
        while (!stak.empty()) {
            sum += stak.top();
            stak.pop();
        }

        return sum;
    }
};