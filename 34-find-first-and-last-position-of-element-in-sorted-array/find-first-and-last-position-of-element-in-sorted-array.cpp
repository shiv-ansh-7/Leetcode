
/*class Solution{
public:
    vector<int> searchRange(vector<int> &arr, int target) {
         int first = -1, last = -1;      
       for(int i =0;i<(int)arr.size();i++){
        if(arr[i]==target){
        if (first == -1) first = i;    
                last = i;  

        }
       }
       return {first,last};

    }
}; 

test case passed but time complexity is the problem  
class solution {
public :
      int firstOccurence (vector<int> &arr, int n, int k){
          int low= 0 , high= n-1;
         int first= -1;
         while(low<high){
            int mid =(low+high)/2;
            if (arr[mid]==k){
                first =mid;
                high =mid -1;

            }
            else if(arr[mid]<k) low = mid +1;
            else high = mid -1;
         }
       return first;  
    }

  int lastOccurence (vector<int> &arr, int n, int k){
          int low= 0 , high= n-1;
         int last= -1;
         while(low<high){
            int mid =(low+high)/2;
            if (arr[mid]==k){
                last =mid;
                low =mid +1;
               }
            else if(arr[mid]<k) low = mid +1;
            else high = mid -1;
         }
       return last;

    }
    public:
    pair <int ,int> firstAndLastPositive(vector<int>&arr,int n,int k){
        int first = firstOccurence(arr,n,k);
        if (first ==-1) return {-1,-1};
        int last = lastOccurence(arr,n,k);
        return {first ,last };
}


class Solution {
    int firstOccurence(vector<int> &arr, int n, int k) {
        int low = 0, high = n - 1;
        int first = -1;
        while (low <= high) {              // was low < high
            int mid = low + (high - low) / 2;
            if (arr[mid] == k) {
                first = mid;
                high = mid - 1;
            }
            else if (arr[mid] < k) low = mid + 1;
            else high = mid - 1;
        }
        return first;
    }

    int lastOccurence(vector<int> &arr, int n, int k) {
        int low = 0, high = n - 1;
        int last = -1;
        while (low <= high) {              // was low < high
            int mid = low + (high - low) / 2;
            if (arr[mid] == k) {
                last = mid;
                low = mid + 1;
            }
            else if (arr[mid] < k) low = mid + 1;
            else high = mid - 1;
        }
        return last;
    }

public:
    pair<int, int> firstAndLastPositive(vector<int> &arr, int n, int k) {
        int first = firstOccurence(arr, n, k);
        if (first == -1) return {-1, -1};
        int last = lastOccurence(arr, n, k);
        return {first, last};
    }
};*/

class Solution {
    int firstOccurence(vector<int> &arr, int n, int k) {
        int low = 0, high = n - 1;
        int first = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == k) {
                first = mid;
                high = mid - 1;
            }
            else if (arr[mid] < k) low = mid + 1;
            else high = mid - 1;
        }
        return first;
    }

    int lastOccurence(vector<int> &arr, int n, int k) {
        int low = 0, high = n - 1;
        int last = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == k) {
                last = mid;
                low = mid + 1;
            }
            else if (arr[mid] < k) low = mid + 1;
            else high = mid - 1;
        }
        return last;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = firstOccurence(nums, n, target);
        if (first == -1) return {-1, -1};
        int last = lastOccurence(nums, n, target);
        return {first, last};
    }
};


















