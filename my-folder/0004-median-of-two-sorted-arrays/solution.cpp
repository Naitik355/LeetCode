class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),back_inserter(v));
        int n=v.size();
        double a;
        if(n%2==0){
            a=((v[n/2-1]+v[n/2])/2.0);
        }
        else{
            a=v[n/2];
        }
        return a;
    }
};
