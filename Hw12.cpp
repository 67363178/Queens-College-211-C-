#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void print(int q[]){
	static int sol=1;
	int i,j,k,l;
 typedef char box[5][7];
 box bb,wb,bq,wq,*board[8][8];

     for(i=0;i<5;i++){
        for(j=0;j<7;j++){
            if(i==0||i==4) bq[i][j]=' ';
            if(i==1){
                if(j%2==0) bq[i][j]=' ';
                else bq[i][j]=char(219);
            }
            if(i==2||i==3){
                if(j==0||j==6) bq[i][j]=' ';
                else bq[i][j]=char(219);
            }
        }
    }

    for(i=0;i<5;i++){
		for(j=0;j<7;j++){
			if(bq[i][j]==' ') wq[i][j]=char(219);
			if(bq[i][j]==char(219)) wq[i][j]=' ';
		}
	}



 //fill in bb=black box and wb=whitebox
 for(i=0;i<5;i++)
 for( j=0;j<7;j++)
 {wb[i][j]=' ';
 bb[i][j]=char(219);
 }
 //fill board with pointers to bb and wb in alternate positions
 for(i=0;i<8;i++)
 for(j=0;j<8;j++)
 if((i+j)%2==0)
 board[i][j]=&wb;
 else
 board[i][j]=&bb;
 // print the board via the pointers in array board
 // first print upper border


//create white queen image by inverting black queen image
	for(i=0;i<5;i++){
		for(j=0;j<7;j++){
			if(bq[i][j]==' ') wq[i][j]=char(219);
			if(bq[i][j]==char(219)) wq[i][j]=' ';
		}
	}

	//fill in bb=black box and wb=whitebox
	for(i=0;i<5;i++)
		for( j=0;j<7;j++){
			wb[i][j]=' ';
			bb[i][j]=char(219);
		}

	//fill board with pointers to bb and wb in alternate positions
	for(i=0;i<8;i++)
		for(j=0;j<8;j++)
			if((i+j)%2==0)
			board[i][j]=&wb;
			else board[i][j]=&bb;

	// print the board via the pointers in array board
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if(q[j]==i){
				if((board[i][j])==&wb) board[i][j]=&bq;
				else board[i][j]=&wq;
			}
		}
	}


	cout <<endl<<"There ARE "<<sol++<<" Solution"<<endl;
	for(i=0;i<8;i++){
		for(k=0;k<5;k++){
			cout<<" "<<char(179);
			for(j=0;j<8;j++)
				for(l=0;l<7;l++)
					cout<<(*board[i][j])[k][l];
			cout<<char(179)<<endl;
		}
	}

	cout<<" ";
	for(i=0;i<7*8;i++){
		cout<<char(196);
		cout<<endl;
	}

    // reset
    for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if((i+j)%2==0) board[i][j]=&wb;
			else board[i][j]=&bb;
		}
    }
}




bool isOk(int q[], int col){
    for(int i=0; i<col; i++)
        if(q[col]==q[i] || (col-i)==abs(q[col]-q[i])) return false;
    return true;
};

void backTrack(int &col){
    col--;
    if(col==-1) exit(1);
};

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