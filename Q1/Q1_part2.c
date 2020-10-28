/* Name: Soham Das
   Roll_Number: 2019477 */
#include <pthread.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <ctype.h>
int x=10;

void *myThreadFun(void *vargp) 
{ 
    sleep(2);
    while(x>-90){
        x--;
        printf("\nThread: %d\n",x);
    }
    return NULL; 
} 
   
int main() 
{ 
    pthread_t thread_id;
    pthread_create(&thread_id, NULL, myThreadFun, NULL); 
    while(x<100){
        x++;
        printf("\nParent: %d\n",x);    
    }
    pthread_join(thread_id, NULL); 
    // printf("After Thread\n"); 
    exit(0); 
}
