class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
     stack<int> s;
     vector<int> output(temperatures.size());
     for(int i = 0; i < temperatures.size(); i++){
        while((!s.empty()) && temperatures[i] > temperatures[s.top()]  ){
            int popped = s.top();
            s.pop();
            output[popped] = i - popped;

        }
        s.push(i);
     }
  
        
        return output;
    }
};
