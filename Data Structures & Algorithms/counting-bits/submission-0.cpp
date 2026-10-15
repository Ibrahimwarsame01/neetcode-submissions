class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output (n + 1);
        if( n == 0){
            output[0] = 0;
            return output;
        }
        if(n < 0){
            return {};
        }
        output[0] = 0;
        for(int i = 1; i < output.size(); i++){
            output[i] = output[i>>1] + (i & 1);
        }
        return output;

    }
};
