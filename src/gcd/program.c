int gcd(int a,int b) {
	int c = b % a;
    if(c == 0)
        return a;
    else
        return gcd(c,a);
}

/*
int main() {

    int x,y;

    printf("GCD of two numbers\nEnter x and y :: ");
    scanf("%d%d", &x, &y);

    if(x == 0 && y == 0) {
        printf("Error: Atleast one of the integer must not be zero.");
    } else {
        if(x < y) {
            printf("\n GCD:: %d",gcd(x,y));
        } else {
            printf("\n GCD:: %d",gcd(y,x));
        }
    }
    return 0;
}
*/