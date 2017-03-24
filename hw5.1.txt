# include <iostream>
# include <cmath>
using namespace std;
int main(){
int q[8], c=0, i;
int sol=1;
q[0]=0;

NC: c++;
q[c]=-1;
if(c==8){
        goto Print;

}

NR: q[c]++;
if(q[c]==8) goto backTrack;



//RowTest, Conflict Test
for(i=0; i<c; i++){
    if(q[c]==q[i]||c-i==abs(q[c]-q[i])){
        goto NR;
    }

}

goto NC;

backTrack: c--;
if(c==-1) return 0;
goto NR;

Print:

     cout << "There are " <<sol<< " ways. " << endl;
     sol=sol+1;
    for(i=0; i<8;i++){
    cout<<q[i]<<endl;
}


goto backTrack;

}
