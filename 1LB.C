#include<stdio.h>
#include<conio.h>
void main()
{
	int unit;
	float bill,gst,tbill;
	clrscr();
	printf("\n Enter unit=");
	scanf("%d",&unit);
	if (unit<=50)
	{
		bill=unit*.50;
	}
	else
	{
		if (unit>=51 && unit<=150)
		{
			bill=(unit-50)*.75+25;
		}
		else
		{
			if(unit>=151 && unit<=250)
			{
				bill=(unit-150)*1.20+100;
			}
			else
			{
				if(unit>=250)
				{
					bill=(unit-250)*1.50+120+100;
				}
			}

		}
	}

	gst=(float) bill*.20;
	tbill=(float) bill+gst;
	printf("\n ans=%.1f",bill);
	printf("\n gst=%.1f",gst);
	printf("\n tbill=%.1f",tbill);
	getch();
}






