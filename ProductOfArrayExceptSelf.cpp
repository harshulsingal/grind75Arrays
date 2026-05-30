class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int product2=1;
        int zc=0;
        vector<int> ans;
        for(int n:nums){
            product*=n;
            if(n!=0){
                product2*=n;
            }else{
                zc++;
            }
        }
        for(int n:nums){
            if(n==0&&zc==1){
                ans.push_back(product2);
            }else if(n==0){
                ans.push_back(0);
            }
            else{
                ans.push_back(product/n);
            }

        }
        return ans;
    }
};
