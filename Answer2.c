#include<stdio.h>

    int rank(int *p, int *q, int k);
    int main{
        int n=1;
        printf("Please type the number of letters in the string\n");
        scanf("%d", n);
        char a[n];
        int i;
        for(i=0;i<n;i++){
            printf("Enter the %d th character\n", i);
            scanf("%s", a[i]);
            }
        char b[n];
        for(i=0;i<n;i++){
            printf("Enter the %d th character\n", i);
            scanf("%s", b[i]);
            }
        i=rank(&a[0],&b[0], n);
        printf("The rank is %d\n", i);
        return 0;

        }

    int rank( p, q, k){
        int j;
        char c[k];
        for(j=1, j<k, j++){
            int t=0;
            c[j]=*p;
            t++;
           if(c[j]>*(p+t)){
                c[j]=*(p+t);}
            else{
                c[j]=c[j];
            }
           } }
        }
