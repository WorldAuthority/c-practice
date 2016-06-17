/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>

typedef struct buy
{  char  gname;/* 商品名称 */
   int   sname;/* 商店名称 */
   int   gprice;/* 商品价格 */
} BUY;
int main( )
{  int i, j, n;
   int min, price[10][3];
   int findm( int n, int price[][3], BUY scheme[] );

   static BUY scheme[3]={ {'A', 0, 0}, {'B', 0, 0}, {'C', 0, 0} };

   scanf( "%d", &n );
   for( i = 0; i < n; i++ )
	for( j = 0; j < 3; j++ )//A0 B1 C2
	   scanf( "%d", &price[i][j] );

   min = findm( n, price, scheme );

   printf("Total Money are : %d\nGoods-Name  Shop-Name  Goods-Price\n", min );
   for ( i=0; i < 3; i++ )
       printf("         %c:%10d%13d\n", scheme[i].gname, scheme[i].sname, scheme[i].gprice );
   return 0;
}
int findm( int n, int price[][3], BUY scheme[] )
{
	int min=10000,i,j,k,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==i)
			continue;
			for(k=0;k<n;k++)
			{
				if(k==j||k==i)
				continue;
				temp=price[i][0]+price[j][1]+price[k][2];
				if(temp<min)
				{
					min=temp;
					scheme[0].sname=i+1;
					scheme[1].sname=j+1;
					scheme[2].sname=k+1;
					scheme[0].gprice=price[i][0];
					scheme[1].gprice=price[j][1];
					scheme[2].gprice=price[k][2];
				}
			}
		}
	}
	return min;
}

