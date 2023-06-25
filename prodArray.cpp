#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> p,product;
    vector<int> s(nums.size());

    int pref = 1,suff = 1;
    int si = nums.size();
    for(int i=0;i<si;i++){
        pref = pref*nums[i];
        p.push_back(pref);
    }
    for(int i=si-1;i>=0;i--){
        suff = suff*nums[i];
        s[i] = suff;
    }
    for(int i=0;i<si;i++){
        if(i==0)product.push_back(s[i+1]);
        else if(i==si-1)product.push_back(p[i-1]);
        else product.push_back(p[i-1]*s[i+1]);
    }
    return product
}

int main(){
    vector<int> p = {1,2,3,4};
    productExceptSelf(p);
}
