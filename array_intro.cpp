#include<iostream>
using namespace std;

int main(){
    //declaring and initializing an array
    //method 1: declaration
    int arr1[5]; //array of 5 integers
    for(int i=0; i<5; i++){
        cout<<"A= "<<arr1[i]<<" "; //initializing array elements
    }
    cout<<endl;

//2nd method: declaration and initialization
    int arr2[5] = {1, 2, 3, 4, 5}; //array of 5 integers initialized
    for(int i=0; i<5; i++){
        cout<<"B= "<<arr2[i]<<" "; //printing array elements
    }
    cout<<endl;
//3rd method: declaration and semi - initialization (rest 0)
    float arr3[5] = {10, 20, 30}; //array of integers initialized without size
    for(int i=0; i<5; i++){
        cout<<"C= "<<arr3[i]<<" "; //printing array elements
    }
    cout<<endl;    

//4th method : auto-sizing array size based on initialization
    char arr4[] = {'a', 'b', 'c', 'd'}; //array of characters initialized without size
    for(int i=0; i<4; i++){
        cout<<"D= "<<arr4[i]<<" "; //printing array elements
    }
    return 0;
}