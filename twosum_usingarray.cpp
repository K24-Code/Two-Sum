#include<iostream>
#include<limits.h>
using namespace std;
void checkTwoSumUsingArray(int arr[], int size, int target, int ans[]){
    for(int i =0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i] + arr[j] == target){
                ans[0] = arr[i];
                ans[1] = arr[j];
                return;
            }
        }
    }
    return;
}
int main(){
    int arr[]={10,20,30,40};
    int size=4;
    int ans[2]={INT_MIN, INT_MIN}; //BASICALLY AGAR TARGET EQUAL NHI HUA TO YE VALUE PRINT HOGI
    checkTwoSumUsingArray(arr, size, 600, ans);
    cout<< ans[0] << " , "<< ans[1] <<endl;
    return 0;
}