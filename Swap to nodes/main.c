#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int i;

    for(i=0; i<8; i++)
    {
        if(i%2==0)
        {
           int tmp1 = arr[i];
           int tmp2 = arr[i+1];
           arr[i] = tmp2;
           arr[i+1] = tmp1;
        }
    }


    for(i=0; i<8; i++)
     {
         printf("%d \n", arr[i]);
     }
    return 0;
}
