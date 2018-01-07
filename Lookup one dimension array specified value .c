#include <stdio.h>
int ss(int m);
int main (){
	int i,n,b, a[1000];
	int k=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{if(a[i]==b)
{
	printf("%d ",i);
	k=0;}
	}
	ss(k);
	
	
	return 0;
	
}
 int ss(int m){
	if(m==-1)
	printf("-1");
	return 0;
}

