# include <iostream>
# include <cmath>
#include<cstdlib>

using namespace std;

bool isOk(int q[], int col){
for(int i=0; i<col; i++){
    if(col-i==abs(q[col]-q[i])||q[col]==q[i]){
        return false;

    }


}
return true;
}


void backT(int &col){
col=col-1;
if(col==-1) exit(1);

}

void print(int q[]){
static int sol =1; //class global
 cout << "There are " <<sol<< " ways. " << endl;
    sol=sol+1;
    for(int i=0; i<8;i++){
    cout<<q[i]<<" "<<endl;
}

}


int main(){
int q[8], c=0;
q[0]=0;
bool newcol =true;

for(;;){ //Just to keep to while loop running, this program will be terminated when col==-1 in the backT function

while(c<8){
  if(newcol)
   q[c]=-1;

  while(q[c]<8){
     q[c]++;
     if(q[c]==8){
        backT(c);
        continue; //this is ignore the while statement above and move to the next line
      }

    if(isOk(q,c)) break;
    }
            c++;
            newcol=true;
}
  print(q);
  backT(c);
  newcol=false;
}
    return 0;
}
