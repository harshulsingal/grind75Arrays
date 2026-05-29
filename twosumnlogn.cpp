class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>num;
        int n=nums.size();
        for(int i=0;i<n;i++){
            num.push_back({nums[i],i});
        }
        sort(num.begin(),num.end());
        
        int left=0;
        int right=n-1;
        while(left<=right){
            int sum=num[left].first+num[right].first;
            if(sum==target){
                return {num[left].second,num[right].second};
            } else if(sum<target){
                left++;
            }else{
                right--;
            }
        }
        return {};
    }
};
