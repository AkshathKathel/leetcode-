#include<iostream>
#include<unordered_map>

using namespace std;


bool isAnagram(string s, string t) {
    unordered_map<char,int> m;
    for(char a:s){
        m[a]++;
    }
    for(char a:t){
        m[a]--;
    }
    for(auto t:m){
        if(t.second>0) return false;
    }
    return true;
}

int main(){
    cout<<isAnagram("car","rcd");
}
