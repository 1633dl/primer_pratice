/*
自动类型推导：auto会自动忽视底层的const
比如 const int i=11;const auto j2 = i, &k2 = i;
j2,k2都会转化为int型

decltype()根据()中的数据类型进行推导，如果()中有=,()会转化为引用
inline-->内联函数关键字,内联函数和宏定义相同,可以避免调用函数，创建栈帧的资源消耗
但是宏定义不能在编译阶段找到错误,内联函数就可以和普通函数一样在编译阶段找到错误，并减少资源的消耗
但是函数如果很长不建议使用内联函数

getline()函数，可以传入cin,string,等同cin>>string,但getline()可以接受空格,只有遇到回车才停止
cin可以一直输入，遇到回车也会结束，但是cin的结束是空格，所以空格后的字符都忽略
C++11中auto遍历 for(auto&X:?){}
这里的X只有定义为引用才可以修改内容，auto自动推导?中的内容，比如数组，字符串等
ispunct()--检查字符中是否为标点符号,若是则返回1,不是返回0
将小写字母转化为大写字母toupper(),返回值为转化成大写字母的字符串,将大写转小写tolower(),传入值为char类型
vector中cbegin()和cend()返回的为const类型的迭代器,不能改变值
迭代器不存在加法但存在减法，vv.begin()+(vv.end()-vv.begin())表示vv.begin()向右移动几个长度

c语言类型的字符串const char temp[]={……}如果其中没有'\0'，
那遍历时会因为找不到结束字符，于是一直遍历下去
const char temp[]="……"会自动包含'\0'
用c语言类型的字符串初始化字符数组时，在最后默认添加'\0'，所以数组的容量为显示的字符数+1
拼接两个字符串时，会删除其中一个字符串的\0，所以总长度-1
全局变量的数组定义时会有默认值，但其他的在作用域内的数组就为空
用普通数组初始化vector-->vector<T>vv(begin(aa),end(aa));用指针传递的方式
用cout可以直接输出一个char[]类型数据
size_t为无符号整型 constexpr和const功能类似
begin()和end()函数(不是STL的迭代器)用于定位数组中元素的位置,返回为指针类型,begin()和end()为数组的两个边界

遍历二维数组:int arr[3][4];
for (int(&row)[4] : arr)
{
for (int column : row)
{
cout << column << " ";
}
cout << endl;
}
这个也可以通过using int_arr=int[4]来修改(不能直接将改为"int[4]&row")
for (int_arr&row : arr)
{
for (int column : row)
{
cout << column << " ";
}
cout << endl;
}
//定义一个指向首行数组首个元素的指针，解引用一次为首元素的地址
for (int(*p)[4] = arr; p != arr + 3; p++)
{
for (int *q = *p; q != *p + 4; q++)
{
cout << *q << " ";
}
cout << endl;
}
for (int_arr*p = arr; p != arr + 3; p++)
{
for (int *q = *p; q != *p + 4; q++)
{
cout << *q << " ";
}
cout << endl;
}
*/