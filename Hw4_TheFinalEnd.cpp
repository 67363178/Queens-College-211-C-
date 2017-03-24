# include <iostream>
using namespace std;
int main(){
for(;;){
int NumOfTeams=0, runners, rt=NumOfTeams*runners;
int Runner[26];
char tnames[26], Letter;
double total[26];
int teams[26];
int counta[26];
int checkRunners=0, test=0, Temp=0;
int c=0;
int score0=1, score1[26];
double sum[26];
char array1[26];


for(int i=0; i<26; i++){
    counta[i]=0;
    Runner[i]=0;
    sum[i]=0;
    array1[i]=0;
    total[i]=0;
}

for(;;){
cout<<"Enter team names(Uppercase A-Z, Enter '0' to stop)";
cin>>Letter;


switch(Letter){ //Switch statement get data from user and store it in an array, it determine how many runners user entered.
case 'A':
    counta[0]=counta[0]+1;
    Runner[0]=counta[0];
    score1[0]=score0;
    sum[0]=sum[0]+score0;
    //cout<<endl<<Runner[0]<<endl<<score1[0]<<endl<<sum[0]<<endl;
    array1[0]='A';
    teams[0]=1;
    break;

case 'B':
    counta[1]=counta[1]+1;
    Runner[1]=counta[1];
    score1[1]=score0;
    sum[1]=sum[1]+score1[1];
   // cout<<endl<<Runner[1]<<endl<<score1[1]<<endl<<sum[1]<<endl;
    array1[1]='B';
    teams[1]=1;
    break;

case 'C':
    counta[2]=counta[2]+1;
    Runner[2]=counta[2];
    score1[2]=score0;
    sum[2]=sum[2]+score1[2];
    //cout<<endl<<Runner[2]<<endl<<score1[2]<<endl<<sum[2]<<endl;
    array1[2]='C';
    teams[2]=1;
    break;

case 'D':
    counta[3]=counta[3]+1;
    Runner[3]=counta[3];
    score1[3]=score0;
    sum[3]=sum[3]+score1[3];
   // cout<<endl<<Runner[3]<<endl<<score1[3]<<endl<<sum[3]<<endl;
    array1[3]='D';
    teams[3]=1;
    break;

case 'E':
    counta[4]=counta[4]+1;
    Runner[4]=counta[4];
    score1[4]=score0;
    sum[4]=sum[4]+score1[4];
    //cout<<endl<<Runner[4]<<endl<<score1[4]<<endl<<sum[4]<<endl;
    array1[4]='E';
    teams[4]=1;
    break;

case 'F':
    counta[5]=counta[5]+1;
    Runner[5]=counta[5];
    score1[5]=score0;
    sum[5]=sum[5]+score1[5];
   // cout<<endl<<Runner[5]<<endl<<score1[5]<<endl<<sum[5]<<endl;
    array1[5]='F';
    teams[5]=1;
    break;

case 'G':
    counta[6]=counta[6]+1;
    Runner[6]=counta[6];
    score1[6]=score0;
    sum[6]=sum[6]+score1[6];
   // cout<<endl<<Runner[6]<<endl<<score1[6]<<endl<<sum[6]<<endl;
    array1[6]='G';
    teams[6]=1;
    break;

case 'H':
    counta[7]=counta[7]+1;
    Runner[7]=counta[7];
    score1[7]=score0;
    sum[7]=sum[7]+score1[7];
    //cout<<endl<<Runner[7]<<endl<<score1[7]<<endl<<sum[7]<<endl;
    array1[7]='H';
    teams[7]=1;
    break;

case 'I':
    counta[8]=counta[8]+1;
    Runner[8]=counta[8];
    score1[8]=score0;
    sum[8]=sum[8]+score1[8];
    //cout<<endl<<Runner[8]<<endl<<score1[8]<<endl<<sum[8]<<endl;
    array1[8]='I';
    teams[8]=1;
    break;

case 'J':
    counta[9]=counta[9]+1;
    Runner[9]=counta[9];
    score1[9]=score0;
    sum[9]=sum[9]+score1[9];
    //cout<<endl<<Runner[9]<<endl<<score1[9]<<endl<<sum[9]<<endl;
    array1[9]='J';
    teams[9]=1;
    break;

case 'K':
    counta[10]=counta[10]+1;
    Runner[10]=counta[10];
    score1[10]=score0;
    sum[10]=sum[10]+score1[10];
    //cout<<endl<<Runner[10]<<endl<<score1[10]<<endl<<sum[10]<<endl;
    array1[10]='K';
    teams[10]=1;
    break;

case 'L':
    counta[11]=counta[11]+1;
    Runner[11]=counta[11];
    score1[11]=score0;
    sum[11]=sum[11]+score1[11];
   // cout<<endl<<Runner[11]<<endl<<score1[11]<<endl<<sum[11]<<endl;
    array1[11]='L';
    teams[11]=1;
    break;

case 'M':
    counta[12]=counta[12]+1;
    Runner[12]=counta[12];
    score1[12]=score0;
    sum[12]=sum[12]+score1[12];
   // cout<<endl<<Runner[12]<<endl<<score1[12]<<endl<<sum[12]<<endl;
    array1[12]='M';
    teams[12]=1;
    break;

case 'N':
    counta[13]=counta[13]+1;
    Runner[13]=counta[13];
    score1[13]=score0;
    sum[13]=sum[13]+score1[13];
   // cout<<endl<<Runner[13]<<endl<<score1[13]<<endl<<sum[13]<<endl;
    array1[13]='N';
    teams[13]=1;
    break;

case 'O':
    counta[14]=counta[14]+1;
    Runner[14]=counta[14];
    score1[14]=score0;
    sum[14]=sum[14]+score1[14];
   // cout<<endl<<Runner[14]<<endl<<score1[14]<<endl<<sum[14]<<endl;
    array1[14]='O';
    teams[14]=1;
    break;

case 'P':
    counta[15]=counta[15]+1;
    Runner[15]=counta[15];
    score1[15]=score0;
    sum[15]=sum[15]+score1[15];
   // cout<<endl<<Runner[15]<<endl<<score1[15]<<endl<<sum[15]<<endl;
    array1[15]='P';
    teams[15]=1;
    break;

case 'Q':
    counta[16]=counta[16]+1;
    Runner[16]=counta[16];
    score1[16]=score0;
    sum[16]=sum[16]+score1[16];
   // cout<<endl<<Runner[16]<<endl<<score1[16]<<endl<<sum[16]<<endl;
    array1[16]='Q';
    teams[16]=1;
    break;

case 'R':
    counta[17]=counta[17]+1;
    Runner[17]=counta[17];
    score1[17]=score0;
    sum[17]=sum[17]+score1[17];
   // cout<<endl<<Runner[17]<<endl<<score1[17]<<endl<<sum[17]<<endl;
    array1[17]='R';
    teams[17]=1;
    break;

case 'S':
    counta[18]=counta[18]+1;
    Runner[18]=counta[18];
    score1[18]=score0;
    sum[18]=sum[18]+score1[18];
   // cout<<endl<<Runner[18]<<endl<<score1[18]<<endl<<sum[18]<<endl;
    array1[18]='S';
    teams[18]=1;
    break;

case 'T':
    counta[19]=counta[19]+1;
    Runner[19]=counta[19];
    score1[19]=score0;
    sum[19]=sum[19]+score1[19];
   // cout<<endl<<Runner[19]<<endl<<score1[19]<<endl<<sum[19]<<endl;
    array1[19]='T';
    teams[19]=1;
    break;

case 'U':
    counta[20]=counta[20]+1;
    Runner[20]=counta[20];
    score1[20]=score0;
    sum[20]=sum[20]+score1[20];
   // cout<<endl<<Runner[20]<<endl<<score1[20]<<endl<<sum[20]<<endl;
    array1[20]='U';
    teams[20]=1;
    break;

case 'V':
    counta[21]=counta[21]+1;
    Runner[21]=counta[21];
    score1[21]=score0;
    sum[21]=sum[21]+score1[21];
   // cout<<endl<<Runner[21]<<endl<<score1[21]<<endl<<sum[21]<<endl;
    array1[21]='V';
    teams[21]=1;
    break;

case 'W':
    counta[22]=counta[22]+1;
    Runner[22]=counta[22];
    score1[22]=score0;
    sum[22]=sum[22]+score1[22];
   // cout<<endl<<Runner[22]<<endl<<score1[22]<<endl<<sum[22]<<endl;
    array1[22]='W';
    teams[22]=1;
    break;

case 'X':
    counta[23]=counta[23]+1;
    Runner[23]=counta[23];
    score1[23]=score0;
    sum[23]=sum[23]+score1[23];
   // cout<<endl<<Runner[23]<<endl<<score1[23]<<endl<<sum[23]<<endl;
    array1[23]='X';
    teams[23]=1;
    break;

case 'Y':
    counta[24]=counta[24]+1;
    Runner[24]=counta[24];
    score1[24]=score0;
    sum[24]=sum[24]+score1[24];
   // cout<<endl<<Runner[24]<<endl<<score1[24]<<endl<<sum[24]<<endl;
    array1[24]='Y';
    teams[24]=1;
    break;

case 'Z':
    counta[25]=counta[25]+1;
    Runner[25]=counta[25];
    score1[25]=score0;
    sum[25]=sum[25]+score1[25];
   // cout<<endl<<Runner[25]<<endl<<score1[25]<<endl<<sum[25]<<endl;
    array1[25]='Z';
    teams[25]=1;
    break;

default:
    goto statement;
}

score0=score0+1;
}















statement: for(int i=0; i<26; i++){  // C WILL CHECK IF ALL TEAM HAVE AN EQUATL RUNNERS;
            if(Runner[i]!=0){
                c=i;

            }
}
            for(int i=0; i<26; i++){ //CHECKING
               if(Runner[i]!=0 && Runner[c]!=Runner[i]){

                cout<<"NO! tHE SIZE OF RUNNERS ARE NOT EQUAL. ";
                return 0;

                }


            }





    for(int i=0; i<26; i++){
        if(teams[i]==1){
            NumOfTeams=NumOfTeams+1;
        }

    }
cout<<"There are "<<NumOfTeams<<" teams."<<endl;

runners=Runner[c];
cout<<"Each team has  "<<runners<<" runners."<<endl;



// for(int i=0; i<26; i++){ //checking from A-Z
 //   cout<<array1[i];
//}



for(int i=0; i<26; i++){ //SCORES
    if(sum[i]!=0){
        total[i]=sum[i]/runners;
       // cout<<total[i]<<endl;
    }

}

double copyscore=0;
int WinnerPosition=0;

cout<<"Team           Score"<<endl; //LIST THEM
for(int i=0; i<26; i++){
if(array1[i]!='0'&&total[i]!=0){


cout<<array1[i]<<"               "<<total[i]<<endl;
copyscore=total[i];
}
}
 //cout<<copyscore<<endl;//checking the number

for(int i=0; i<26; i++){
    if(total[i]!=0) {
        if(total[i]<=copyscore){
                copyscore=total[i];
                WinnerPosition=i;
        }

}
}
//cout<<WinnerPosition; CHECKING THE POSITION
string done;

cout<<"The winning team is team "<<array1[WinnerPosition]<<" with a score of "<<total[WinnerPosition]<<endl<<"Enter 0 to continue, done to exit. ";
cin>>done;
if (done=="done"||done=="DONE")return 0;
}
}
