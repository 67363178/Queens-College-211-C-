# include <iostream>
# include<cstdlib>
using namespace std;

bool isOk(int array1[], int arrayC[][5], int cap){

int static c=0;

for(int i=0; i<cap; i++){


if(array1[i]==-1) return true;

if(array1[i]==arrayC[c][i]|| array1[i] ==arrayC[c][i]) return false;


c=c+1;
}


}


void backTrack(int &col){
col=col-1;
if(col==-1) exit(1);

}



int main(){
int q[8], s[8]={1,2,3,4,5,6,7,8};
int check[8][5]={{-1},{0,-1},{0,1,-1},{0,2,-1},{1,2,-1},{1,2,3,4,-1},{2,3,5,-1},{4,5,6}};
int c=0;

for(int i=0; i<8; i++){
q[c]=s[i];
if(!isOk(q, check, 8)){
backTrack(c);
}

cout<<q[c]<<endl;
c++;

}


}


