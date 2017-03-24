#include <iostream>
#include <cstdlib>
using namespace std;

bool ok(int q[8],int c){
         int helperarray[8][5]={{-1,-1,-1,-1,-1},{0,-1,-1,-1,-1},{0,1,-1,-1,-1},{0,2,-1,-1,-1},{1,2,-1,-1,-1},{1,2,3,4,-1},{2,3,5,-1,-1},{4,5,6,-1,-1}};
         for(int i=0;i<c;i++){
                if(q[i]==q[c]) return false;
         }
         for(int i=0; helperarray[c][i]!=-1;i++){
                if(abs(q[c]-q[helperarray[c][i]])==1) return false;
         }
         return true;
}

void print(int array2[]){
    static int x=1;
    cout << "SOLUTION " << x++ << endl;
    cout << "  " << array2[1]<< " "<<array2[4] << endl;
    cout << array2[0]<<" "<< array2[2]<< " "<<array2[5]<<" "<<array2[7]<< endl;
    cout <<"  "<<array2[3]<<" "<<array2[6]<<endl<<endl;
}


void move(int* q, int i){
    if(i==8){
        print(q);
        return;
    }

    for(int j=1; j<=8; j++){
        q[i]=j;
        if(ok(q,i)) move(q,i+1);
    }
}

int main(){
    int q[8];
    move(q,0);
    return 0;
}
