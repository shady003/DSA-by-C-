#include <iostream>
using namespace std;
void printArray(int arr[], int size){
            for(int i =0 ; i<size;i++) cout<<arr[i]<<" ";
            cout<<endl;
}
int main(){
        int len = 0;
        cout<<"Enter the length of array : "<<endl;
        cin>>len;
        int arr[len];
        cout<<"enter values"<<endl;
        for(int i = 0; i < len ; i++){
                cin>>arr[i];
        }
       cout<<"Original array : "<<endl;
        printArray(arr,len);
        for(int i =0 ; i<len;i+=2){
            if(i+1<len){
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
        cout<<"Modified array :"<<endl;
        printArray(arr,len);



    return 0;
}