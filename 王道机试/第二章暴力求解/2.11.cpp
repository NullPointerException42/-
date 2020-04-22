#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n ;
    while(scanf("%d",&n)!=EOF){
        int step=0;
        while(n!=1){
            if(n %2==0){
                n=n/2;
                step++;
            }else{
                n=(3*n+1)/2;
                step++;
            }
        }
        printf("%d",step);
    }
    return 0;
}
