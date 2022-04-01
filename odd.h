int odd(int arr[], int len){
	int oddCounter = 0;
	for (int i = 0; i < len; i++){
		if(arr[i] % 2 == 1){
			oddCounter++;
		};
	};
	return oddCounter;
};