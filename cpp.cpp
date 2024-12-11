#include<iostream>


using namespace std;
int main(){ int a;

a=100;
int *var;
var=&a;

cout<<*var;
int arr[5];
int *point;
point=arr;
for(int i=0;i<5;i++){
    cin>>*point;
}
for(int i=0;i<5;i++){
    cout<<*point(i);
}

    
}



