#include<iostream>
#include<vector>
using namespace std;


vector<vector<int>> rotate(vector<vector<int>>& matrix) {
    vector<vector<int>> newMatrix;
    int s = matrix.size();
    cout<<s<<endl;
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            newMatrix[j][matrix.size()-1-i] = matrix[i][j];
        }
    }
            for(int i=0;i<s;i++){
                for(int j=0;j<s;j++){
                   cout<<newMatrix[i][j];
                }
                cout<<endl;
            }
}

int main(){
    vector<vector<int>> n , newMatrix = {{1,2,3},{4,5,6},{7,8,9}};
    n=rotate(newMatrix);
}
