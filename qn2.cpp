#include<iostream>
#include<stdlib.h>

using namespace std;

//function for swapping the characters
string per(char *in,int a, int b, int c){
    string out="";
    char temp;
    out = out + in[a];
    out = out + in[b];
    out = out + in[c];
    return out;
}

//function for permutating the string
void permutate(char* in, int low, int high, string inp){
    string output[high*2];
    int count = 0;
    for(int i=0;i<high*2;i++){
        if(i%2 == 0){
            if(count == 0){
                output[i] = per(in,low,1,2);
            }
            else if(count == 1){
                output[i] = per(in,low,0,2);
            }
            else if(count == 2){
                output[i] = per(in,low,0,1);
            }
        }
        else{
            if(count == 0){
                output[i] = per(in,low,2,1);
            }
            else if(count == 1){
                output[i] = per(in,low,2,0);
            }
            else if(count == 2){
                output[i] = per(in,low,1,0);
            }
            low++;
            count++;
        }
    }

    for(int i=0;i<high*2;i++){
        if(output[i] == inp){
            cout<<i+1;
        }
    }
}

int main(){
    int n;
    cin>>n;
    char in[n];
    for(int i=0;i<n;i++){
        cin>>in[i];
    }
    string inp;
    cin>>inp;
    permutate(in,0,n,inp);
}
