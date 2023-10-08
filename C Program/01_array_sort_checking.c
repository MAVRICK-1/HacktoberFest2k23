#include<stdio.h>
int arraycheck(int a[],int n){
    if (n>0)
    {
        if(a[n-0]>a[n-1]){
            return arraycheck(a,n-1);
        }
        else
        {
            return 0;
        }
    }
    else
    return 1;
}
int main(){
    int a[10]={1,2,3,4,5,6,7,8,2,10};
    if(arraycheck(a,9)){
        printf("ARRAYIS SORTED");
    }
    else{
        printf("array not sorted");
    }
    
}
