int findPivot(int arr[], int low, int high){
     if (high < low) 
        return -1; 
    if (high == low) 
        return low; 
  
    int mid = (low + high) / 2;
    if (mid < high && arr[mid] > arr[mid + 1]) 
        return mid; 
  
    if (mid > low && arr[mid] < arr[mid - 1]) 
        return (mid - 1); 
  
    if (arr[low] >= arr[mid]) 
        return findPivot(arr, low, mid - 1); 
  
    return findPivot(arr, mid + 1, high);
}
int binarySearch(int arr[], int low, 
                 int high, int key) 
{ 
    if (high < low) 
        return -1; 
  
    int mid = (low + high) / 2;
    if (key == arr[mid]) 
        return mid; 
  
    if (key > arr[mid]) 
        return binarySearch(arr, (mid + 1), high, key); 
  
    // else 
    return binarySearch(arr, low, (mid - 1), key); 
} 

int search(int A[], int l, int h, int key){
   // cout<<l<<h;
     int m = findPivot(A, 0,h);  
    if (m == -1) 
        return binarySearch(A, 0, h, key); 
    if (A[m] == key) 
        return m; 
   if (A[0] <= key) 
        return binarySearch(A, 0, m - 1, key); 
  
    return binarySearch(A, m + 1, h, key);
}
