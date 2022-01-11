<img src="https://github.com/hanjingmin/C_code/blob/main/IMG/pexels-anastasia-ilinamakarova-10322283.jpg" alt="pexels-photo-10519597" style="zoom: 67%;" />

## 结构体

### 结构体类型的声明

#### 结构的基础知识 

**结构**是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。

#### 结构体的声明

```
例如描述一个学生的结构体类型为；
struct Stu
{
    char name[20];  // 结构体变量
    char sex[10];
    char tele[12];
    int age;
}s3,s4,s5;     // s1,s2,s3,s4,s5均为全局变量，两种不同的声明方式
结构体变量的创建：
struct Stu s1;
struct Stu s2;
注：匿名结构体类型
```

### 结构体变量的定义和初始化

```
struct T   // 结构体变量的定义
{

    double weight;
    double height;
 
};
struct S    // 结构体变量的定义
{
    char c;
    int a;
    struct T t;
    double d;
    char arr[20];   
};
// 初始化
int main(void)
{
    struct S s = { 'c', 100,{178.0,160.0}, 3.14, "hanmingmin@gamil.com"};     // 结构体变量声明
    printf("%c %d %lf %lf %lf %s",s.c,s.a
        ,s.t.weight,s.t.height,s.d,s.arr);          

    return 0;
}
```

### 

### 结构的自引用--链表

```
以链表为例，分布在不连续内存中的五个数字 1，2，3，4，5
思考，若利用一下结构体定义，是否可行？
struct Node
{
    int value;    // 链表需要指针 value next 三个要素
    // struct Node n; // sizeof(Struct Node) 占用无限多的内存
    struct Node* next; // 4/8字节
}

typedef 对类型进行重命名
typedef struct Node
{
    int value;    
    struct Node* next; 
}Node;
将结构体类型重新命名为Node类型
int main(void)
{
    struct Node n1;     // 可
    Node n2;            // 可

    return 0;
}
当使用匿名结构体类型时，需注意
typedef struct 
{
    int value;    
    Node* next;  // struct Node* next;错误 
    // 第一次定义过程中 Node类型不存在，完整执行后才会命名Node
    // 所以typedef struct Node不能丢
}Node;
```

### 结构体的内存对齐

#### 对齐规则

- 第一个成员在与结构体变量偏移量为0的地址处。

- 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。

  **对齐数**=编译器默认的一个对齐数 与 该成员大小的**较小值**。

- 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。

- 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。

#### 举例计算

```
#include <stdio.h>
struct S1
{
	char c1;
	int i;
	char c2;
};

struct S2
{
	char c1;
	int i;
	double d;//8
};

struct S3
{
	char c1;
	char c2;
	int i;
};

struct S4
{
	double d;
	char c;
	int i;
};
struct S5
{
	char c1;
	struct S4 s4;
	double d;
};
int main()
{
	struct S1 s1 = { 0 };
	struct S2 s2 = { 0 };
	struct S3 s3 = { 0 };
	struct S4 s4 = { 0 };
	struct S5 s5 = { 0 };
	
	printf("s1:%ld\n", sizeof(s1));
	printf("s2:%ld\n", sizeof(s2));
	printf("s3:%ld\n", sizeof(s3));
	printf("s4:%ld\n", sizeof(s4));
    printf("s5:%ld\n", sizeof(s5));
	return 0;
}
```

#### 结果展示

```
s1:12
s2:16
s3:8
s4:16
s5:32
```

#### 补充：默认对齐数

注： 可修改默认对齐数 

```
#pragma pack(4)  //默认对齐数 4
struct S2
{
	char c1; // 4
	double d;// 8 = 2 * 4
};  // 这样可从12->4
```

#### 补充 ：宏  offsetof

用来计算结构体中的成员变量的偏移量

```
size_t offsetof(structName,memberName);
struct S2
{
	char c1;
	int i;
	double d;//8
};
int main(void)
{
	printf("%d\n",offsetof(struct S,c));
	return 0;
}
```

![image-20220109152008376](/home/hl/snap/typora/46/.config/Typora/typora-user-images/image-20220109152008376.png)



### 结构体传参

#### 结构体作为函数参数

##### 1.结构体变量成员作为函数的参数

由于结构体变量成员存放基本类型数据，因此结构体变量成员作为函数的实参类似于基本类型变量作实参。

```
#include <stdio.h>
struct S1
{
	int num;
    char name[20];
	int age;
}st[3]={{20080101,"Wang",19},{20080101,"Han",21},{20080101,"Qian",19}};

void PRINT(int age)
{
    printf("年龄:%d\n",age);
}
int main()
{
    for (int i = 0; i < 3; i++)
    {
        PRINT(st[i].age);
    }
	return 0;
}
--------------------------------
Results:
年龄:19    年龄:21    年龄:19 
```

