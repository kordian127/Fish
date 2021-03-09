#include<iostream>

using namespace std;

int main()
{
    int A[]={4,3,2,1,5};
    int B[]={0,0,1,0,0};
    int fish=0;
    int val;
    bool x=false;

    for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
        fish+=1;

        if(B[i]==1&&B[i+1]==0){
            if(A[i]>A[i+1]){
                val=A[i];
                B[i+1]=1;}
            else
                val=A[i+1];
            fish-=1;
        }
        else
            val=A[i];
    }

    cout<<"Survived: "<<fish<<" fishes.";

    return 0;
}
