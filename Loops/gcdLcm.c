#include<stdio.h>
int main()
{
	int p,q,gcd,lcm,r=1,prod,t;
	printf("Enter two numbers\n");
	scanf("%d%d",&p,&q);
	if(q>p)
	{ /* if second number is greater than first number then interchange them */
		t=p;
		p=q;
		q=t;
	}
	prod=p*q;
	while(r!=0)
	{
		r=p%q;
		if(r==0)
		{ /* If remainder is 0 then q is our gcd*/
			gcd=r;
			break;
		}
		else
		{ /* If remainder is non zero then assign new values to p and q */
			p=q;
			q=r;
		}
	}
	lcm=prod/gcd;
	printf("GCD= %d\nLCM=%d\n",gcd,lcm);
	return 0;
}

