// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
        int lt=(2*i+1);
        int rt=(2*i+2);
        int largest=i;
        if(lt<n && arr[lt]>arr[largest])
            largest=lt;
        if(rt<n && arr[rt]>arr[largest])
            largest=rt;
        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
        for(int i=(n-2)/2;i>=0;i--){
            heapify(arr,n,i);
        }
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
        for(int i=n-1;i>=0;i--){
            swap(arr[i],arr[0]);
            heapify(arr,i,0);
        }
    }
};