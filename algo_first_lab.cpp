#include<iostream>
using namespace std;
int Binary_search(int A[],int p , int r, int key){

if (p<=r){
    int mid=(p+r)/2;
    if(A[mid]==key){

         return 1;
    }
    else if(A[mid]<key){

       return Binary_search( A, mid+1 , r , key);

        }
        else{


            return Binary_search( A, p , mid-1 , key);
        }
    }

}


int main(){

int r,p=0;
cout<<"enter the number of array";
cin>>r;
int A[r];
for(int i=0;i<r;i++){
    cin>>A[i];
}
int key;
cout<<"enter the key";
cin>>key;
int counter=Binary_search(A,0,r,key);
if(counter==1){
    cout<<"The key number is found on your array !";

}else{
cout<<"The key number isn't found on your array !";
}


}





