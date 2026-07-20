#include<iostream>
using namespace std;
int main(){
    int arr[] = {5, 15, 22, 1, -15, 24};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int smallest = arr[0];
    int largest = arr[0];
    
    int position_smallest, position_largest;
    
    for(int i=0;i<size;i++){
    	if(arr[i]<smallest){
    		smallest = min(arr[i],smallest);
    		position_smallest = i;
    	}
    	else if(arr[i]>largest){
    		largest = max(arr[i],largest);
    		position_largest = i;
    	}
    }
    
    cout<<smallest<<" is the smallest with index of "<<position_smallest<<"\n"<<largest<<" is the largest with index of "<<position_largest<<endl; //"\n In the array of"<<arr[]<<endl;
    return 0;
}
