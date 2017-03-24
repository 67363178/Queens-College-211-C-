# include <iostream>
# include<cstdlib>
using namespace std;

bool isOk(int array1[8],int c){
         int a[8][5]={{-1,-1,-1,-1,-1},{0,-1,-1,-1,-1},{0,1,-1,-1,-1},{0,2,-1,-1,-1},{1,2,-1,-1,-1},{1,2,3,4,-1},{2,3,5,-1,-1},{4,5,6,-1,-1}};
         for(int i=0;i<c;i++){
                if(array1[i]==array1[c]) return false; //check if there are the same integer
         }
         for(int i=0; a[c][i]!=-1;i++){
                if(abs(array1[c]-array1[a[c][i]])==1) return false; //array1[a[c][i] dia check]
         }
         return true;
}


void backTrack(int &col){
col=col-1;
if(col==-1) exit(1);

}

void print(int array2[]){
    static int x=1;
    cout << "SOLUTION " << x++ << endl;
    cout << "  " << array2[1]<< " "<<array2[4] << endl;
    cout << array2[0]<<" "<< array2[2]<< " "<<array2[5]<<" "<<array2[7]<< endl;
    cout <<"  "<<array2[3]<<" "<<array2[6]<<endl<<endl;
}



int main(){
int q[8]={0};
int c=0;
bool next=true;


for(;;){

while (c<8){
    if(next){
        q[c]=0;

    }

    while(q[c]<9){
        q[c]++;
        if(q[c]==9){
            backTrack(c);
            continue;
        }
        if(isOk(q,c)) break;
    }

 c++;
next=true;
}


print(q);
backTrack(c);
next=false;

}


return 0;
}

