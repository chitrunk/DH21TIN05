#include <stdio.h>
#include <math.h>
bool KTNT(int n)
{
	if (n <= 1) return false;
	for(int i = 2; i <= n; i++)
	{
		if(n % i == 0) return false;
	}
	return true;
}
int main(){
	int n;
	scanf("%d",&n);
	int ans = 0;
	for (int i = n; i != 0; i /= 10)
	{
		if(KTNT(i))
		{
			ans++;
		}
		
	}
	printf("chan : %d\n",ans);
}
              
                           