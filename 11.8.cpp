#include<stdio.h>
//9*9�˷���
/*int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
	for(j=1;j<=i;j++)
	printf("%d*%d=%d ",j,i,i*j);
	printf("\n");	
}
	
 }*/
 //���3x4�ľ��������Ԫ�ص�ֵ�����ڵ��кź��к�
 /*int main()
 {
 	int i,j,x,y,max;
 
 	int arr[3][4]={{12,23,45,67},{1,2,3,4},{5,6,7,99}};
 	for(i=0;i<3;i++)
 	{
	 for(j=0;j<4;j++)
	 printf("%3d",arr[i][j]);
	 printf("\n");
}

    max=arr[0][0];
    	for(i=0;i<3;i++)
	 for(j=0;j<4;j++)
 	if(arr[i][j]>max)
 	{
 		max=arr[i][j];
 		x=i;y=j;
	 }
	 printf("�±�Ϊ:%d %d",x,y);
  } */
  /*
  //�༭����3x3�ľ���������Խ���������Ԫ��֮��
  int main()
  {
  	int a[3][3]={1,2,3,4,5,6,7,8,9};
  	int i,j,sum=0;
  	for(i=0;i<3;i++)
  	{
	for(j=0;j<3;j++)
  	printf("%d\t",a[i][j]);
  	printf("\n");
	}
  	for(i=0;i<3;i++)
  	for(j=0;j<3;j++)
  	if(i==j||i+j==2)
  	sum+=a[i][j];
  	printf("�ܺ͵���:%d",sum);
  	return 0;
  	
   } */
   /*��������������
   1
   1 1
   1 2 1
   1 3 3 1
   1 4 6 4 1
   1 5 10 10 1......
   */
   // Ϊ�˺��ճ�ϰ����ͬ������11��11�У���һ�е�һ������
/*#define N 11
   int main()
   {
   	int a[N][N];
   	int i,j;
   	for(i=1;i<N;i++)
   	{
	a[i][1]=a[i][i]=1;
	for(j=2;j<i;j++)
	a[i][j]=a[i-1][j]+a[i-1][j-1];
}
   for(i=1;i<N;i++)
   {
   for(j=1;j<=i;j++)
   printf("%3d ",a[i][j]);
   
   printf("\n");
}
   	return 0;
	} */
	//����һ�����ڣ��жϸ������ǵ���ĵڼ���
/*	int main()
	{
		int year,month,day,leap,i;
		int a[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
		printf("������-Ի-�գ�");
		scanf("%d-%d-%d",&year,&month,&day);
		leap=(year%4==0&&year%100!=0||year%400==0);
		for(i=1;i<month;i++)
		day+=a[leap][i];
		printf("%d",day);
	
	 } 
  */
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
