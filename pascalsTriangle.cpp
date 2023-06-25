#include<iostream>
#include<vector>
using namespace std;


vector<vector<int>> generate(int numRows) {
    vector<vector<int>> pt;
    vector<int> temp;
    temp.push_back(1);
    pt.push_back(temp);
    if(numRows == 1)return pt;
    temp.push_back(1);
    pt.push_back(temp);
    if(numRows == 2)return pt;

    for(int i=2;i<numRows;i++){
        vector<int> temp;
        temp.push_back(1);
        for(auto it = pt[i-1].begin();it!=pt[i-1].end()-1;it++){
            temp.push_back((*it)+*(it+1));
        }
        temp.push_back(1);
        pt.push_back(temp);
    }
    return pt;
}

int main(){
    vector<vector<int>> v = generate(10);
    for(auto it : v){
        for(int i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
