class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start=0;
        int end=heights.size()-1;
        int ans=0;
        while(start<end){
            int s=min(heights[start],heights[end]);
            ans=max(ans,s*(end-start));
            if(heights[start]<heights[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return ans;
    }
};
