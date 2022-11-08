#include<stdio.h>
//9*9乘法表
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
 //求出3x4的矩阵中最大元素的值和所在的行号和列号
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
	 printf("下表为:%d %d",x,y);
  } */
  /*
  //编辑计算3x3的矩阵的两条对角线上所有元素之和
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
  	printf("总和等于:%d",sum);
  	return 0;
  	
   } */
   /*输出下列杨辉三角
   1
   1 1
   1 2 1
   1 3 3 1
   1 4 6 4 1
   1 5 10 10 1......
   */
   // 为了和日常习惯相同，定义11行11列，第一行第一列弃用
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
	//输入一个日期，判断该日期是当年的第几天
/*	int main()
	{
		int year,month,day,leap,i;
		int a[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
		printf("输入年-曰-日：");
		scanf("%d-%d-%d",&year,&month,&day);
		leap=(year%4==0&&year%100!=0||year%400==0);
		for(i=1;i<month;i++)
		day+=a[leap][i];
		printf("%d",day);
	
	 } 
  */
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
