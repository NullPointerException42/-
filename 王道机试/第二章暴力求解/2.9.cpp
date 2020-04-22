#include<iostream>
#include<cstdio>

const int maxn=10001;
bool arr[maxn];

int main(){
    int l,m;
    while(scanf("%d %d",&l,&m)!=EOF){
        for(int i =0 ; i<=l;i++){
            arr[i]=true;
        }
        int number=l+1;
        while(m--){
            int left,right;
            scanf("%d %d",&left,&right);
            for(int i=left;i<=right;i++){
                if(arr[i]){
                    arr[i]=false;
                    number--;
                }
            }
        }
        printf("%d",number);

    }
    return 0;
}
