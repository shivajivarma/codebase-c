#include <stdio.h>

void rightAngledTriangleRight(int n, char ch);

void rightAngledTriangleRight(int n, char ch){
	int row;
	int col;
	for (row = 1; row <= n; row++)
    {

        for (col = 1; col <= n - row; col++)
            printf (" ");


        for (col = 1; col <= row; col++)
            printf ("%c", ch);


        printf ("\n");
    }
}

int main ()
{
    int n;
    char ch;

    printf ("Enter the number of rows in triangle :: ");
    scanf ("%d", &n);
    printf ("Enter a character to be printed :: ");
    scanf (" %c", &ch);

    rightAngledTriangleLeft(n, ch);
	
    return 0;
}
