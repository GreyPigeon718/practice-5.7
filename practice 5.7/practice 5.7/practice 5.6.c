#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    int a = 1, b = 1, flag;
//    scanf("%d", &flag);
//    if (flag)
//    {
//        a = a + b;
//    }
//    else
//    {
//        b = a - b;
//    }
//    return 0;
//
//}
//
//
//
//
//void findTwoNum(int arr[], int n, int* pnum1, int* pnum2)
//{
//    int i;
//    int sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        sum ^= arr[i];
//    } //先找到两个数互相异或的结果
//    int pos;
//    for (i = 0; i < 32; i++)
//    {
//        if (sum & 1 << i)
//        {
//            pos = i;
//            break;
//        }
//    } //再找到有分歧的一位。在这一位上，两个数一定是一个1一个0
//    * pnum1 = *pnum2 = 0;
//    for (i = 0; i < 10; i++)
//    {
//        if (arr[i] & 1 << pos)
//        {
//            *pnum1 ^= arr[i]; //这一位是1的，放在数1里
//        }
//        else
//        {
//            *pnum2 ^= arr[i]; //这一位是0的，放在数2里
//        }
//    }
//}
void Bbsort(int* a,int n)
{
    int j = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j + 1] = temp;
            }
        }
    }
}
void finddog(int* a, int n,int* num )
{
    Bbsort(a,n);
    int i = 0;
    int j = 0;
    for (i = 0; i < n;)
    {
        if (a[i] == a[i + 1])
        {
            i += 2;
        }
        else
        {
            num[j]= a[i];
            i++;
            j++;
            
        }
    }
}
int main()
{
    int arr[] = { 1,2,3,4,5,3,2,1 };
    int num[2] = {0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    finddog(arr,sz,num);
    printf("%d %d ", num[0],num[1]);
    return 0;
}

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////模拟实现strncat
//char* strncat(char* strDest, const char* strSource, size_t count);
//char* my_strncat(char* dst, const char* src, size_t n)
//{
//    char* tmp = dst;
//
//    while (*dst)
//    {
//        dst++;
//    }
//
//    int i;
//    for (i = 0; src[i] && i < n; i++)
//    {
//        dst[i] = src[i];
//    }
//
//    dst[i] = 0;
//    return tmp;
//}
//char* my_strncat(char* dest, const char* src, unsigned n)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	int i = 0;
//	while (*dest)
//	{
//		dest++;
//	}
//	for (i = 0; i < n&&src!='\0'; i++)
//	{
//		*dest++ = *src++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[800] = "I lov";
//	char arr2[] = "e you";
//	//strncat(arr1, arr2, 100);
//	my_strncat(arr1, arr2, 100);
//	printf(arr1);
//}
//模拟实现strncpy
//char* my_strncpy(char* dst, const char* src, size_t n)
//{
//    int i;
//    for (i = 0; src[i] && i < n; i++)
//    {
//        dst[i] = src[i];
//    }
//
//    if (i < n)
//    {
//        dst[i] = 0;
//    }
//    return dst;
//}
//char* strncpy(char* strDest, const char* strSource, size_t count);
//char* my_strncpy(char* dest, char* str, unsigned n)
//{
//	assert(dest != NULL);
//	assert(str != NULL);
//	int i = 0;
//	char* ret = dest;
//	for (i = 0; i < n; i++)
//	{
//		*dest++ = *str++;
//		if (str == '\0')
//		{
//			*dest = 0;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "aaaaaaaaa";
//	char arr2[] = "bbbb";
//	strncpy(arr1, arr2, 5);
//	my_strncpy(arr1, arr2, 3);
//	printf(arr1);
//	/*printf("\n");
//	printf(arr2);*/
//	return 0;
//}