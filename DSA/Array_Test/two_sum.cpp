#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,7,11,15,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    bool flag = false;
    int target = 9;
    
    int positionArray[2];
    
    [&](){
        for(int i=0;i<size;i++){
            int needed = target - arr[i];
            for(int j = i + 1; j < size; j++){
                if(arr[j] == needed){
                    positionArray[0] = i;
                    positionArray[1] = j;
                    flag = true;
                    return;
                }
            }
        }
    }();
    
    if(flag){
        cout<<"Indices : ["<<positionArray[0]<<","<<positionArray[1]<<"]"<<endl;
    }
    else{
        cout<<"No such indices found"<<endl;
    }
    return 0;
}
