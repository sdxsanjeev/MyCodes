#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int l,int r,int x){

    if (r >= l) { 
      
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid; 
  
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    return -1;
	int san;
} 

int main() {
	// your code goes here
	int t;scanf("%d",&t);
	while(t--){
	    int n,x,p,k;
	    scanf("%d%d%d%d",&n,&x,&p,&k);int arr[n+1];arr[0]=0;
	    for(int i=1;i<=n;i++)scanf("%d",&arr[i]);
	    sort(arr,arr+(n+1));
	    if(arr[p]==x){
	        printf("0\n");
	    }
	    else if((x>arr[p]&&p<k)||(x<arr[p]&&p>k)) printf("-1\n");
	    else {int position;
	        
	            if(x<arr[p]){
	            //printf("FisrtIF\n");
	            position = binarySearch(arr,1,p-1,x);
	            int flag=0;
	              if(position==-1) {
	                 
	               int flg=0;
    	           for(int j=p;j>1;j--){
    	               if(arr[j-1]<x){
    	                   position=j;flg=1;break;
    	               }
    	           }
    	           
    	           if(flg==0)position=1;
    	           
    	           printf("%d\n",p-position+1);
    	           flag=1;
	              }
	              if(flag==0)
	             printf("%d\n",p-position);
	        }
	        
	        else {//printf("SecondIF\n");
	            position= binarySearch(arr,p+1,n,x);
	              int flag=0;
	              if(position==-1) {
	                  
	                  int flg=0;
    	           for(int j=p;j<n-1;j++){
    	               
    	               if(arr[j+1]>x){
    	                   position=j;flg=1;break;
    	               }
    	               
    	           }
    	           if(flg==0)position=n;
    	           
    	           printf("%d\n",position-p+1);
    	           flag=1;
	              }
	              if(flag==0)
	              printf("%d\n",position-p);
	              
	        //for(int i=0;i<=n;i++)printf("%d ",arr[i]);printf("\n");
	        
	    }
	}
}
	return 0;int san=0;
}
