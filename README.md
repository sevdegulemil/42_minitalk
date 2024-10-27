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
- signal() ve signal_handler() fonksiyonları

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
(Bir karşılama mesajı ve server PID si gelecektir.)

Server PID sini client a verebilmek için bir shell penceresi daha açın ve burada cilent ı başlatın:

2. client ı başlatın ve bir mesaj yazın
   ```bash
   ./client [server PID] "mesaj"

Ardından server a mesaj gelecektir. (Process i durdurmak için Ctrl+C tuş kombinasyonunu kullanarak process i kill edebilirsiniz.)

Bonus bölümünde ise; Unicode karakterlerini mesajınızda kullanabilirsiniz ve bir doğrulama mesajı alırsınız.

## Fonksiyonlar

minitalk projesi aşağıdaki işlevleri içerir:

Signal Handling: Sinyal alımı ve gönderimi.

Mesaj Gönderimi: Client'tan server'a metin mesajı gönderme.

Mesaj Doğrulama: Gönderilen mesajın başarılı bir şekilde alınıp alınmadığını kontrol etme.
