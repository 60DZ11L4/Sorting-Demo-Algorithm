//Function to Max
int max(int arr[], int len) {
    int indexMax = 0;
    for (int i = 0; i< len; i++){

        if (arr[i] > arr[indexMax]){
            indexMax = i;
        };

    };
    
    return indexMax;
};