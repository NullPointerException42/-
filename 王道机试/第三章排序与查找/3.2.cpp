#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

struct Student{
    int number;
    int score;
};
const int maxn=100;

Student arr[maxn];

bool cmp(Student x,Student y){
    if(x.score==y.score){
        return x.number<y.number;
    }else{
    return x.score<y.score;
    }
}

int main(){
    int n ;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d %d",&arr[i].number,&arr[i].score);
    }
    sort(arr,arr+n,cmp);
    for(int i =0;i<n;i++){
        printf("%d %d\n",arr[i].number,arr[i].score);
    }
    return 0;
}
