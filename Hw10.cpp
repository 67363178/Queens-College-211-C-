#include<cmath>
#include<iostream>
#include <cstdlib>
using namespace std;

bool isOk(int q[], int col){
int MP[3][3]={{0,0,1},{2,2,2},{1,1,0}};
int WP[3][3]={{2,0,2},{1,1,0},{0,2,1}};
for(int i=0; i<col; i++){
    if(q[col]==q[i]) return false;
}
for(int i=0; i<col; i++){
if((WP[q[col]][i]<WP[q[col]][col])&&(MP[i][q[col]]<MP[i][q[i]])) return false;
if((MP[col][q[i]]<MP[col][q[col]])&&(WP[q[i]][col]<WP[q[i]][i])) return false;

}

return true;

}

void backTrack(int &col){
col=col-1;
if(col==-1) exit(1);
}

void print(int q[]){
    static int sol=0;
    cout << "SOLUTION " << ++sol << endl;
    cout << "Man Woman" << endl;
    for(int i=0; i<3; i++){
        cout << " " << i << "    " << q[i] << endl;
    }
    cout << endl << endl;
}

int main(){
int q[3],c=0;
bool assigned =true;
q[0]={0};

for(;;){
    while(c<3){
        if(assigned)
            q[c]=0;
        while(q[c]<4){
            q[c]++;
            if(q[c]==4){
                backTrack(c);
                continue;
            }
            if(isOk(q,c))break;
        }
        c++;
        assigned=true;
    }
    print(q);
    backTrack(c);
    assigned=false;

}

return 0;
}
