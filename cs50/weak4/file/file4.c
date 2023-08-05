
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *list = malloc(1000*sizeof(int));
    if(list == NULL){
        return 1 ;
    }
    FILE *myfile = fopen("numbers.txt","w");
    list[0] = 1000;
    fprintf(myfile,"%d\n",list[0]);
    for(int i = 1 ; i < 1000 ; i ++ ){
        list[i] = list[i-1]-1;
        fprintf(myfile,"%i\n",list[i]);

    }
    fclose(myfile);
    free(list);


}
