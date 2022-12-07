# ft_printf
Printf fonksiyonunu yeniden yazıyoruz.

va_list: Variadic argument list veritipi. Bağlı liste türünde bir yapı içinde argümanları tutuyor.

va_start: Bağlı listeyi ve başlatacağı yerden önceki argümanı alır.

va_arg: Bu makro sonraki isteğe bağlı argümanın değeri ile döner ve "ag" değişkeninin değerini sonraki argümanı gösterecek şekilde değiştirir. Böylece her va_arg kullanımında sırayla bir isteğe bağlı argümanın değeri alınır.

va_end: Listeyi sonlandırır.

## Kaynaklar:

http://www.belgeler.org/glibc/glibc-Variadic-Functions.html#glibc-Argument-Macros

https://opensource.apple.com/source/xnu/xnu-201/osfmk/kern/printf.c.auto.html

https://diyot.net/hexadecimal-sayi-sistemi/