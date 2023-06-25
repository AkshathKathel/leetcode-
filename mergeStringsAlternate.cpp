#include<iostream>
#include<string>

using namespace std;


int main(){
    string str1,str2,finalString="";
    getline(cin,str1);
    getline(cin,str2);

    int i=0,j=0;
    while(i<str1.size()||j<str2.size()){

        if(i<str1.size()){
            finalString = finalString+str1[i];
            i++;
        }
        if(j<str2.size()){
            finalString = finalString+str2[j];
            j++;
        }
    }
    cout<<finalString;
}
