## Searching


 **Linear Search**
                              
	int linearSearch(int arr[], int n, int x){
	    for(int i=0; i<n; i++){
	        if(arr[i] == x)
	            return i;
	    }
	    return -1;
	}

**Binary Search** 
>  Recursive Methd

	 int binarySearch(int arr[], int l, int r, int x){
	    if(l <= r){
	        int mid = l + (r-l) /2;
	        
	        if(mid == x) return x;
	        
	        if(arr[mid] < x)
	            return binarySearch(arr, mid+1, r, x);
	        
	        if(arr[mid] > x)
	            return binarySearch(arr, l, mid-1, x);
	    }
	    return -1;
	}

> Iterative Method

	int binarySearch(int arr[], int l, int r, int x){
	    if(l <= r){
	        int mid = l + (r-l) /2;
	        
	        if(mid == x) return x;
	        
	        if(arr[mid] < x)
	            l = mid+1;
	        
	        if(arr[mid] > x)
	            r = mid-1;
	    }
	    return -1;
	}

**Ternary Search**
> Recursive Method

	int ternarySearch(int arr, int l, int r, int x){
	    if(l <=r){
	        int mid1 = l + (r-l) / 3;
	        int mid2 = r - (r-l) / 3;
	        
	        if(mid1 == x) return mid1;
	        
	        if(mid2 == x) return mid2;
	        
	        if(x < arr[mid1])
	            return ternarySearch(arr, l, mid1-1, x);
	        else if(x > arr[mid2])
	            return ternarySearch(arr, mid2+1, r, x);
	        else
	            return ternarySearch(arr, mid1+1, mid2-1, x);
	    }
	    return -1;
	}

> Iterative Method

	int ternarySearch(int arr, int l, int r, int x){
	    if(l <=r){
	        int mid1 = l + (r-l) / 3;
	        int mid2 = r - (r-l) / 3;
	        
	        if(mid1 == x) return mid1;
	        
	        if(mid2 == x) return mid2;
	        
	        if(x < arr[mid1])
	            r = mid1 - 1;
	        else if(x > arr[mid2])
	            l = mid2 + 1;
	        else
	            l = mid1 + 1;
	            r = mid2 - 1;
	    }
	    return -1;
	}
	
**Binary Search Functions in c++ STL**
The C++ standard template library have some built-in functions that can be used to perform Binary Search operation directly on a sequential list or container.  
		  
	Some of these functions are:  

	-   binary_search()
	-   upper_bound()
	-   lower_bound()
	
> binary_search() On Vector

	#include<bits/stdc++.h> 
	using namespace std; 
	int main(){
	    vector<int> vec = {10,20,30,40,50};
	    if(binary_search(vec.begin(), vec.end(), 15)){
	        cout << "yes";
	    }else{
	        cout << "no";
	    }
	    cout << endl;
	}

> binary_search() On Array

		#include<bits/stdc++.h> 
		using namespace std; 
		int main(){
		    int arr[] = {10,20,30,40,50};
		    int n = sizeof(arr)/sizeof(arr[0]);
		    if(binary_search(arr, arr+n, 40)){
		        cout << "Present in array";
		    }else{
		        cout << "Not present in Array";
		    }
		    cout << endl;
		}

> upper_bound() on Vector

	#include<bits/stdc++.h> 
	using namespace std; 
	int main(){
	    vector<int> vec = {10,20,30,40,50};
	    vector<int>::iterator upper1, upper2;
    
	    upper1 = upper_bound(vec.begin(), vec.end(), 35); 
	    upper2 = upper_bound(vec.begin(), vec.end(), 45);
	    
	    cout << upper1 - vec.begin() << endl;
	    cout << upper2 - vec.begin();
	
	}


> upper_bound() on Array

	#include<bits/stdc++.h> 
	using namespace std; 
	int main(){
	    int arr[] = {10,20,30,40,50};
	    int n = sizeof(arr)/sizeof(arr[0]);
	    
	    int upper1 = upper_bound(arr, arr+n, 35) - arr; 
	    int upper2 = upper_bound(arr, arr+n, 45) - arr;
	    
	    cout << upper1 << endl;
	    cout << upper2 ;
	    
	}


> lower_bound() on Vector

	#include<bits/stdc++.h> 
		using namespace std; 
		int main(){
		    vector<int> vec = {10,20,30,40,50};
		    vector<int>::iterator upper1, upper2;
	    
		    lower1 = lower_bound(vec.begin(), vec.end(), 35); 
		    lower2 = lower_bound(vec.begin(), vec.end(), 45);
		    
		    cout << lower1 - vec.begin() << endl;
		    cout << lower2 - vec.begin();
		
		}

> lower_bound() on Array

	#include<bits/stdc++.h> 
		using namespace std; 
		int main(){
		    int arr[] = {10,20,30,40,50};
		    int n = sizeof(arr)/sizeof(arr[0]);
		    
		    int lower1 = lower_bound(arr, arr+n, 35) - arr; 
		    int lower2 = lower_bound(arr, arr+n, 45) - arr;
		    
		    cout << lower1 << endl;
		    cout << lower2 ;
		    
		}


