
/*

#####   DO WHILE LOOP  #####

*/

// 1.1 : WAP to Print 1 to 10 using do while loop.

#include <stdio.h>

int main()

{
  int i=1;
  
  do
  {
    printf("%d\n",i);
    i++;
  }
  while (i<=10);
  
return 0;
}

/*

Output :

1
2
3
4
5
6
7
8
9
10

*/

// 1.2 : WAP to Print 10 to 1 using do while loop.

#include <stdio.h>

int main()

{
  int i=10;
  
 do
  {
    printf("%d\n",i);
	i--;
  } 
  while (i >= 1);
return 0;
}


/*

Output :

10
9
8
7
6
5
4
3
2
1


*/

// 1.3 : WAP to Print 1 to N using do while loop.

#include <stdio.h>

int main()

{
  int i=1,n;
  printf("Enter the Number :");
  scanf("\n %d", &n);
  
  
  
  do
  {
    printf("%d\n",i);
	i++;
  }
  while (i<= n);

return 0;

}

/*

Output :

Enter the Number :5
1
2
3
4
5

*/

// 1.4 WAP to Print N to 1 using do while loop.

#include <stdio.h>

int main()
{
    int n;

  
    printf("Enter value of n: ");
    scanf("%d", &n);

    do
    {
        printf("%d\n", n);
        n--;
    }
	 while(n>=1);

    return 0;
}

/*

Output :

Enter value of n: 5
5
4
3
2
1
*/

// 1.5 WAP to print odd no. from 1 to N using do while loop.

#include <stdio.h>

int main()
{
	
	int number =1, n;
	
	printf("Enter the value of N: ");
	scanf("%d",&n);

	printf("Odd Numbers from 1 to %d:\n",n);

	do
	{
		
		if(number%2 != 0)
			printf("%d ",number);
		
		
		number++;
	}
	while(number<=n);

	return 0;
}

/*

Output :

Enter the value of N: 10
Odd Numbers from 1 to 10:
1 3 5 7 9 

*/

// 1.6 WAP to print even no. from 1 to N using do while loop.

#include <stdio.h>

int main()
{
	int  n;

	printf("Enter the value of N: ");
	scanf("%d",&n);

	printf("Even Numbers from 1 to %d:\n",n);

	do
	{
		
		if(n%2 == 0)
		{
			printf("%d ",n);
		}
		n--;
	}
    while(n>=1);
	return 0;
}

/*

Output :

Enter the value of N: 20
Even Numbers from 1 to 20:
20 18 16 14 12 10 8 6 4 2 

*/

// 1.7 : WAP to Find leap year from 2000 to 3000 using do while loop.

#include <stdio.h>

int main() {
    int year = 2000;

   do
	{
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d\n", year);
        }
        year++;
    }
	 while (year <= 3000);

    return 0;
}

/*

Output :

2000
2004
2008
2012
2016
2020
2024
2028
2032
2036
2040
2044
2048
2052
2056
2060
2064
2068
2072
2076
2080
2084
2088
2092
2096
2104
2108
2112
2116
2120
2124
2128
2132
2136
2140
2144
2148
2152
2156
2160
2164
2168
2172
2176
2180
2184
2188
2192
2196
2204
2208
2212
2216
2220
2224
2228
2232
2236
2240
2244
2248
2252
2256
2260
2264
2268
2272
2276
2280
2284
2288
2292
2296
2304
2308
2312
2316
2320
2324
2328
2332
2336
2340
2344
2348
2352
2356
2360
2364
2368
2372
2376
2380
2384
2388
2392
2396
2400
2404
2408
2412
2416
2420
2424
2428
2432
2436
2440
2444
2448
2452
2456
2460
2464
2468
2472
2476
2480
2484
2488
2492
2496
2504
2508
2512
2516
2520
2524
2528
2532
2536
2540
2544
2548
2552
2556
2560
2564
2568
2572
2576
2580
2584
2588
2592
2596
2604
2608
2612
2616
2620
2624
2628
2632
2636
2640
2644
2648
2652
2656
2660
2664
2668
2672
2676
2680
2684
2688
2692
2696
2704
2708
2712
2716
2720
2724
2728
2732
2736
2740
2744
2748
2752
2756
2760
2764
2768
2772
2776
2780
2784
2788
2792
2796
2800
2804
2808
2812
2816
2820
2824
2828
2832
2836
2840
2844
2848
2852
2856
2860
2864
2868
2872
2876
2880
2884
2888
2892
2896
2904
2908
2912
2916
2920
2924
2928
2932
2936
2940
2944
2948
2952
2956
2960
2964
2968
2972
2976
2980
2984
2988
2992
2996

*/

