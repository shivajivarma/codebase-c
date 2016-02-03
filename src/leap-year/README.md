[Leap Year](http://codemons.com/codebase/leap-year)
=========

> Program to check whether a year is leap year or not

###CODE
```c
int isLeapYear(int year){
    
    if(year%4 == 0){
        if( year%100 == 0){ /* Checking for a century year */
            if ( year%400 == 0)
                return 1;
            else
                return 0;
        }else
            return 1;
    }else
        return 0;
        
}
```

:+1: