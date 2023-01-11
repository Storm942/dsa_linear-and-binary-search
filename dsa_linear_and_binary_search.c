#include<stdio.h>
int linearsearch(int arr[],int size,int element){
    for(int i=0;i<arr[i];i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
    printf("\n");
}

int binarysearch(int arr[],int size,int element){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]<element){
            low=mid+1;
        }
        else{
        high=mid-1;
    }
}
}

int main()
{
    int arr[]={1,5,8,18,4};
    int size=sizeof(arr)/sizeof(int);
    int element=18;
    int bdx=binarysearch(arr,size,element);
    printf("The element %d was found at index %d",element,bdx);
    
    return 0;
}