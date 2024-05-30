# SMART-HOUSE

### PROJEYİ HAZRIRLAYANLAR:
İBRAHİM ETHEM MACİT 213405050,UTKU YURT 213405075,MUHAMMED ABDÜLBAKİ ÇEKEN 213405023

### PROJENİN AMACI  
Projemizin amacı, evdeki güvenlik ve kontrol sistemlerini bir araya getirerek, kullanıcının uzaktan evini izleyebilmesi ve kontrol edebilmesini sağlamaktır. ESP8266 NodeMCU ve Blynk uygulaması kullanılarak deprem, gaz kaçağı, su baskını ve hırsızlık gibi durumlarda anında bildirim alınabilmektedir. Ayrıca, evdeki lambaların uzaktan kontrolü de sağlanarak, ev otomasyonu konusunda kullanıcıya kolaylık sunulmuştur.

### PROJEDE KULLANILAN DONANIMLAR
1 adetESP8266 NodeMCU, 1 adet Deprem Sensörü, 1 adet Gaz Sensörü, 1 adet Yağmur Sensörü, 1 adetUltrasonik Mesafe Sensörü, çokça Jumper kablo, 1 adet buzzer,5 adet led

### PROJEDE KULLANILAN YAZILIM BİLEŞENLERİ
Blynk uygulaması:Sensörlerden Gelen verileri kullanıcıya bildirim olarak iletmek için kullanıldı
 Arduino Ide:Projemizde, sensörlerin verilerini işlemek ve Blynk uygulamasına iletmek için gerekli kodları yazmak için kullanılmıştır.
 Fritzing Uygulaması:Devre Şemamızı çizmek için kullanıldı.


### PROJEMİZİN DEVRE ŞEMASI VE BAĞLANTILARI
Aşağıda, sensörlerin NodeMCU'ya nasıl bağlandığını gösteren devre şeması bulunmaktadır:
-Deprem Sensörü: D1  pini
-Gaz Sensörü:   A0 pini
-Yağmur  D2  pini
-Ultrasonik Mesafe Sensörü:  Trig pini:D7  Echo pini:D6   
-Ledler: D3,D4,D5,58, pinleri
![Oluşturduğumuz devre şeması](https://github.com/iemacit/IOT-Smart-House/blob/main/devre-semasi.png)



