# include <iostream>
using namespace std;
int main(){

int i=10, sqr=0;

for(;;){

sqr=i*i;
while(sqr>99){
    sqr=sqr%100;

}

    if(sqr/10%2==1 && sqr%10%2==1) break;
    i=i+1;
}

cout<<i<<endl;
cout<<i*i<<endl;
cout<<sqr; //last 2 digit

return 0;


}

// Strang
