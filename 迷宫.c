#include <stdio.h>
typedef struct Pos{
	int i, j;
}pos;
pos start;
int n, m,xlengh=1,ylengh=1;
int dir[4][2] = { 1, 0, -1, 0, 0, -1, 0, 1 };
char input[1501][1501];
short flag[1501][1501];

int  dfs(int x, int y){
	pos current;
	flag[x][y] = 1;
	for (int i = 0; i < 4; i++)
		{
			current.i = x + dir[i][0];
			current.j = y + dir[i][1];
			if (current.i>=n)
				current.i = current.i%n;
			else if (current.i<0)
				current.i += n;
			if (current.j>=m)
				current.j = current.j%m;
			else if (current.j < 0)
				current.j += m;
			if (i == 0 || i == 1){
				if ((current.i == start.i) && (current.j == start.j) && ylengh >= n&&n!=1)
					return 1;
			}
			else if ((current.i == start.i) && (current.j == start.j) && xlengh >=m&&m!=1)
				return 1;
		   
			if ((flag[current.i][current.j] == 0)&&(input[current.i][current.j]!='#'))
				{
					if (i==0||i==1)
					ylengh++;
					if (i == 2 || i == 3)
						xlengh++;
 				if(dfs(current.i, current.j)==1)
					return 1;
				if (i == 0 || i == 1)
					ylengh--;
				if (i == 2 || i == 3)
					xlengh--;
					
				}
		}
	return 0;
}
int main(){
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", input[i]);
		for (int j = 0; j < m; j++){
			flag[i][j] = 0;
			if (input[i][j] == 'S')
			{
				start.i = i;
				start.j = j;
			}
		}
	}
	if (n == 1 && m == 1)
	{
		printf("No\n");
		return 0;
	}
	if (dfs(start.i, start.j) == 1)
		printf("Yes\n");
	else printf("No\n");
	return 0;
}

