int fin(int arr[], int len, int look){
	int finIndex = 0;
	for (int i = 0; i < len; i++){
		if (arr[i] == look){
			finIndex = i;
		};
	};
	return finIndex;
};