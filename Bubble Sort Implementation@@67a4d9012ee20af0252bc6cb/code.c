int bubbleSort(int arr[], int n){
    for (int j=0;j<n-1;j++){
        int flag = 1;
        for (int k=0;k<n-2;k++){
            if ( arr[k] > arr[k+1] ){
                int temp = arr[k];
                arr[k+1] = arr[k];
                arr[k] = temp;
                flag = 0;
            }
            if (flag){
                break;
            }
        }
    }
    return 0;
}
int printArray(int arr[], int n){
    for (int l=0;l<n;l++){
        printf("%d ",arr[l]);
    }
    return 0;
}