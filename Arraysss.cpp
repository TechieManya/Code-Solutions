#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the size of the array";
    cin>>a;
    int array[a];
    cout<<"Enter"<<a<<"elements:";
    for(int i=0;i<a;i++){
   cin>>array[i];
   }
   cout<<endl;

cout<<"reverse";
 for(int i=a-1;i>=0;i--){
    cout<<array[i];
 }
   for (int i = 0; i < a - 1; i++) {
    for (int j = 0; j < a - i - 1; j++) {
        if (array[j] > array[j + 1]) {
            // Swapping values
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
        }
    }
}


cout << "Second smallest: " << array[1] << endl;
cout << "Second largest: " << array[a - 2] << endl;
}