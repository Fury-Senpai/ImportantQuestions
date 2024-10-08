#include<iostream>
using namespace std;

bool uniqueElem(int arr[] , int size , int key){
    int count = 0;
    for(int i = 0; i<size; i++){
        if(arr[i] == key ){
            count++;
        }
    }
    if(count==1){
        return 1;
    }
    return 0;
}
int main(){
    int arr[7] = {1,1,2,3,4,5,5};
    cout<<"Enter element to find unique or not \n";
    int key;
    cin >> key;
    bool unique = uniqueElem(arr,7,key);
    if(unique){
        cout<<"Unique";
    }

    return 0;

}