#include<iostream>
void bubbleSort(int* arr,int n)
{
    for (int i=0;i<n;i++)
    {
        bool swapped = false;
        for (int j=0;j<n-1,j++)
        {
            if(arr[j]>arr[j+1])
            {
                std::swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
        break;
    }
}
int main()
{
    int a;
    std::cout<<"Enter the size of the array :";
    std::cin>>a;
    std::cout<<"Enter the elements of the array:"<<std::endl;
    int arr[n];
    for(int i=0;i<a;i++)
    {
        std::cin>>arr[i];
    }
    std::cout<<"The Array is:"<<std::endl;
    for(int i=0;i<a;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    bubbleSort(arr,n);
    std::cout<<"The Sorted Array is:"<<std::endl;
     for(int i=0;i<a;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}