#include<iostream>
using namespace std;
int main(){
    int arr[] = {5, 15, 22, 1, -15, 24};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int smallest = arr[0];
    int largest = arr[0];

    for(int i = 1; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        
        }
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<< smallest << " is smallest element And " << largest << " is largest element in the array" << endl;
    return 0;
}