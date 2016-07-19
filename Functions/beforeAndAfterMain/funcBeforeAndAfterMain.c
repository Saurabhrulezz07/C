#include<stdio.h>

/* Apply the constructor attribute to myStartupFun() so that it
    is executed before main() */
void beforeMain () __attribute__ ((constructor));


/* Apply the destructor attribute to myCleanupFun() so that it
   is executed after main() */
void afterMain () __attribute__ ((destructor));


/* implementation of myStartupFun */
void beforeMain ()
{
    printf ("Code executing before main()\n");
}

/* implementation of myCleanupFun */
void afterMain ()
{
    printf ("Code executing after main()\n");
}

int main ()
{
    printf ("hello\n");
    return 0;
}
