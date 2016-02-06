#include <stdio.h>

int main()
{
    int row, c, n;
    char ch[4];

    printf("Enter the number of rows in triangle :: ");
    scanf("%d",&n);
    printf("Enter a character to be printed :: ");
    scanf("%s",&ch);

    for ( row = 1 ; row <= n ; row++ ) {

        for ( c = 1 ; c <= row ; c++ ) {
            printf("%c", ch[0]);
        }

        printf("\n");
    }

    return 0;
}