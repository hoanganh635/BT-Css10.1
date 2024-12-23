#include<stdio.h>

int main(){
    int array[] ={2,5,6,1};
    int n = sizeof(array)/sizeof(array[0]);
    int a,check = 1;
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
    printf("moi ban nhap vao mot phan tu bat ky");
    scanf("%d",&a);
    for(int i=0;i<n;i++) {
        if ( a == array[i]) {
            check = 0;
            break;
        }
    }

        if (check == 0) {
            printf("%d co trong mang",a);
        }else{
            printf("%d ko co trong mang",a);
        }
    return 0;
}