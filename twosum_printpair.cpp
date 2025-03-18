#include<iostream>
using namespace std;
pair<int, int> checkTwoSum(int arr[], int size, int target){
    pair<int, int>ans= make_pair(-1, -1);
    //ASSUMING (-1,-1) AS NO ANSWER FOUND
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i] + arr[j] == target){
                //FOUND A PAIR THAT SUMS TO TARGET
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    return ans;
}
int main(){
    int arr[]={10,20,30,40};
    int size=4;
    pair<int, int>ans = checkTwoSum(arr, size, 60);
    if(ans.first == -1 && ans.second == -1){
        cout<<"Pair not found "<<endl;
    }
    else{
        cout<<"Pair found: "<<ans.first << "," <<ans.second <<endl;
    }
}