#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> m;
    vector<int> v;
    for(int i=0;i<nums.size();i++){
        int diff = target-nums[i];
        if(m[diff]==0){
            m[nums[i]] = i+1;
        }
        else{
            v.push_back(m[diff]-1);
            v.push_back(i);
            break;
        }
    }
    return v;

}
int main(){
    vector<int> v = {3,2,4};
    v = twoSum(v,6);
    for(int i:v){
        cout<<i;
    }
}
