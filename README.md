# minitalk

**minitalk**, C dilinde yazılmış bir sinyal tabanlı iletişim uygulamasıdır. Bu proje, iki ayrı process arasında basit metin iletimi sağlamak amacıyla UNIX sinyallerini kullanarak çalışır.

## İçerik

- [Özellikler](#özellikler)
- [Kurulum](#kurulum)
- [Kullanım](#kullanım)
- [Fonksiyonlar](#fonksiyonlar)

## Özellikler

- İki ayrı process (client ve server) arasında metin gönderimi.
- UNIX sinyallerinin (`SIGUSR1` ve `SIGUSR2`) kullanımı.
- Gönderilen mesajın başarıyla alındığını doğrulama mekanizması.

## Kurulum

Bu projeyi kendi bilgisayarınızda kullanmak için aşağıdaki adımları izleyin:

1. Projeyi klonlayın:
   ```bash
   git clone https://github.com/kullanıcı_adı/minitalk.git
2. client ve server dosyalarını derleyin
   ```bash
   make
   
## Kullanım

Projenin çalışması için önce server işlemini başlatmalısınız. Ardından client ile mesaj gönderebilirsiniz.
1. server ı başlatın
   ```bash
   ./server
2. client ı başlatın ve bir mesaj yazın
   ```bash
   ./client [server PID] "mesaj"

Bonus bölümünde ise; Unicode karakterlerini mesajınızda kullanabilirsiniz ve bir doğrulama mesajı alırsınız.

## Fonksiyonlar

minitalk projesi aşağıdaki işlevleri içerir:

Signal Handling: Sinyal alımı ve gönderimi.

Mesaj Gönderimi: Client'tan server'a metin mesajı gönderme.

Mesaj Doğrulama: Gönderilen mesajın başarılı bir şekilde alınıp alınmadığını kontrol etme.
