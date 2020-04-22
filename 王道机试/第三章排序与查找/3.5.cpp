//二分查找
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn=100;
int arr[maxn];

bool BinarySearch(int n ,int target){
    //二分查找函数
    int left = 0;
    int right=n-1;
    while(left<=right){
        int middle=left+(right-left)/2;
        if(arr[middle]<target){
            left=middle+1;
        }else if(target<arr[middle]){
            right=middle-1;
        }else{
            return true;
        }
    }
    return false;
}

int main(){
    int n ,m;
    while(scanf("%d",&n)!=EOF){
        for(int i = 0 ; i < n ; i++){
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+n);//先排序后查找
        scanf("%d",&m);
        for(int i =0; i < m ; i++){
            int target;
            scanf("%d",&target);
            if(BinarySearch(n,target)){
                    printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
    }
    return 0;
}
