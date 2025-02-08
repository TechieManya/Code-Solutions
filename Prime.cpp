#include<iostream>
#include<climits>
using namespace std;
bool isPrime(int a){
    if(a<2)
    return false;
    for(int i=2;i<=a/2;i++){
        if(a%i==0)
        return false;
    }
    return true;
}
void printFactors(int a){
    cout<<"Factors of";
    cout<<a<<"are:";
    for(int i=1;i<a/2;i++){
        if(a%i==0)
        cout<<i<<endl;
    }
    cout << a << endl; 
}
int main(){
    int a;
    cout<<"Enter the number";
    cin>>a;
    if(isPrime(a)){
        cout<<a;
        cout<<"isPrime";
        cout<<endl;
    }else {
        printFactors(a);
    }
      if(isPrime(a)) {
        cout<< "the nearest prime number after " << a<< " is ";
        while(a < INT_MAX) {
            a++;
            if(isPrime(a)) {
                cout << a;
                break;
            }
        }
    }

}
