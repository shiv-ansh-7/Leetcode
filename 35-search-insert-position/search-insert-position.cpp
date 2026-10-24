 /*
 int low = 0;
 int high = (int )nums.size()-1;
 int answer = (int )nums.size()


 while(low<=high ){
 int mid = (low + high )/2;

 if(nums[mid]>=x){
  //answer ko temprory bana diya if the condition is true aur high =mid-1 ka use
 karke hum right side search kaenge answer = mid; high = mid - 1; } else {
                //agar condition false hui to hum else ki condition ko check
 karnage low = mid + 1;
             }
       }
       return answer;
 }
 }*/
 class Solution {
public:
    int searchInsert(vector<int> &nums, int x)  {
    
  int low =0, high =nums.size();
  while(low<high){
   int mid = (low + high)/2;
    if(nums[mid]<x) low =mid+1;
else high = mid;


  }
  return low ;



    }
};
