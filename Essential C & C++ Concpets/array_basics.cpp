#include<iostream>
using namespace std;

int main(){
    int A[5] = {2,4,6,8,9};
                  // int takes 4 bytes
    // A[0] = 12;
    // A[1] = 15;
    // A[2] = 25;

    cout<<sizeof(A)<<endl;         // 5 int data * 4 bytes ( each ) = 20 

    cout<<A[1]<<endl;          // Used in cpp
    printf("%d\n",A[2]);       // Used in c

    return 0;
}