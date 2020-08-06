#include<stdio.h>
int main(){
    int column;
    int row;
for(column=1;column<10;column++){
   for (row=1;row<column;row++){
        printf("*",row);
    }
    printf("*\n",column);
}

}
