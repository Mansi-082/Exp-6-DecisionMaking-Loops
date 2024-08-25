#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    int i, k;
    char o='A';
    for(i=0;i<n;i++){
        for(k=0;k<(i+1);k++){
            cout<<o<<" ";
            o++;
        }
        k=0;
        cout<<endl;
    }
return 0;
}