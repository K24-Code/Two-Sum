#include<iostream>
using namespace std;
bool checkTwoSum(int arr[], int n, int target){
    //CHECK ALL PAIRS
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if( arr[i] + arr[j] == target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[] = {10, 20, 30, 40};
    int n=4;
    //int target = 60;
    bool ans = checkTwoSum(arr, n, 60);
    if(ans == true){
        cout<<"Pair found";
    }
    else{
        cout<<"Pair not found";
    }
    return 0;
}