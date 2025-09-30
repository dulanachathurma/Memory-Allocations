#include<stdio.h>
#include<stdlib.h>
int main(){
int *point= (int*)malloc(10*sizeof(int));
for(int i=0;i<10;i++){
*(point+i)=i;
}
for(int i=0;i<10;i++){
printf("%d\t",point[i]);
}
return 0;
}
