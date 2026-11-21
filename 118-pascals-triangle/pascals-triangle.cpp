
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
           vector<vector<int>> ans;
for(int i =1; i <= numRows;i++) {
        vector<int> row;
         long long result =1;
            int n = i -1;
            int k = i-1;

            for(int j = 0; j <= k; j++) {
 row.push_back(result);

            result = result * (n - j);
                result = result / (j + 1);
            }

            ans.push_back(row);
        }

        return ans;
    }
};
