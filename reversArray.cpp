#include <iostream>
using namespace std;
void printArray(int arr[],int size){
        for(int i = 0; i<size; i++) cout<<arr[i];
}
void reverseArray(int arr[],int size){
            int i = 0;
            int newSize = (size-1);
         while(i < (newSize-i)){
                    int temp = arr[i];
                    arr[i] = arr[newSize-i];
                    arr[newSize-i] = temp;
                i++;
                }
         }
         
int main(){
    int _size = 0 ; // for getting the length;
    cout<<"Enter the length of array"<<endl;
    cin>>_size;
    cout<<"Enter the elements one-by-one"<<endl;
    int arr[10000]; 
    for (int i=0;i<_size;i++){
        cin>>arr[i]; //add the elements one-by-one..
    }
    cout<<"Orignal Array : "<<endl;
    printArray(arr,_size);
    reverseArray(arr,_size);
    cout<<endl<<"Reversed Array : "<<endl;
    printArray(arr,_size);
    


    return 0;
}