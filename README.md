# SMART-HOUSE

### PROJEYİ HAZRIRLAYANLAR:
İBRAHİM ETHEM MACİT 213405050,UTKU YURT 213405075,MUHAMMED ABDÜLBAKİ ÇEKEN 213405023

### PROJENİN AMACI  
Projemizin amacı, evdeki güvenlik ve kontrol sistemlerini bir araya getirerek, kullanıcının uzaktan evini izleyebilmesi ve kontrol edebilmesini sağlamaktır. ESP8266 NodeMCU ve Blynk uygulaması kullanılarak deprem, gaz kaçağı, su baskını ve hırsızlık gibi durumlarda anında bildirim alınabilmektedir. Ayrıca, evdeki lambaların uzaktan kontrolü de sağlanarak, ev otomasyonu konusunda kullanıcıya kolaylık sunulmuştur.

## Özellikler

- Deprem, gaz kaçağı, su baskını ve hırsız algılama
- Blynk uygulaması ile uzaktan bildirim
- Uzaktan lamba kontrolü
- Kolay kurulum ve kullanım


### PROJEDE KULLANILAN DONANIMLAR
1 adetESP8266 NodeMCU, 1 adet Deprem Sensörü, 1 adet Gaz Sensörü, 1 adet Yağmur Sensörü, 1 adetUltrasonik Mesafe Sensörü, çokça Jumper kablo, 1 adet buzzer,5 adet led

### PROJEDE KULLANILAN YAZILIM BİLEŞENLERİ
###### Blynk uygulaması:
Sensörlerden Gelen verileri kullanıcıya bildirim olarak iletmek için kullanıldı
###### Arduino Ide:
Projemizde, sensörlerin verilerini işlemek ve Blynk uygulamasına iletmek için gerekli kodları yazmak için kullanılmıştır.
 ###### Fritzing Uygulaması:
 Devre Şemamızı çizmek için kullanıldı.


### PROJEMİZİN DEVRE ŞEMASI VE BAĞLANTILARI
Aşağıda, sensörlerin NodeMCU'ya nasıl bağlandığını gösteren devre şeması bulunmaktadır:
-Deprem Sensörü: D1  pini
-Gaz Sensörü:   A0 pini
-Yağmur  D2  pini
-Ultrasonik Mesafe Sensörü:  Trig pini:D7  Echo pini:D6   
-Ledler: D3,D4,D5,58, pinleri
![Oluşturduğumuz devre şeması](https://github.com/iemacit/IOT-Smart-House/blob/main/Devre-Semasi.png)


## Yazılım Gereksinimleri

- [Arduino IDE](https://www.arduino.cc/en/software)
- [Blynk kütüphanesi](https://blynk.io)
- [ESP8266 kütüphanesi](https://www.espressif.com/en/products/socs/esp8266)

## Kurulum

1. Arduino IDE'yi indirin ve kurun.
2. ESP8266 kartını Arduino IDE'ye ekleyin.
3. Blynk kütüphanesini Arduino IDE'ye ekleyin.
4. `projeSon.ino` dosyasını indirin ve Arduino IDE'de açın.
5. WiFi SSID ve şifrenizi, Blynk Auth Token(blynk uygulamasının arayüzüne bağlanabilmemiz için gereken api keydir,Uygulama içerisinde çok kolay şekilde alınabiliyor) ile birlikte `projeSon.ino` dosyasına ekleyin.
6. ESP8266 kartını bilgisayarınıza bağlayın ve kodu yükleyin.


## Kullanım

1. Tüm donanım bileşenlerini devre şemasına göre bağlayın.
2. ESP8266 kartını güç kaynağına bağlayın.
3. Blynk uygulamasını telefonunuza indirin ve projenizi oluşturun.
4. Blynk uygulamasındaki widget'ları yapılandırarak sensörlerinizi ve LED'lerinizi kontrol edin.

## PROJEMİZİN UZAKTAN KONTROL İÇİN KULLANICI ARAYÜZÜ(BLYNK UYGULAMASI ÜZERİNDEN)
![KULLANICI ARAYÜZÜ](https://github.com/mami4514/SMART-HOUSE/blob/main/IOT-SMART%20HOUSE%20UI.png)



### PROJEMİZİN TANITIM VİDEOSU (YAKINDA GELİYOR)
********** UPLOADİNG.....   *********



