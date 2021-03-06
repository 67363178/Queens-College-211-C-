#include <iostream>
using namespace std;

int main(){

	int b[8][8]={0}, r, c=0, counta=1;
	b[0][0]=1;

	NC: c++; //next c
	if(c==8) goto Print;
	r=-1;

	NR: r++; //next r
	if(r==8) goto backTrack;

	//Row test

	for(int i=0; i<c; i++){
		if(b[r][i]==1) goto NR;
	}

	//UD
	for(int o=1; ((c-o)>=0)&&((r-o)>=0); o++){
		if(b[r-o][c-o]==1) goto NR;
	}

	//DD
	for(int p=1; ((c-p)>=0)&&((r+p)<8); p++){
		if(b[r+p][c-p]==1) goto NR;
	}

	b[r][c]=1;
	goto NC;

	backTrack:
	c--;
	if(c==-1) return 0;

	r = 0;
	while(b[r][c]!=1) r++;
	b[r][c]=0;
	goto NR;

	Print:
	cout << "There are " <<counta<< " ways. " << endl;
	for(int row=0; row<8; row++){
		for(int column=0; column<8; column++){
			cout << b[row][column] << " ";
		}
                cout << endl;
	}
	cout << endl;
	counta++;
	goto backTrack;


}
