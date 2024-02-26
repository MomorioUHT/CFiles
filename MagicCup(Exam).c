void swap(int arr[], int type) {
	int temp;
	switch(type) {
		case 1:
			temp = arr[0];
			arr[0] = arr[1];
			arr[1] = temp;
			break;
		case 2:
			temp = arr[1];
			arr[1] = arr[2];
			arr[2] = temp;
			break;
		case 3:
			temp = arr[0];
			arr[0] = arr[2];
			arr[2] = temp;
			break;
		default:
			break;
	}
}

int main() {
	int n;
	int arr[3] = {1,0,0};
	int action[200] = { };
	scanf("%d",&n);
	for (int i=0; i<n; i++) scanf("%d", &(action[i]));
	for (int i=0; i<n; i++) swap(arr, action[i]);
	if (arr[0] == 1) printf("1");
	if (arr[1] == 1) printf("2");
    if (arr[2] == 1) printf("3");
}