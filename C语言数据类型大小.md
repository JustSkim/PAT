# C语言数据类型大小

1. 有符号整数类型 

   类型							所占字节数	数据范围

   signed char                    1		-2^7 ~ 2^7-1    -128 ~ 127

   short int或short              2		-2^15 ~ 2^15-1    -32768 ~ 32767

   int                                   4         -2^31~2^31-1   

   long int 或long               4          -2^31~2^31-1  所占字节数和表示范围和int类型相同！

   long long int 或long long  8       -2^63~2^63-1

   ```
   long与int：标准只规定long不小于int的长度，int不小于short的长度。
   
   double与int类型的存储机制不同，long int的8个字节全部都是数据位，而double是以尾数，底数，指数的形式表示的，类似科学计数法，因此double比int能表示的数据范围更广。
   
   long long在win32中是确实存在，长度为8个字节；定义为LONG64。
   为什么会出现long int呢？在win32现在系统中，长度为4；在历史上，或者其他某些系统中，int长度为2，是short int。
   ```

   

2. 无符号整数类型

   unsigned char                                                     1		0~2^8-1   255

   unsigned short int 或 unsigned short                 2		0~2^16-1 65355

   unsigned int                                                        4		0~2^32-1

   unsigned long int 或 unsigned long                   4		0~2^32-1

   unsigned long long int 或 unsigned long long  8		0~2^64-1

3. 浮点类型

   float					 4		-3.4e38~+3.4e38

   double 				8		-1.7e308~+1.7e308

   long double		12		-1.19e4932~+1.19e4932