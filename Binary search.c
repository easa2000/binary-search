//Binary Search

#include<stdio.h>
void main(){
    int A[20], i, mid, beg, end, n, pos=-1, found=0,num;
    printf("\n Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("\n Enter the elements in Ascending order: ");
    for(i=0;i<n;i++){
        printf("\n Enter %d element: ",i+1);
        scanf("%d",&A[i]);
    }

    printf("\n Enter the element to be search: ");
    scanf("%d",&num);

    beg = 0, end = n - 1;
    while(beg<=end)
    {
        mid = (beg + end) / 2;
        if(A[mid] == num){
            printf("\n %d is present in the array at position = %d",num,mid);
            found = 1;
            break;
        }else if(A[mid] > num){
            end = mid - 1;
        }else{
            beg = mid + 1;
        }
    }
    if(beg > end && found == 0){
        printf(" %d is does not exist in the array",num);
    }
}
