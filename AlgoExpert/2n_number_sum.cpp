#include<iostream>

using namespace std;

int main(){
    int arr[] = {3,5,-4,8,11,-1,6,4,7};
    int sum = 10;
    int n = sizeof(arr)/sizeof(int);
    printf("Number of Elements in array is : %d \n",n);
    for(int i=0;i<n+1;i++){
        for(int j=i+1;j<n+1;j++){
            if(arr[i]+arr[j]==10){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
            
        }
    }
    
}