// 1.8 : WAP to print sum 1 to N using do while loop.

#include <stdio.h>

int main() {
    int N, sum, i;

    printf("Enter a value for N: ");
    scanf("%d", &N);

    sum = 0;
    i = 1;

   do	
	{
        sum += i;
        i++;
    }
	 while (i <= N);

    printf("The sum of numbers from 1 to %d is: %d\n", N, sum);

    return 0;
}

/*

Output :

Enter a value for N: 10
The sum of numbers from 1 to 10 is: 55

*/

// 1.9 : WAP to calculate the factorial of N. using do while loop.

#include <stdio.h>

int main()
{
	
	int i=1, f=1, n;

	
	printf("Enter the value of N: ");
	scanf("%d",&n);

	do
	{
		f=f*n;
		printf("%d ",f);
		i++;
	}
	while(i<=n);

	return 0;
}

/*

Output :

Enter the value of N: 5
5 25 125 625 3125 

*/

// 1.10 : WAP to print thr multiplicat,on table of N using do while loop.

#include <stdio.h>

int main() {
    int n, i = 1;

    
    printf("Which number of table do you want : ");
    scanf("%d", &n);

    printf(" Table for %d:\n", n);

  
   do
	{
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
	 while (i <= 10);

    return 0;
}

/*

Output:

Which number of table do you want : 9
Table for 9:
9 x 1 = 9
9 x 2 = 18
9 x 3 = 27
9 x 4 = 36
9 x 5 = 45
9 x 6 = 54
9 x 7 = 63
9 x 8 = 72
9 x 9 = 81
9 x 10 = 90

*/











/*

#####     FOR LOOP     #####

*/

// 2.1 WAP to Print 1 to 10 using for loop.

#include <stdio.h>

int main()

{
  for (int i=1; i<=10; i++)
  {
    printf("%d\n",i);
  }
return 0;
}

/*

Output :

1
2
3
4
5
6
7
8
9
10

*/

// 2.2 WAP to Print 10 to 1 using for loop.

#include <stdio.h>

int main()

{
  for (int i=10; i >= 1; i--)
  {
    printf("%d\n",i);
  }
return 0;
}


/*

Output :

10
9
8
7
6
5
4
3
2
1


*/

// 2.3 WAP to Print 1 to N using for loop.

#include <stdio.h>

int main()

{
  int n;
  printf("Enter the Number :");
  scanf("\n %d", &n);
  

  for (int i=1; i<= n; i++)
  {
    printf("%d\n",i);
  }

return 0;

}

/*

Output :

Enter the Number :5
1
2
3
4
5

*/

// 2.4 WAP to Print N to 1 using for loop.

#include <stdio.h>

int main()
{
   

  
  int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    for( n>=1; n--;)
    {
        printf("%d\n", n);
    }

    return 0;
}


/*

Output :

Enter value of n: 10
9
8
7
6
5
4
3
2
1
0


*/

// 2.5 WAP to print odd no. from 1 to N using for loop.

#include <stdio.h>

int main()
{
	
	int n;
	
	printf("Enter the value of N: ");
	scanf("%d",&n);

	printf("Odd Numbers from 1 to %d:\n",n);

	for(int number=1; number<=n; number++)
	{
		
		if(number%2 != 0)
		{
			printf("%d ",number);
			}
	}

	return 0;
}

/*

Output :-

Enter the value of N: 10
Odd Numbers from 1 to 10:
1 3 5 7 9 

*/

// 2.6 WAP to print even no. from 1 to N using for loop.

#include <stdio.h>

int main()
{
	int  n;

	printf("Enter the value of N: ");
	scanf("%d",&n);

	printf("Even Numbers from 1 to %d:\n",n);

	for(n>=1;n--;)
	{
		
		if(n%2 == 0)
		{
			printf("%d ",n);
		}
		
	}

	return 0;
}

/*

Output :

Enter the value of N: 10
Even Numbers from 1 to 10:
8 6 4 2 0 

*/

// 2.7: WAP to Find leap year from 2000 to 3000 using for loop.

#include <stdio.h>

int main() {
    

    for (int year = 2000; year <= 3000; year++) 
	{
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d\n", year);
        }
        
    }

    return 0;
}