##### 2. 结构体变量作为函数参数

通过实参将相应的结构体类型数据传给对应的形参，实现传址调用。

**注：**这与数组作为参数传址调用是不同的，不具有指针的功能。

#### 结构体指针作为函数参数

问题描述：给定两个复数$x = a+bi$和$y=c+di$，计算$z$的值
$$
z = \frac{x*y}{x+y}=\frac{(a+bi)\cdot(c+di)}{(a+bi) + (c+di)}
$$


```
/* 复数的四则运算 */
#include <stdio.h>
struct complex
{
	float realpart;
	float imagpart;
};
// 结构体指针加法实现 x*y = (a + c) + (b + d)i
void add(struct complex* temp,struct complex* p1,struct complex* p2)
{
	temp->realpart = p1->realpart + p2->realpart;
	temp->imagpart = p2->realpart + p2->realpart;
}
// 结构体指针乘法法实现   x*y = (ac-bd) + (ad+bc)i
void mul(struct complex* temp, struct complex* p1,struct complex* p2)
{
	temp->realpart = p1->realpart * p2->realpart -						 p1->imagpart * p2->imagpart;
	temp->imagpart = p1->realpart * p2->imagpart +
					 p1->imagpart * p2->realpart;
}
// 结构体指针除法实现  x/y = [1/(c^2-d^2)][(ac+bd) + (bc-ad)i]
void div(struct complex* temp,struct complex* p1,struct complex* p2)
{
	float par;
	par = 1/(p2->imagpart * p2->imagpart + p2->realpart * p2->realpart);
	temp->realpart = p1->realpart * p2->realpart +						 p2->imagpart * p2->imagpart;
	temp->imagpart = p1->imagpart * p2->realpart -
					 p1->realpart * p2->imagpart;
					 
}

int main(void)
{
	float RealPart,ImagPart;
	struct complex z1 = {0.0,6.0};
	struct complex z2 = {0.0,1.0};
	struct complex z3;
	struct complex z4;
	struct complex z ;

	printf("input1 -------\nRealPart is: %2.1f\nImagPart is :%2.1f\n\n",z1.realpart,z1.imagpart);
	printf("input2 -------\nRealPart is: %2.1f\nImagPart is :%2.1f\n\n",z2.realpart,z2.imagpart);

	add(&z3,&z1,&z2);
	printf("ADD -------\nRealPart is: %2.1f\nImagPart is :%2.1f\n",z3.realpart,z3.imagpart);

	mul(&z4,&z1,&z2);
	printf("MUL -------\nRealPart is: %2.1f\nImagPart is :%2.1f\n",z4.realpart,z4.imagpart);

	if ((z4.imagpart * z4.imagpart + z4.realpart * z4.realpart) != 0.0)
	{
		div(&z,&z1,&z2);
		printf("DIV -------\nRealPart is: %2.1f\nImagPart is :%2.1f\n",z.realpart,z.imagpart);
	}
	else
	{
		printf("Error!");
	}

	return 0;

}
```

#### 返回结构体类型数据的函数

函数返回值可以是结构体类型的数值，也可以是指向结构体变量(或数组元素的指针)。当函数返回值是结构体类型的值时，称该函数为结构体类型函数；当函数返回值是指向结构体类型存储单元的指针时，称该函数为结构体类型指针函数。

### 结构体实现位段(位段的填充&可移植性)

#### 位段

位段的声明和结构体是类似的，有两个不同：

1. 位段的成员必须是int、unsigned或signed int。
2. 尾端的成员后面有一个冒号和一个数字。

例如：

```
#include <stdio.h>
struct ALPHA
{
	int a:2;    // 2是指两个比特位 1字节=8比特
	int b:5;
	int c:10;
	int d:30;
};
int main()
{
	struct ALPHA s;
	printf("%ld",sizeof(s));   // 结果为8Bit
	return 0;
}
```

位段 ->位指的是二进制位

![image-20220109163336460](/home/hl/snap/typora/46/.config/Typora/typora-user-images/image-20220109163336460.png)

#### 位段的内存分配

1.  位段的成员可以是int、unsigned int、signed int或者是char(属于整型家族)类型
2. 位段的空间上是按照需要以四个字节(int)或者1个字节(char)的方式来开辟的(对齐位置)
3. 位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。



下面来看一个例子：

```
#include <stdio.h>
struct S
{
	char a:3;   
	char b:4;
	char c:5;
	char d:4;
};
int main()
{
	struct S s;
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;
	return 0;
}
```

