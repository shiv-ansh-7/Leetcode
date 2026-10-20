class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                pos.push_back(nums[i]);
            } else {
                neg.push_back(nums[i]);
            }
        }

        vector<int> ans(nums.size());

        for (int i = 0; i < pos.size(); i++) {
            ans[2 * i] = pos[i];
            ans[2 * i + 1] = neg[i];
        }

        return ans;
    }
};/*
 we have to arrange the number like that if the given array is given as [3,1,-2,-5,2,-4]
 we have to arrange in an alternate manner like one positive and one is ngeative  and we use brute for we make to array like first one is for psoitive and second one is for negative and and now arrange it accordinaly '
 now in arranging the psotive are at even palce and negative are at odd place arr[2*i] for positive and for negative we use arr[2*i+1]  









*/