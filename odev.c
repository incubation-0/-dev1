#include <stdio.h>

int main() {
    float batarya_sicakligi = 0.00;
    int sarj_yuzdesi = 0;
    char kapi_durumu = 'Z';
    int fren_pedali = 0;

    printf("Batarya sıcaklığını giriniz: ");
    scanf("%f",&batarya_sicakligi);

    if(batarya_sicakligi <= -100.00 || batarya_sicakligi >= 200.00){
        printf("Olanaksız sıcaklık, hatalı sensör verisi\n");
    } else{
            printf("Şarj yüzdesi kaçtır: ");
            scanf("%d",&sarj_yuzdesi);
            if (sarj_yuzdesi < 0 || sarj_yuzdesi > 100){
                printf("Hatalı sensör verisi");
            } else{
                printf("Kapı durumu gir:(Açık için A, Kapalı için K): ");
                scanf("%s",&kapi_durumu );
                if(kapi_durumu != 'K' && kapi_durumu != 'A'){
                printf("GEÇERSİZ ÇAR. \n");
                } else{
                    printf("fren_pedali durumu giriniz(1 basılı, 0 basılı değil): ");
                    scanf("%d",&fren_pedali);
                    if(fren_pedali != 0 && fren_pedali != 1){
                    printf("GEÇERSİZ GİRDİ. \n");
                    } else{
                        if(batarya_sicakligi >= 60.00){
                        printf("KRİTİK HATA: Motor Aşırı Isındı! Sürüş Engellendi\n");
                        }
                        if(sarj_yuzdesi < 10){
                        printf("UYARI: Batarya Kritik Seviyede! Sürüş Başlatılamaz.\n");
                        }
                        if(kapi_durumu == 'A'){
                        printf("HATA: Kapılar Açık! Lütfen Kapatınız. \n");
                        }
                        if(fren_pedali = 0){
                        printf("BİLGİ: Güvenlik için frene basarak tekrar deneyin. \n");
                        }
                        if(batarya_sicakligi < 60.00 && sarj_yuzdesi >= 10 && kapi_durumu == 'K' && fren_pedali == 1){
                        printf("Her şey hazır motor başlatılmakta");
                        }
                    } 
                } 
            }   
        }
    }

