#include <stdio.h>


void Sort(int scores[], int SIZE){   
    int i,j,tmp;
    
    for (i=0; i<SIZE; i++){
        for(j=i+1; j<SIZE; j++){
            if(scores[i] < scores[j]){
                tmp = scores[i];  
                scores[i] = scores[j];
                scores[j] = tmp;
            }
        }
    }
}

void Origin(int scores[], int SIZE){       
    int i;
    printf("scores = ");
    for (i=0; i< SIZE; i++){
        printf("%d ", scores[i]);
    }
    printf("\n");
    
}

void Print(int scores[], int SIZE){    
    int i;
    printf("results = ");
    for (i=0;i<SIZE;i++){
        printf("%d ",scores[i]);
        
    }
    printf("\n");
}

int main(){
    const int SIZE = 6;                           
    int scores[SIZE] = {100,60,70,100,90,80};
    Origin(scores,SIZE);
    Sort(scores,SIZE);
    Print(scores,SIZE);
    return 0;
}