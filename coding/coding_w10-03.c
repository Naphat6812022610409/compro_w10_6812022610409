#include <stdio.h>  // ใช้สำหรับฟังก์ชันการรับข้อมูลและแสดงผล
#include <string.h> // ใช้สำหรับฟังก์ชันการเปรียบเทียบสตริงและหาความยาวของสตริง

int main() {
    char name1[50], name2[50];  // ประกาศตัวแปรเก็บชื่อของลูกค้าทั้งสอง

    // ขอชื่อของลูกค้าคนที่ 1
    printf("Enter name of customer 1: ");
    scanf("%s", name1);  // รับชื่อของลูกค้าคนที่ 1

    // ขอชื่อของลูกค้าคนที่ 2
    printf("Enter name of customer 2: ");
    scanf("%s", name2);  // รับชื่อของลูกค้าคนที่ 2

    // เปรียบเทียบชื่อทั้งสอง
    if(strcmp(name1, name2) == 0) {  // หากชื่อเหมือนกัน
        printf("Both of your names are the same, which is %s.\n", name1);  // แสดงว่าชื่อเหมือนกัน
        printf("The length of the name is %lu characters.\n", strlen(name1));  // แสดงความยาวของชื่อ
    } else {  // หากชื่อไม่เหมือนกัน
        printf("Customer 1: %s (%lu characters)\n", name1, strlen(name1));  // แสดงชื่อของลูกค้าคนที่ 1 พร้อมความยาว
        printf("Customer 2: %s (%lu characters)\n", name2, strlen(name2));  // แสดงชื่อของลูกค้าคนที่ 2 พร้อมความยาว
    }

    return 0;  // สิ้นสุดการทำงานของโปรแกรม
}
