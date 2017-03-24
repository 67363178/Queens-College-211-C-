#include <iostream>
#include <cstdlib>
using namespace std;

bool ok(int q[], int col){

int MP[3][3]={{0,0,1},{2,2,2},{1,1,0}};
int WP[3][3]={{2,0,2},{1,1,0},{0,2,1}};

for(int i=0; i<col; i++){
    if(q[col]==q[i]) return false;
}
for(int i=0; i<col; i++){
if((WP[q[col]][i]<WP[q[col]][col])&&(MP[i][q[col]]>MP[i][q[i]])) return false;
if((MP[col][q[i]]<MP[col][q[col]])&&(WP[q[i]][col]<WP[q[i]][i])) return false;

}

return true;

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

void move(int* q, int i){
    if(i==3){
        print(q);
        return;
    }

    for(int j=0; j<3; j++){
        q[i]=j;
        if(ok(q,i)) move(q,i+1);
    }
}

int main(){
    int q[3];
    move(q,0);
    return 0;
}
