#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string,vector<string>> m;
    vector<vector<string>> v;
    for(string s:strs){
        string a = s;
        sort(a.begin(),a.end());
        m[a].push_back(s);
    }
    for(auto p:m){
        v.push_back(p.second);
    }
    return v;
}

int main(){
    vector<string> strs={"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> vs;
    vs = groupAnagrams(strs);
    for(auto a:vs){
        for(string s:a){
            cout<<s;
        }
        cout<<endl;
    }
}
