#include<iostream>
using namespace std;
void checkTwoSumPrintAllAnswer(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i] + arr[j] == target){
                cout<< arr[i] << " , "<< arr[j] <<endl;
            }
        }
    }
    return;
}

int main(){
    int arr[] = {10,20,30,40};
    int size = 4;
    checkTwoSumPrintAllAnswer(arr, size, 60);
    return 0;
}