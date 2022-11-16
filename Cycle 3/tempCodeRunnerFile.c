void display(){
	if(tos < 0){
		printf("Stack Underflow");
		exit(0);
	}
    int n = tos;
	while(n >= 0){
	 printf("%d ",stack[n--]);
	}
}