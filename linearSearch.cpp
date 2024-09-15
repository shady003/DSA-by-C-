//program to search key from an array using linear search
#include <iostream>
using namespace std;
bool _linearSearch(int arr[],int key,int size){
            for (int i =0 ; i<size ; i++){
                if(arr[i]==key) return true;
            }
            return false;
}
int main(){
        int _size  = 0 ; //size for array length .
        int _key = 0 ; //'0' is used to avoid G. values .
        cout<<"Enter the length of array "<<endl;
        cin>>_size;
        int arr[1000] = {0}; //hardcoding the array length is a good practice until you use pointers / heap memory location.
        cout<<"Enter the values for array one-by-one"<<endl ;
        for (int i=0; i<_size; i++){
                cin>>arr[i]; //getting the values one-by-one for array by user .
        } 
        cout<<"elements decleared"<<endl;
        cout<<"Enter the key to find it from array"<<endl;
        cin>>_key; 
        bool result = _linearSearch(arr,_key,_size);
        if (result){
                cout<<"Value found"<<endl;
        }
        else{
                cout<<"No such value found"<<endl;
        }

    return 0;
}