#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
    int judge;
    int count=0;

    srand((unsigned int)time(NULL));

    printf("Tossing a coin...\n");

    for(int i=0 ; i<3 ; i++){
        judge = rand();
        if(judge%2 == 0){
            printf("Round %d: Heads\n",i+1);
            count++;
        }
        else {
            printf("Round %d: Tails\n",i+1);
        }
    }

    printf("Heads: %d, Tails: %d\n",count,3-count);

    if(count>=2)printf("You won\n");
    else printf("You lost\n");
}