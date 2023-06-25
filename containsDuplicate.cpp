#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int,int> m;
    for(int i:nums){
        m[i]++;
    }
    for(auto p:m){
        if(p.second>1)return true;
        else return false;
    }
}
int main(){
    vector<int> v = {1,2,3,4};
    cout<<containsDuplicate(v);
}
