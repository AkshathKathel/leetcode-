#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int search(vector<int>& nums, int target) {
    int s = nums.size();
    if(nums[0]<nums[s-1]){
        int i=0;
        while(target>=nums[i]&&i<s){
            if(target==nums[i]){
                return i;
            }
            i++;
        }
        return -1;
    }
    else if(target>=nums[0]){
        int i=1;
        if(target == nums[0]) return 0;
        while(nums[i]>nums[i-1]){
            if(target==nums[i]) return i;
            i++;
        }
        return -1;
    }
    else if(target<=nums[s-1]){
        int i=s-1;
        while(nums[i]>nums[i-1]){
            if(target==nums[i]) return i;
            i--;
        }
        if(target==nums[i]) return i;
        return -1;
    }
}

int main(){
    vector<int> nums = {0,1,2,4,5,6,7};
    cout<<search(nums,9);
}
