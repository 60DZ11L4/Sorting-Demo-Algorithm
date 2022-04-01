int min(int arr[], int len){
    int minIndex = 0;
    for (int i = 0; i < len; i++){
        if (arr[i] < arr[minIndex]){
            minIndex = i;
        };
    };
    return minIndex;
};