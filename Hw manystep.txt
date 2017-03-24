#include <iostream>
#include <fstream>
#include<cstring>
using namespace std;

void insertionSort(int arr[], int size){
    int j, temp, counter=0;
    for(int i=1; i<size;i++){
            j=i;
        while(j>0&&arr[j-1]>arr[j]){
            temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
            counter++;
        }
        }

    cout<<counter<<endl;
}

int main()
{
  fstream f;
  f.open("input.txt");
  if(f!=0){
    cout<<"Your line contains \n";
    while(!f.eof()){
        string line;
        getline(f,line);
        cout<<line<<endl;
    }
  }
  f.close();

int input[20], x=0, n=0;
f.open("input.txt");

    while(!f.eof()){
       f>>input[n];
       n++;
       //cout<<input[x];
       if(n==20){
            //cout<<input[n];
        insertionSort(input,20);

        n=0;
       }

    }
}




