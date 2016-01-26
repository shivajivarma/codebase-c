#include <stdio.h>

int isArmstrong(int num){
    
    int temp = num, sum = 0, digit;
    
    while (temp != 0) {
    	digit = temp % 10;
		sum = sum + (digit * digit * digit);
		temp = temp/10;
	}
    
    if(num == sum)
        return 1; // Success
    
    return 0; // Failure
}

/*
int main(){
    
    int n;
    	
	printf("Enter number : ");	
	scanf("%d",&n);
	
	if (isAmstrong(n))
		printf("\n'%d' is an armstrong number",n); 
	else
		printf("\n'%d' is not an armstrong number",n); 
        
    return 0;
}
*/
