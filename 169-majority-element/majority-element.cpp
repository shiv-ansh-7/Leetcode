
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt =0;
        int el;
        //for picking the no 
        for (int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                el = nums[i];
                
            }//if the number is same as we taken first 
            else if(nums[i]==el){
                cnt++;
            }
            else{
                //the number we have taken for the match is not matchig            
                cnt -- ;
                
            }
        }
        int cnt1=0;
    //    for the cheking the condition >n/2
        
       for (int i= 0;i<nums.size();i++){
           if(nums[i]==el) cnt1++;
           
       } 
        if(cnt1>(nums.size()/2)){
            return el;
        }
        return -1;
    }
};
/* for the majority of the element the cocept is  >n/2 times in a array 
like in an array [2,2,3,3,1,2,2]
the majority element are said which is >n/2 in an array 
in brute force we do a traversal and the aim is count the no which is come more the n/2 times in array  in traversal we check compare the no like a[i]== a[j]
the time complacticity is go to O(n^2) 
so we go to optimal solution 
we use mover's voting algo in which it compare the first number with other and make a count if the no is not same it decrease the count . and when the count become zero we start with the next number in the array after getting the number we traverse the array and chcek the same for the no it is  correct or not */
