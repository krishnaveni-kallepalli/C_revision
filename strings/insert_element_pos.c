#include<stdio.h>

#define size 5
void fun(int *p,int pos,int element)
{
        int i;
    if(pos <= size && pos >= 0)
    {
        for(i = size; i > pos; i--)
            *(p+i) = *(p+i-1);
        *(p+pos) = element;
        for(i = 0; i <= size; i++)
            printf("%d ", *(p+i));
    }
    else
        printf("Invalid Position\n");
}
int main()
{
    int arr[size] = {1, 20, 5, 78, 30};
    int element, pos, i,*p;
    p=arr;
    printf("Enter position and element\n");
    scanf("%d%d",&pos,&element);
    void (*fp)(int *,int,int)=fun;
    fp(arr,pos,element);
    
    return 0;
  }
