 #include<stdio.h>
int partion(int part[],int low,int high){
    int pivot=part[low];
    int i=low+1;
    int j=high;
    do{
        while(part[i]<=pivot){
            i++;
        }
        while(part[j]>pivot){
            j--;
        }
        if(i<j){
            int temp=part[i];
            part[i]=part[j];
            part[j]=temp;
        }
    }while(i<j);
     int temp=part[low];
     part[low]=part[j];
     part[j]=temp;
     return j;
}
void quicksort(int sort[],int low,int high){
    int partionPoint;
    if(low<high){
        partionPoint = partion(sort,low,high);
        quicksort(sort,low,partionPoint-1);
        quicksort(sort,partionPoint+1,high);
    }
}
int main(){
    int n;
    printf("Enter the length of Array:-\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter your Array elements:-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    printf("Your Sorted Array is:-\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
