#include <stdio.h>
#include <stdlib.h>

#define get_bit(R,b) R=1&(R<<b)
#define set_bit(R,b) R=R|(1<<b)


void convert_decimal_to_binary(int x)
{
    scanf("%d",&x);
    while(x)
    {
        x=x/2;
        if(x%2 != 0)
            print("1");
        else if (x%2 == 0)
            print("0");
    }
}


void find_largest_two_numbers()
{
    int arr[10];
    int i, size;
	int one, two;

	scanf("%d", &size);

	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
    }

	one = two = INT_MIN;

	for (i = 0; i < size; i++)
	{
		if(arr[i] > one)
		{
			two = one;
			one = arr[i];
		}
		else if(arr[i] > two && arr[i] < one)
		{
			two = arr[i];
		}
	}
	printf("the no. 1 is /n =  %d", one);
	printf("the no. 2 is =  %d", two);

}

void pattern (void)
{
          int r=4;
     int c, v, b;

        for(c=r; c>=1; --c)
    {
        for(b=0; b < r-c; ++b)
            printf("  ");
        for(v=c; v <= 2*c-1; ++v)
            printf("* ");
        for(v=0; v < c-1; ++v)
            printf("* ");
        printf("\n");
    }


      for ( c = 1 ; c <= r; c++ )
        {
          for ( v = 1 ; v <= r-c; v++ )
          {
            printf("  ");
          }
          for (b = 1; b <= (2 * c - 1); b++)
          {
        printf("* ");
          }
          printf("\n");
        }

}


void sorting ()
{

        int i, j, a, n, number[o];
        scanf("%d",&o);
        scanf("%d",&n);

        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);

        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (number[i] > number[j])
                {

                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;

            }

            }

        }


}

void Primary ()
{
   int number,m,e,j;
    scanf("%d",&number);
    for(m=1; m<=number; m++)
    {
        e=0;
        for(j=1; j<=number; j++)
        {
            if(m%j==0)
                e++;
        }
        if(e==2)
            printf("%d " ,m);
    }
    getch();
}

void change_bit(R1,R2,b1,b2)
{
    int temp1,temp2;
    printf("which bit u wanna change");
    scanf("%d",&b);    //which bit
    a=get_bit(R1,b);
    b=get_bit(R2,b);

    R1=set_bit()



}
