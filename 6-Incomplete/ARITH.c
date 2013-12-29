#include<string.h>
#include<stdio.h>

int main(){

        int t;
        char str[1002]="1234+5678";
        char *a;
        char *b;

        scanf("%d",&t);

        while(t>0){

          scanf("%s",str);

          a = strtok(str,"+-*");
          b = strtok(NULL,"+-*");
  
          printf("%s , %s\n",a,b);

        t--;
        }

return 0;
}

