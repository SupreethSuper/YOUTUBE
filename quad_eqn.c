#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// root = -b+-root(b2 -4ac)
int main()
{
	int det;
	float root,root1,img,a,b,c;
	printf("enter the co-efficients ordely\n");
	scanf("%f%f%f",&a,&b,&c);
	if((a==0)&&(b==0))
	{
		printf("invalid coefficients\n");
		main();
	}
	
	else if(a==0)
	{
		printf("linear eqn\n");
		root = b/c;
		printf("the root of the eqn is %0.3f\n",root);
		
	}
	
	else
	{
		printf("quad eqn\n");
		det = (b*b) - (4*a*c);//linux - >pow(b,2)
		if(det == 0)
		{
			printf("roots are real and equall\n");
			root = -((b*b) + (sqrt(det)))/(2 *a);
			printf("the roots are %0.3f and %0.3f",root,root);
		}
		if(det>0)
		{
			printf("roots are real and unequall\n");
			root = -((b*b) + (sqrt(det)))/(2 *a);
			root1 = root = -((b*b) - (sqrt(det)))/(2 *a);
			printf("the roots are %0.3f and %0.3f\n",root,root1);
			
		}
		if(det<0)
		{
			printf("roots are imaginary\n");
			det = fabs(det);
			root = -((b*b))/(2*a);
			img = det/(2*a);
			printf("the roots are %0.3f %0.3fi and %0.3f %0.3fi\n\n",root,img,root,((-1)*img));
		}
	}
	return 0;
}