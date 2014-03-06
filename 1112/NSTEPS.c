/*

http://www.spoj.com/problems/NSTEPS/

*/

int calcXY(int a,int b){

    if(a%2==0)    return a+b;
    return a+b-1;

}

int checkValid(int a,int b){
  if(a==b)  return 1;
  if((a-b)==2)  return 1;
  return 0;
}

int main(){

int a = 6;

int b = 6;

if(!checkValid(a,b))    printf("No Number");

else    printf("%d",calcXY(a,b));

return 0;
}
