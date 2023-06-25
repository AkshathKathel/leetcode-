#include<iostream>
#include<vector>
using namespace std;


void sortColors(vector<int>& nums) {
    int j=0,i=1,n=0;
    for(int i:nums){
        cout<<i;
    }
    while(j<(nums.size()-1)){
            cout<<"i"<<i;
        cout<<" j"<<j<<endl;
        if((nums[i]==n)&&(nums[j]!=n)){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
        else if(nums[j]==n) j++;
        if(i==nums.size()-1){
            i = j+1;
            n++;
        }
        else i++;

    }
    for(int i:nums){
        cout<<i;
    }
}
int main(){
    vector<int> nums = {0,0,0,2,1,2,1,0,0,2,2,1};
    sortColors(nums);
}
