#include<iostream>
#include<vector>
using namespace std;


bool visited;
int area = 0,counter = 0;
int maxAreaOfIsland(int i,int j,vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    if(i<0||j<0)return;
    if(i>n||j>m)return;

    if(grid[i][j]==1) counter++;
    else if(grid[i][j]==0||visited[i][j]==true)return;

    maxAreaOfIsland(i-1,j);
    maxAreaOfIsland(i+1,j);
    maxAreaOfIsland(i,j-1);
    maxAreaOfIsland(i,j+1);
}
int main(){

}
