#include <stdio.h>

int main() {

	int big=0,end=8,n,num=3,flag=0;
	int a[]= {1,2,3,8,9,10,14,17,20};
	while(big<=end) {
	int mid=(big+end)/2;
		if(a[mid]==num) {
			printf("Number founded at index = %d ",mid+1);
		flag=1;
		break;      
		}
		if(a[mid]>=num) {
		      end=mid-1;
		}
		if(a[mid]<=num) {
		      big=mid+1;
		}
	}
      if(flag==0)
      printf("Not Founded");
	return 0;
}