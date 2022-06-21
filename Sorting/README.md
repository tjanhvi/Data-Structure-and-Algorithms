## Sorting

**Sorting** any sequence means to arrange the elements of that sequence according to some specific criterion.

**In-Place Sorting**: An in-place sorting algorithm uses constant extra space for producing the output (modifies the given array only). It sorts the list only by modifying the order of the elements within the list.

	three of such in-place sorting algorithms, namely:  
	-   Insertion Sort
	-   Selection Sort
	-   Bubble Sort

**Insertion Sort**
Insertion Sort is an In-Place sorting algorithm. This algorithm works in a similar way of sorting a deck of playing cards.  
  
The idea is to start iterating from the second element of array till last element and for every element insert at its correct position in the subarray before it.

	void insertionSort(int arr[], int n){
	    for (int i=1; i<n; i++) {
	        int key = arr[i];
	        int j = i-1;
	        while(j >=0 && arr[j] > key){
	            arr[j+1] = arr[j];
	            j--;
	        }
	        arr[j+1] = key;
	    }
	}

**Time Complexity**: O(N2), where N is the size of the array.

**Bubble Sort**
Bubble Sort is also an in-place sorting algorithm. This is the simplest sorting algorithm and it works on the principle that:  

> In one iteration if we swap all adjacent elements of an array such that after swap the first element is less than the second element then at the end of the iteration, the first element of the array will be the minimum element.

	void bubbleSort(int arr[], int n){
	    for(int i=0; i<n-1; i++){
	        swapped = false;
	        for(int j=0; j<n-1-i; j++){
	            if(arr[j] > arr[j+1]){
	                swap(arr[i], arr[i+1]);
	                swapped = true;
	            }
	        }
	        if(swapped == false)
	            break;
	    }
	}

**Time Complexity**: O(N2)

**Selection Sort**

The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.  

1.  The subarray which is already sorted.
2.  Remaining subarray which is unsorted.
  
In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.

	void selectionSort(int arr[], int n){
	    for(int i=0; i<n; i++){
	        int min_val = i;
	        for(int j=i+1; j<n; j++)
	            if(arr[j] < arr[min_val])
	                min_val = j;
	                
	        swap(arr[min_val], arr[i]);
	    }
	}


**Time Complexity**: O(N2)
