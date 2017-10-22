[Permutations](http://shivajivarma.com/code-base/2015/01/05/binary-search/)
=============

> Program to print all permutations of given set of letters

### Example
```
Enter alphabets :: a	b	c

Permutation ::
a	b	c
a	c	b
b	a	c
b	c	a
c	b	a
c	a	b
```

### CODE
```c
void swap(char *m,char *n)
{
 char temp=*m;
     *m=*n;
     *n=temp;
}

void permutations(char *arr,int k,int n)
{
 int i,j,temp;
		 
   if(k==n-1){
		for(i=0;i<n;i++)
		 printf("%c ",arr[i]);
		 printf("\n");
   }
   else
   for(i=k;i<n;i++)
   {
    swap(&arr[k],&arr[i]);
    permutations(arr,k+1,n);
    swap(&arr[k],&arr[i]);
   }
}
```

:+1:
