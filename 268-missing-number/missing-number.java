
public class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int ans = 0;
        // to check which number is missing from the input by using   xor^ it check like that the same no are give false 
        for (int i = 1; i <= n; i++) {
            ans = ans ^ i;
            //now in next for loop we give the missing no of all existing no in the input of taking xor of all the element exist in in the input like 1^2^3 this gives the missing number 
        }
        for (int i = 0; i < nums.length; i++) {
            ans = ans ^ nums[i];
        }
        return ans;
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna