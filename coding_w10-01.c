#include<stdio.h>
int main(){
    int score=1,scores,student,sum=0;
    printf("Enter number of students:");
    scanf("%d",&scores);
    printf("enter %d student scores (one per line):\n",scores); 

while (score<=scores){
    printf("score%d:",score);
    scanf("%d",&student);
    sum+=student;
    score++;
}

printf("Number of students = %d\n",scores);
printf("Average score = %.2f\n", (float) sum /scores);
return 0;
}
/*
กำหนดตัวแปร int
แสดงผลลัพธ์ข้อความEnter number of students
รับค่าที่ผู้ใช้กรอก
แสดงผลลัพธ์
ลูปทำงานเมื่่อ score<=endscore เป็นจริง
แสดงผลลัพธ์ของscore
รับค่าของstudent
ค่าของsum+=student
score เพิ่มขึ้นทีละ 1
แสดงผลลัพธ์Number of students
แสดงผลลัพธ์Average score 
จบการทำงาน
*/