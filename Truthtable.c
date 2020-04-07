#include<stdio.h>
int main(){
    printf("X|Y|Z|X.Y|X.Y+Z"\n");
    for(int x=0;x<2;x++){
        for(int y=0;y<2;y++){
            for(int z=0;z<2;z++){
                int a=x*y+z;
                if(a>1)
                a=1;
                printf("|",x,"|",y,"|",z,"|",x*y,"|"<<a);  
                printf("\n");
            }
        }
    }
    return 0;
}