/*

Output :

2000
2004
2008
2012
2016
2020
2024
2028
2032
2036
2040
2044
2048
2052
2056
2060
2064
2068
2072
2076
2080
2084
2088
2092
2096
2104
2108
2112
2116
2120
2124
2128
2132
2136
2140
2144
2148
2152
2156
2160
2164
2168
2172
2176
2180
2184
2188
2192
2196
2204
2208
2212
2216
2220
2224
2228
2232
2236
2240
2244
2248
2252
2256
2260
2264
2268
2272
2276
2280
2284
2288
2292
2296
2304
2308
2312
2316
2320
2324
2328
2332
2336
2340
2344
2348
2352
2356
2360
2364
2368
2372
2376
2380
2384
2388
2392
2396
2400
2404
2408
2412
2416
2420
2424
2428
2432
2436
2440
2444
2448
2452
2456
2460
2464
2468
2472
2476
2480
2484
2488
2492
2496
2504
2508
2512
2516
2520
2524
2528
2532
2536
2540
2544
2548
2552
2556
2560
2564
2568
2572
2576
2580
2584
2588
2592
2596
2604
2608
2612
2616
2620
2624
2628
2632
2636
2640
2644
2648
2652
2656
2660
2664
2668
2672
2676
2680
2684
2688
2692
2696
2704
2708
2712
2716
2720
2724
2728
2732
2736
2740
2744
2748
2752
2756
2760
2764
2768
2772
2776
2780
2784
2788
2792
2796
2800
2804
2808
2812
2816
2820
2824
2828
2832
2836
2840
2844
2848
2852
2856
2860
2864
2868
2872
2876
2880
2884
2888
2892
2896
2904
2908
2912
2916
2920
2924
2928
2932
2936
2940
2944
2948
2952
2956
2960
2964
2968
2972
2976
2980
2984
2988
2992
2996


*/

// 2.8 :WAP to print sum 1 to N using for loop.

#include <stdio.h>

int main() {
    int N, sum=0;

    printf("Enter a value for N: ");
    scanf("%d", &N);

   

    for (int i=1; i<=N; i++)		
	{
        sum += i;
       
    }

    printf("The sum of numbers from 1 to %d is: %d\n", N, sum);

    return 0;
}

/*

Output :

Enter a value for N: 10
The sum of numbers from 1 to 10 is: 55

*/

// 2.9 : WAP to calculate the factorial of N. using for loop.

#include <stdio.h>

int main()
{
	
	int i=1, f=1, n;

	
	printf("Enter the value of N: ");
	scanf("%d",&n);

	for(int i=1, f=1; i<=n; i++)
	{
		f=f*n;
		printf("%d ",f);
		
	}

	return 0;
}

/*

Output :

Enter the value of N: 3
3 9 27 

*/

// 2.10 : WAP to print thr multiplicat,on table of N using for loop.

#include <stdio.h>

int main() {
    int n; 

    
    printf("Which number of table do you want : ");
    scanf("%d", &n);

    printf(" Table for %d:\n", n);

    for (int i = 1; i <= 10; i++) 
	{
        printf("%d x %d = %d\n", n, i, n * i);
        
    }

    return 0;
}

/*

Output:

Which number of table do you want : 9
Table for 9:
9 x 1 = 9
9 x 2 = 18
9 x 3 = 27
9 x 4 = 36
9 x 5 = 45
9 x 6 = 54
9 x 7 = 63
9 x 8 = 72
9 x 9 = 81
9 x 10 = 90

*/