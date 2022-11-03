void swap(int&x,int&y){
int tmp = x;
x=y;
y=tmp;
}

void selectionSort(int arr[], int n){
    int mnIdx;
    for(itn i = 0 ; i < n-1 ; i++){
            mnIdx = i;
    for(int j = i+1 ; j<n ; j++){
        if(arr[j]<arr[mnIdx]){
            mnIdx = j;
        }
    }
    swap(arr[i],arr[mnIdx]);
    }
}
