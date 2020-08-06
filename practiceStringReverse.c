#include<stdio.h>
int main(){char d[111];int temp,x,y;gets(d);x=0;y=strlen(d)-1;while(x<y){temp=d[x];d[x]=d[y];d[y]=temp;x++;y--;}printf("%s", d);printf("%d", strlen(d));}
