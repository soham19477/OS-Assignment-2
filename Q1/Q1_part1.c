/* Name: Soham Das
   Roll_Number: 2019477 */
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/errno.h>
#include <unistd.h>
#include <stdlib.h>
int x=10;

int main()
{
    pid_t p;
    p=fork();
    if(p==-1){
        printf("Error in fork\n");
    }
    if(p==0){
        while(x>-90){
            x--;
            printf("\nChild: %d\n",x);
        }
    }
    else{
        while(x<100){
            x++;
            printf("\nParent: %d\n",x);
        }
    }
}
