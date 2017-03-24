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


bool backT(int &col){
col=col-1;
if(col==-1) return false;
return true;

}

/*void print(int q[]){ //don need this
static int sol =1; //class global
 cout << "There are " <<sol<< " ways. " << endl;
    sol=sol+1;
    for(int i=0; i<8;i++){
    cout<<q[i]<<" "<<endl;
}

}*/

int Solution(int n){
int c=0, sol=0;
bool newcol =true;

int *q=new int[n];
for(int i=0; i<n; i++) q[i]=0;



for(;;){ //Just to keep to while loop running, this program will be terminated when col==-1 in the backT function

while(c<n){
  if(newcol)
   q[c]=-1;

  while(q[c]<n){
     q[c]++;
     if(q[c]==n){
        if(backT(c))
            continue; //this is ignore the while statement above and move to the next line
        else return sol;
      }

    if(isOk(q,c)) break;
    }
            c++;
            newcol=true;
}
//sol++;

//print(q);
sol++;
backT(c);
newcol=false;
}
delete[]q;
return sol;
}

int main(){
int n;
cout << "Enter an integer: ";
cin >> n;
for(int i=1; i<=n; i++){
   cout<<Solution(i) <<" solutions to " << i <<" queens problem." << endl;
}

return 0;
}
