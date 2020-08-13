#include <iostream>

long long lcm_fast(long  max, long min)
    {

        long long lcm , hcf;
        lcm=1;
        long j, t ;
        long long max1 = max,min1 = min;
        if(max%min==0)
        {
            lcm = max;
        }
        else
        {
            while(min!=0)
            {
                t=min;
                min = max%min;
                max=t;
            }
            hcf=max;

            if(hcf==1)
            {
                lcm=max1*min1;
            }
            else
            {
                for( j=2 ; j <=max1;)
                {
                        if(max1%j==0 && min1%j==0)
                        {
                            lcm=lcm*j;
                            max1=max1/j;
                            min1=min1/j;
                        }

                        else
                        {
                            j++;
                        }

                }
                lcm = lcm*max1*min1;
                }
            }
        return lcm;
        return 0;
    }

int main()
{
  long  a, b;
  std::cin >> a >> b;
  int max,min;
    if(a>=b)
    {
        max = a;
        min = b;
    }
    else
    {
        max=b;
        min=a;
    }
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}

