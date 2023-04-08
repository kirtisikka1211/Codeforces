#include <stdio.h>

int main(){
    int n,m,a;
    scanf("%d %d %d",&n,&m,&a);
    long long int x,y;
    //ex: n=5 m=5 a=4 
    if(n%a==0){
        x=n/a; 
    }
    else{
        x=n/a+1; //2
    }
    if(m%a==0){
        y=m/a;
    }
    else{
        y=m/a+1; //2
    }
    printf("%lld",x*y);
    return 0;



}