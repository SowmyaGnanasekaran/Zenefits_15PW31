#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

//prints the inorder traversal
void print(char a){
    if(a != '0'){
        cout<<a<<" ";
    }
}

//function which sends the array in order to print the traversal
void inorder(string s){
    int count1 = 0;
    vector<char> array;
    int count[s.length()];

    //removes the brackets and commas
    for(int i=0;i<s.length();i++){
        if(s[i] != '{' && s[i] != '}' && s[i] != ','){
            array.push_back(s[i]);
        }

    }

    //sends the array to print inorder traversal
    for(int i=1;i<array.size();i++){
        print(array[i+1]);
        print(array[i]);
        print(array[i+2]);
        if(count1 == 0){
            cout<<array[0]<<" ";
        }
        count1++;
        i = i+2;
    }
}

int main(){
    int t; //number of inputs
    cin>>t;
    string s[t];
    for(int i=0;i<t;i++){
        cin>>s[i];
        inorder(s[i]);
        cout<<endl;
    }
}
