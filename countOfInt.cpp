#include<iostream>
#include<vector>
using namespace std;


int count(string num1, string num2, int min_sum, int max_sum) {
    int counter=0;
    int start = stoi(num1);
    int last = stoi(num2);
    int sum=0;
    for(int i=start;i<=last;i++){
        int j = i;
        while(j>0){
            int n = j%10;
            sum = sum+n;
            j=j/10;
        }
        if(sum<=max_sum&&sum>=min_sum){
            counter = (counter+1)%1000000007;
        }
        sum = 0;
    }
    return counter;
}

int main(){
    cout<<count("4179205230","7748704426",8,46);
}
