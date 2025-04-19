#include<iostream>
using namespace std;

bool uniqueOccurence(int arr[],int size){ // 1 , 2, 1, 3, 3, 3

    for(int i = 0; i<size; i++){
        int count = 0;
        for(int j = 0; j<size; j++){
            int temp = 0;
            if(arr[i]==arr[j]){
                temp++;
            }
            if(count == temp){
                return 0;
            }
            else{
                count = temp;
            }
        }
    }
    return true;
}

int main(){

    int arr[]={1,2,3,2,3,3};
    int size = sizeof(arr)/sizeof(int);

    if(uniqueOccurence(arr,size)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;

}