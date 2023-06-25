#include<iostream>
#include<vector>
using namespace std;


int MaxProfit(vector<int>& prices){
    int minPrice = INT_MAX ,maxProfit = 0;
    for(int i:prices){
        if(i<minPrice){
            minPrice = i;
        }
        if((i-minPrice>maxProfit)){
            maxProfit = i - minPrice;
        }
    }
    return maxProfit;
}
int main(){
    vector<int> v = {7,1,5,3,6,4};
    cout<<MaxProfit(v);
}
