#include <stdio.h>
int main() {
    int i;
    float M[3],P[3],C[3] ;

for(i=0;i<3;i++){
    printf("Enter score for students %d: \n",i+1);
    printf("Math: ");
    scanf("%f", & M[i]);
    printf("Physics:");
    scanf("%f", &P[i]);
    printf("Chemistry: ");
    scanf("%f", &C[i]);

} printf("\n");
    printf("Score table:\n");
    printf("student\tMath\tPhysics\tChemistry\n");

for(i=0;i<3;i++){
    printf("%d\t%.2F\t%.2f\t%.2f\n",i+1, M[i],P[i],C[i]);
}
    float Ma=( M[0]+ M[1]+ M[2])/3;
    float ph=(P[0]+P[1]+P[2])/3;
    float ce=(C[0]+C[1]+C[2])/3;
printf("\n");
printf("Average per subject:\n");
printf("Math: %.2f\n",Ma);
printf("Physics: %.2f\n",ph);
printf("Chemistry: %.2f\n",ce);
return 0;
}
/*
กำหนดตัวแปร int
กำหนดตัวแปร float
ลูปจะทำงานเมื่อi<3เป็นจริง
แสดงข้อความให้ผู้ใช้กรอกคะแนนคนที่ i+1
แสดงผลลัพธ์Math
รับค่า Math ของคนปัจจุบัน
แสดงผลลัพธ์Physics
รับค่า Physics ของคนปัจจุบัน
แสดงผลลัพธ์Chemistry
รับค่า Chemistry ของคนปัจจุบัน
แสดงผลลัพธ์Score table
แสดงผลลัพธ์
ลูปจะทำงานเมื่อi<3เป็นจริง
แสดงผลลัพธ์คะแนนของนักเรียนคนที่ i+1
คำนวณค่าเฉลี่ยของคะแนนวิชาคณิตศาสตร์
คำนวณค่าเฉลี่ยของคะแนนวิชาฟิสิกส์
คำนวณค่าเฉลี่ยของคะแนนวิชาเคมี
แสดงผลลัพธ์Average per subject
แสดงค่าเฉลี่ยของคะแนนวิชาคณิตศาสตร์
แสดงค่าเฉลี่ยของคะแนนวิชาฟิสิกส์
แสดงค่าเฉลี่ยของคะแนนวิชาเคมี
จบการทำงาน
*/