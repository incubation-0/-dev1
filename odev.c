#include <stdio.h>

int main() {
    float batarya_sicakligi = 0.00;
    int sarj_yuzdesi = 0;
    char kapi_durumu = 'K';
    int fren_pedali = 1;


    printf("Batarya Sıcaklığı giriniz: ");
    scanf("%f",&batarya_sicakligi);
    if(batarya_sicakligi >= 60.00){
        printf("KRİTİK HATA: Motor Aşırı Isındı! Sürüş Engellendi");
    } else if(batarya_sicakligi <= -100.00 || batarya_sicakligi >= 200.00){
        printf("Olanaksız sıcaklık, hatalı sensör verisi");
    } else{
        
    }

}

