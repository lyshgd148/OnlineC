#include <stdio.h>
#include <string.h>



int *FMax(int *a,int num){
    int count[2]={a[0]};
    for (int i=0; i<num; i++) {
        if (*(a+i)>count[0]){
            count[0]=*(a+1);
            count[1]=i+1;
        }
    }
return count;
}

int main(void) {


    int a[4]={1,34,56,7};
    int num[2];
    num=FMax(a,4);
    printf("%d,%d",num[0],num[1]);

}
