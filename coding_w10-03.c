#include <stdio.h>
#include <string.h>

int main(){
    char name[30],names[30];
    printf("Enter name of customer 1:");
    scanf("%s",name);
    printf("Enter name of customer 2:");
    scanf("%s",names);

if(strcmp(name,names)!=0){
    int length=strlen(name);
    int length1=strlen(names);
    printf("Customer 1:%s(%d characters)\n",name, length);
    printf("Customer 2:%s(%d characters)\n",names,length1);

}else {
    int length=strlen(name);
    printf("Both of your names are the same,which is %s.\n",name);
    printf("the length of the name is %d characters\n", length);
}
   return 0;
}
/*
กำตัวแปร char ขนาด30
แสดงข้อความให้ผู้ใช้กรอกชื่อคนที่1
รับค่าจากผู้ใช้
แสดงข้อความให้ผู้ใช้กรอกชื่อคนที่2
รับค่าจากผู้ใช้
ตรวจสอบว่า name,namesไม่เท่ากัน
ใช้ strlen หาความยาวชื่อคนที่1
ใช้ strlen หาความยาวชื่อคนที่2
แสดงผลลัพธ์
แสดงผลลัพธ์
ถ้า  name,names เท่ากัน
ใช้ strlen หาความยาวชื่อ
แสดงผลลัพธ์
แสดงผลลัพธ์
จบการทำงาน
*/