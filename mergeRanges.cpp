#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {

    int s = intervals.size();
    for(int i=1;i<s;i++){
//            cout<<intervals[i][0]<<intervals[i-1][1]<<endl;
        if(intervals[i][0]<intervals[i-1][1]){
            intervals[i-1][1] = intervals[i][1];
            auto it = find(intervals.begin(),intervals.end(),intervals[i]);
            intervals.erase(it);
        }
    }


    cout<<endl;
    cout<<"asdfadf"<<endl;
    for(int i = 0;i<s;i++){
        for(int j=0;j<2;j++){
            cout<<intervals[i][j];
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> v = {{1,3},{2,6},{8,10},{15,18}};
    merge(v);
}
