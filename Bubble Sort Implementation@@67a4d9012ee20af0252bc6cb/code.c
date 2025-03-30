bubbleSort(int arr, int n){
    for (int j=0;j<n-1;j++){
        int flag = 1;
        for (int k=0;k<n-2;k++){
            if (a[k]>a[k+1]){
                int temp = a[k];
                a[k+1] = a[k];
                a[k] = temp;
                flag = 0
            }
            if (flag){
                break;
            }
        }
    }
}