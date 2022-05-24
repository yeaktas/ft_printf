# ft_printf
Printf fonksiyonunu yeniden yazıyoruz.

1. va_start kullanarak va_list türünde bir argüman gösterici değişkenini ilklendirin. Argüman gösterici, ilklendirildiğinde ilk isteğe bağlı argümanı gösterecektir.
2. İsteğe bağlı argümanlara va_arg çağırarak erişirsiniz. İlk va_arg çağrısı ilk isteğe bağlı argümanı, ikinci çağrı ikincisini, böyle gider.
Bu çağrı işlemini kalan isteğe bağlı argümanları yoksayacağınız yere kadar sürdürebilirsiniz. Bir işlevin argümanlarından daha azına erişmek bir sorun çıkarmaz ama daha fazla sayıda argümana erişmeye çalışırsanız bozuk değerler alırsınız.
3. Argüman gösterici ile işiniz bittiğinde bunu va_end çağrısıyla belirtin.

Derleme: gcc libft/*.c *.c

Kaynaklar: 
http://www.belgeler.org/glibc/glibc-Variadic-Functions.html#glibc-Argument-Macros
https://opensource.apple.com/source/xnu/xnu-201/osfmk/kern/printf.c.auto.html
https://diyot.net/hexadecimal-sayi-sistemi/