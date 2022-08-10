#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {
//	int a = 1;//初始
//
//	do {
//
//		if (a == 5)
//			continue;
//		printf("%d ", a);//先打印
//		a++;			 //调整部分
//	} while (a <= 10);	 //判断部分
//		
//		return 0;
//}

//int main() {
//
//	int a = 0;
//	do {
//		if (a == 5)
//			break;
//
//		printf("%d ", a);
//		a++;
//
//	} while (a <= 10);
//	return 0;
//}

//int main() {
//
//	int a = 0;//次数
//	scanf("%d", &a);
//	int b = 0,c = 1;
//	for (b = 1; b <= a; b++) {
//		c = c * b;
//	}
//	printf("%d", c);
//
//	return 0;
//}

//int main() {
//	int a = 0, b = 1, c = 1, d = 0;
//	while (b <= 3) {
//
//		//c = 1;//重要
//		for (a = 1; a <= b; a++) {
//			c = c * a;
//		}
//		b++;
//		d = d + c;
//	}
//	printf("%d", d);
//	return 0;
//}



//int main() {
//	int b = 1, c = 1, d = 0;
//	while (b <= 3) {
//		c = c * b;//c每次继续上一次的值，乘b的循环
//		b++;
//		d = d + c;//c存储每次的阶乘结果
//	}
//	printf("%d", d);
//	return 0;
//}


//有序数组实现二分查找

//int main() {
//
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };//定义的有序数组
//	int k = 7;						  //需要查找的数
//
//	int left = 0;//左下标
//
//	//	每个元素4byte			
//	//			40		  /			4
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//
//	int right =sz-1;//右下标
//
//
//	while (left<=right) {
//
//		//一定要放到循环里，因为每一次循环都要求
//		//int mid = (left + right) / 2;//中间元素的下标
//
//		int mid = left + (right - left) / 2;
//
//		//int mid;//这是一个值，和arr没有关系
//		//arr[mid];		//这是arr中间下标的值
//
//
//		//如果中间元素比要查找的元素小，那么被查找的元素就在中间元素右边
//		//所以左下标就要换成中间元素加1
//		// arr[mid] < k ,  如果mid =5,	那么k = 6 ~ 10;
//		if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		//构成一个新的查找范围
//
//
//		//如果中间元素比要查找的元素大，那么被查找的元素就在中间元素的左边
//		//所以右下标就要换成中间元素减1
//		//arr[mid] > k ,   如果mid = 5,  那么k = 0 ~ 4;
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		//构成一个新的查找范围
//
//
//		//				这种情况是相等
//		//								mid就是arr,所以可以打印mid	
//		else {
//			printf("找到了, 下标是: %d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("找不到!\n");
//	}
//
//
//	return 0;
//}

//
//#include<stdlib.h>	//system的头文件
//#include<windows.h>	//Sleep的头文件
//#include<string.h>
//int main() {
//
//	char arr1[] = "zxcvbnmsadfhhhhhhhh";
//	char arr2[] = "###################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	//strlen只求字符串长度，不管后面的\0
//	//下标要减1
//
//	while (left<=right) {
//
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//作用:屏幕休眠
//		//首字母大写，单位是毫秒
//
//		system("cls");
//		//清空屏幕
//
//		left++;
//		right--;
//	}
//
//	printf("%s", arr2);
//
//	return 0;
//}



//登陆程序

//#include<string.h>//stecmp的.h
//
//int main() {
//
//	int a = 0;
//	char password[20] = { 0 };//存储密码
//
//	for (a = 1; a <= 3; a++) {
//		printf("请输入密码 !\n");
//
//		scanf("%s",password);	//输入的密码,数组名不用取地址
//
//
//					//(1) < (2) 返回小于0的数
//					//(1) = (2) 返回0
//					//(1) > (2) 返回大于0的数
//		//比较
//		if (strcmp(password, "123456") == 0) {
//
//			printf("密码正确");
//			break;
//		}
//		else {
//			printf("密码错误，重新输入");
//		}
//	}
//
//	if (a >= 3) {
//		printf("退出程序");
//	}
//
//	return 0;
//}