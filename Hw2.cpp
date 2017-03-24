# include <iostream>
using namespace std;

bool Yes(int a[], int b[], int n){ //test if elements in array a == array b
    for(int i=0; i<n; i++){
         if(a[i]!=b[i]){
            return false;
         }
    }
    return true;
}


bool equivalent(int a[], int b[], int n){
int copyi;
bool ans =false;

    for(int i=0; i<n; i++){   //it should shift n times, so that it tests out all possibilities.

        for(int c=0; c<n; c++){
            copyi = b[n-1];
            b[n-1] = b[c];
            b[c] = copyi;
        }

        if(Yes(a,b,n)) return true;    //after testing, if every elements in array a == array b. then return true.
    }

return ans; // if not, return ans (false)

}



int main(){

int i;


cout<<"Enter an integer number ";
cin>>i;

int arraya[i], arrayb[i];

cout<<"Array"<<endl;
for(int q=0; q<i; q++){
cin>>arraya[q];
}
cout<<endl;
cout<<"Arrayb"<<endl;

for(int q=0; q<i; q++){
cin>>arrayb[q];
}
cout<<endl;

if(equivalent(arraya, arrayb, i)){
        cout<<"Yes";
}

else cout<<"NO";

return 0;


}