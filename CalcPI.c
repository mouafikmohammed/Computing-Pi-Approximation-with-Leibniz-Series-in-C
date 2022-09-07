#include <stdio.h>
#include <stdlib.h>

double leibniz(int n);
int set_input();
void show(double pi,int n);

int main ()
{
    int n; double pi;
    n = set_input();
    pi = leibniz(n);
    show(pi,n);
    return 0;
}

double leibniz(int n){
    double pi=0;
    for(int i=1; i <= n; i++){
        if(i%2 == 0){
            pi=pi-1.0/(i*2-1);
        }else{
            pi=pi+1.0/(i*2-1);
        }
    }
    return pi  * 4;
}

int set_input() {
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    return n;
}

void show(double pi, int n){
    printf("n= %d Pi= %.50lf",n,pi);
}






