#include<iostream>
#include <vector>
using namespace std;


void setMatZ(vector<vector<int>> v){
    vector<vector<int>> v1 = v;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            if(v[i][j] == 0){
                fill(v1[i].begin(),v1[i].end(),0);
                for(auto &e:v1){
                    e[j] = 0;
                }
            }
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v1[i][j];
        }
        cout<<endl;
    }
 }
int main(){
    int n,m,val;
    cin>>n>>m;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<m;j++){
            cin>>val;
            temp.push_back(val);
        }
        v.push_back(temp);
    }
    setMatZ(v);
}
