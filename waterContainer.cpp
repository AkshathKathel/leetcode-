#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int maxArea(vector<int>& height) {
    int start = 0,last = height.size()-1,maxVolume=0;
    while(start<last){
        int volume = (last-start)*min(height[start],height[last]);
        if(height[start]<height[last]) start++;
        else last--;
        maxVolume = max(volume,maxVolume);
    }
    return maxVolume;
}

int main(){
    vector<int> h = {1,8,6,2,5,4,8,3,7};
    maxArea(h);
}
