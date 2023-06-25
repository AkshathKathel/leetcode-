#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;



int findMin(vector<int>& nums) {
    if(nums[0]<nums[nums.size()-1]) return nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]<nums[i-1])return nums[i];
    }
}

int main(){
    vector<int> nums = {11,13,15,17};
    cout<<findMin(nums);
}
