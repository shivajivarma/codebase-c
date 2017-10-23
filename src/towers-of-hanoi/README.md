[Tower of Hanoi](http://shivajivarma.com/code-base/2017/10/23/towers-of-hanoi)
=========

The Tower of Hanoi (also called the Tower of Brahma or Lucas' Tower) is a mathematical game or puzzle. 
It consists of three rods, and a number of disks of different sizes which can slide onto any rod. 
The puzzle starts with the disks in a neat stack in ascending order of size on one rod, 
the smallest at the top, thus making a conical shape.

The objective of the puzzle is to move the entire stack to another rod, obeying the following rules:
1. Only one disk may be moved at a time.
2. Each move consists of taking the upper disk from one of the rods and sliding it onto another rod, 
	on top of the other disks that may already be present on that rod.
3. No disk may be placed on top of a smaller disk.


```c
void towhan(int n,char x,char y,char z)
{
   if(n>=1)
   {  
      towhan(n-1,x,z,y);
      printf("\nMOVE TOP DISK FROM TOWER '%c' TO TOP OF TOWER '%c' \n",x,y);
      towhan(n-1,z,y,x);
    }
}
 
 
int main()
{
     int n;
     printf("ENTER THE NUMBER OF DISKS");
     scanf("%d",&n);
     towhan(n,'A','B','C');
     getch();
     return 0;
}
```

:+1: