#include <stdio.h>

int main()
{
    // qus 1
    for(int i=1;i<=7;i++){
        printf("* ");
    }
    printf("\n");
    for(int i=1;i<=7;i++){
        printf("* ");
    }
    printf("\n");
    for(int i=1;i<=7;i++){
        printf("* ");
    }
     printf("\n");
    for(int i=1;i<=7;i++){
        printf("* ");
    }
  
//    qus 2
    int i;
    int num=6;
    int sumeven ;
    int sumodd;
    
    for(i=1;i<=num;i++){
        if(i%2 == 0){
            printf("%d",i);
        }
        else if(i%2 != 0){
            printf("%d",i);
        }
        else{
            printf("no");
        }
        
        
    }

    return 0;
}