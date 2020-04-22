#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=100;
int arr[maxn];

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        for(int i =0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+n);
        for(int i =0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    return 0;

}
