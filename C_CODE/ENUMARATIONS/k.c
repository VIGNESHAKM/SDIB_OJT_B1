38.	#include <stdio.h>
39.	void swap_nums(int *x, int *y)
40.	{ #include <stdio.h>
41.	void swap_nums(int *x, int *y)
42.	{
43.	 int tmp;
44.	 tmp = *x;
45.	 *x = *y;
46.	 *y = tmp;
47.	}
48.	void swap_pointers(char *x, char *y)
49.	{
50.	 char *tmp;
51.	 tmp = x;
52.	 x = y;
53.	 y = tmp;
54.	}
55.	int main()
56.	{
57.	 int a,b;
58.	 char *s1,*s2;
59.	 a = 3; b=4;
60.	 swap_nums(&a,&b);
61.	 printf("a is %d\n", a);
62.	 printf("b is %d\n", b);
63.	 s1 = "I should print second";
64.	 s2 = "I should print first";
65.	 swap_pointers(s1,s2);
66.	 printf("s1 is %s\n", s1);
67.	 printf("s2 is %s\n", s2);
68.	 return 0;
69.	}
70.	 int tmp;
71.	 tmp = *x;
72.	 *x = *y;
73.	 *y = tmp;
74.	}
75.	void swap_pointers(char *x, char *y)
76.	{
77.	 char *tmp;
78.	 tmp = x;
79.	 x = y;
80.	 y = tmp;
81.	}
82.	int main()
83.	{
84.	 int a,b;
85.	 char *s1,*s2;
86.	 a = 3; b=4;
87.	 swap_nums(&a,&b);
88.	 printf("a is %d\n", a);
89.	 printf("b is %d\n", b);
90.	 s1 = "I should print second";
91.	 s2 = "I should print first";
92.	 swap_pointers(s1,s2);
93.	 printf("s1 is %s\n", s1);
94.	 printf("s2 is %s\n", s2);
95.	 return 0;
96.	}
