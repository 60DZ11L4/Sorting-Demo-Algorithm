int max(int arr[], int len){
	int maxIndex = 0;
	for (int i = 0; i < len; i++){
		if (arr[i] > arr[maxIndex]){
			maxIndex = i;
		};
	};
	return maxIndex;
};