// Gerekli kutuphaneyi ekle
#include <stdio.h> 

// Ana program baslangici
int main() {
    // Degiskenleri tanimla
    char karakter1, karakter2; // Girilen karakterleri tutar.
    int sayi1, sayi2;         // Karakterlerin sayi halini tutar.
    int toplam;               // Sonucu tutar.

    // Kullanicidan iki rakam iste
    printf("Iki adet tek haneli rakam giriniz: ");

    // Girilen iki rakamý oku 
    scanf(" %c %c", &karakter1, &karakter2);

    // Karakterleri sayiya cevir
    sayi1 = karakter1 - '0'; // '5' karakterinden '0' karakterini cikartarak 5 sayisini bulur.
    sayi2 = karakter2 - '0'; // Ayni islemi ikinci karakter icin yapar.

    // Sayilari topla
    toplam = sayi1 + sayi2;

    // Sonucu kontrol et
    if (toplam > 9) { // Eger toplam 9'dan buyukse...
        printf("HATA: Sonuc tek haneli olmali.\n"); // Hata mesaji ver.
    } else { // Degilse...
        printf("Sonuc: %d\n", toplam); // Toplami ekrana yazdir.
    }

    // Programi bitir
    return 0;
}
