#include <cstdlib>
#include <iostream>
using namespace std;

int b, n; //number of bishops, size (sqr matrix)


//ok function
bool ok(int q[], int b, int size){

    int row = q[b]/size, column = q[b]%size;

    for(int i=0; i<b; i++){

        if(abs(q[b]/size-q[i]/size)==abs(q[b]%size-q[i]%size)) return false;
    }

    return true;
}

void backtrack(int &c, int count){
    c--;
    if(c==-1){
        cout << b << " bishops on an " << n << " by " << n << " chessboard in " << count << " different ways.";
        exit(1);
    }
}

int main(){
    for(;;){

        cout << "Enter n ,size: ";
        cin >> n;
        cout << "Enter b, how many bishops: ";
        cin >> b;
        if(n<0) break;

        int* q = new int[b];
        int count = 0, c = 0, t;
        q[c] = 0;

        while(true){
            while(c<b){
                while(q[c]<n*n){
                    if(ok(q,c,n)) break;
                    else q[c]++;
                }

                if(q[c]==n*n){
                    backtrack(c, count);
                    q[c]++;
                    continue;
                }

                else{
                    t = q[c];
                    c++;
                    q[c] = t;
                }
            }
            count++;
            backtrack(c, count);
            q[c]++;
        }
    }
    return 0;
}
