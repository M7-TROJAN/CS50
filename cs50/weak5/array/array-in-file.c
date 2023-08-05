
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *list = malloc(1001*sizeof(int));
    if(list == NULL){
        return 1 ;
    }
    int *tmp = malloc(5001*sizeof(int));
    if(tmp == NULL){
        free(list);
        return 1;
    }
    for(int i = 0 ; i < 1001 ; i++){
        list[i] = i;
        tmp[i] = list[i];

    }
    for(int i = 101 ; i < 5001 ; i++){
        tmp[i]= i ;
    }
    free(list);
    list = tmp;
    FILE* myfile=fopen("list.txt","w");
    for(int i = 0 ; i < 5001 ; i ++){
        fprintf(myfile,"%d\n",list[i]);
    }
    fclose(myfile);
    free(list);




}