| 二进制位 | 0            0 0 0 0      0 0 0   | 0 0 0     0 0 0 0 0 | 0 0 0 0    0 0 0 0 |
| -------- | --------------------------------- | ------------------- | ------------------ |
| 各个变量 | 丢弃   \|      b        \|      a | 丢弃  \|         c  | 丢弃      \|     d |
| 处理后   | 0            0 1 0 0       0 1 0  | 0 0 0     0 0 0 1 1 | 0 0 0 0    0 1 0 0 |

==10的8比特表示0001010，截取后三位010==

==20的8比特表示0010100，截取后四位0100==

==03的8比特表示0000011，截取后五位00011==

==04的8比特表示0000100，截取后四位0100==

==结果为 22 03 04(16进制内存表示)==

##### 位段的跨平台问题

1. int位段被当成有符号数还是无符号数是不确定。
2. 位段中最大位的数目不能确定(16位机器最大位16，32位机器最大32，若某数等于27，在16位机器中会出现问题)。
3. 位段中的成员在内存中从左向右分配，还是从右向左分配标准尚未定义。
4. 当一个结构包含两个位段，第二个位段成员比较大，无法容纳于第一个位段剩余的位时，是舍弃剩余的位还是利用，这是不确定的。

###### 总结

​	跟结构相比，位段可以达到同样的效果，但是可以很好的节省空间，但是有跨平台的问题存在。

##### 位段的应用

​	数据的传输

![image-20220109171828862](/home/hl/snap/typora/46/.config/Typora/typora-user-images/image-20220109171828862.png)





## 枚举

可能的取值一一列举。

比如：

月份有12个月，可以一一列举。

一周有七天，可以一一列举。

性别有男、女，可以一一列举。

颜色也可以一一列举。

这些例子里就可以使用枚举。

### 枚举类型的定义

```
enum Sex
{
	MALE,
	FAMALE,
	SECRET
};
enum Color
{
	RED,
	YELLOW,
	BLUE
}
int main(void)
{
	enum Sex s = MALE;
	return 0;
}
```

枚举常量都是有值得，默认从0开始，一次递增1，当然也可以在定义的时候赋初值。例如：

```
enum Color
{
	RED=1,
	GREEN=2,
	BLUE=4
};
```



### 枚举的优点(define 就可以办到)

------

- 1.增加代码的可读性和可维护性
- 2.和#define定义的标识符相比枚举有类型检查，更严谨
- 3.防止命名污染（封装）
- 4.便于调试
- 5.使用方便，一次可以定义多个变量

### 枚举的使用

##### 例子1：这样给clr赋值5可以吗？

```
enum Color
{
	RED=1,
	GREEN=2,
	BLUE=4
};
enum Color clr = GREEN;
clr = 5;
```

> 不可以，枚举变量一经过定义赋值，不可再改变。



## 联合

联合也是一种特殊的自定义类型，这种类型定义的变量也包含一系列的成员，特征是这些成员共用同一块空间（所以叫做共用体.

### 联合类型的定义

```
union Un
{
	short s[6];
	int n;
};
Union Un un;
int main()
{
  printf("%d\n", sizeof(union Un));
  return 0;
}
```

> 注释：结构体向int对齐，6个short一共是12字节，对齐后是12字节。n是单独的4字节，由于是union，所以n与s共用空间，只取最长的元素，故占用12字节。

### 联合的特点

联合的成员是共用同一块内存空间，这样一个联合变量的大小，至少是最大成员的大小（因为联合至少得有能力保存最大的那个成员）

#### 判断大小端存储类型

Example：若位顺序类似小端，低地址在低处，所以39是低地址，37在高位，结果就是3839；若类似大端存储，则结果是3938。

```
int main()
{
	union
	{
		short k;
		char i[2];
	}*s, a;
	s = &a;
	s->i[0] = 0x39;
	s->i[1] = 0x38;
	printf("%x\n", a.k);
	return 0;
}
注释：由输出结果可知位顺序类似小端，低地址在低处，所以39是低地址，在低位，38在高位，所以是3839。
```



### 联合大小的计算

1.联合的大小至少是最大成员的大小。

2.当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍

例如：

```
int main()
{
	union Un1
	{
		char c[5];
		int i;
	};
	union Un2
	{
		short c[7];
		int i;
	};
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
	return 0;
}
```

> 注释：Un1中，char c[5]至少占用6个字节，最大对齐数4，取最大对齐数的整数倍，结果为8；Un2中，short c[7]至少占用16个字节，最大对齐数4，取最大对齐数的整数倍，恰好结果为16.
