class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        

int n=nums1.size();
int m=nums2.size();
// we are using merge sort for this to find median '
//first we sort by breaking and joining the array then find the median 
vector <int>merged;
for(int i=0;i<n;i++){
    merged.push_back(nums1[i]);

}
for(int i=0;i<m;i++){
    merged.push_back(nums2[i]);
}
sort(merged.begin(), merged.end());
//now from here the array is merge in one array  and this is completely a sorted array 
int t = merged.size();
if(t%2==1){
    return static_cast<double>(merged[t/2]); // this is for the oddd number of array element 

}
else{
    int middle1= merged[t/2-1];
    int middle2= merged[t/2];
    return (static_cast<double>(middle1)+static_cast<double>(middle2)) /2.0;

}



        
    }
};