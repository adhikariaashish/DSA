//Tower of Hanoi
#include<iostream>
using namespace std;

void TOH(int n, char src, char helper, char dest){
    
    if(n==1){
        cout<<"Move disk - "<<n<<" from "<<src<<" to "<<dest<<endl;
        return;
    }
    TOH(n-1,src,dest,helper);
    cout<<"Move disk - "<<n<<" from "<<src<<" to "<<dest<<endl;
    TOH(n-1,helper,src,dest);
}

int main(){
    int n;
    cout<<"enter no. of disk"<<endl;
    cin>>n;
    TOH(n,'A','B','C');
    return 0;
}