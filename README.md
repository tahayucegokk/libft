Kaynak Kod <br>
 └── Önişleme (Preprocessing) <br>
  └── Derleme (Compilation) <br>
   └── Assembling <br>
    └── Bağlama (Linking) <br>
     └── Program
 # Önişlemci 
Bu aşamada yazılan kaynak kod, önişlemci tarafından işlenir. Önişlemci, kaynak kodun daha sonraki aşamalar için hazırlanmasına yardımcı olur. Önişlemci direktifleri ve makro işlemleri bu aşamada gerçekleşebilir.
    
        gcc -E kaynak.c -o cikti.i
	
 <sup> -E -> preprocess (kaynak kodu, ön işleme aşamasından geçirilir ve ön işlenmiş çıktı elde edilir) </sup> <br>
 <sup> -o -> output (çıktı dosyasının isimlendirmek için kullanılır)</sup>   
# Derleme

Önişleme aşamasının ardından, "assembly" koduna dönüştürülen bir ara kod üretilir. Bu aşamada syntax hataları da kontrol edilir.
    
       gcc -S cikti.i -o cikti.s
    
 <sup> -S -> ("assembly" koduna koduna dönüştülecek bir ara kod üreteceği anlamına gelir) </sup>   
 <sup> -o -> output (çıktı dosyasının isimlendirmek için kullanılır)</sup>  
 
# Assembling 

Üretilen ara kod, assemblier tarafından işlenir ve nesne kodu oluşturulur. 

	gcc -c cikti.s -o nesneDosyasi.o

 <sup> -c -> compile (ön işleme uğramış ara kod derlenir ve bir nesne dosyası oluşturulur) </sup>   
 <sup> -o -> output (çıktı dosyasının isimlendirmek için kullanılır)</sup>  
 
# Linking
Linkleme aşaması, derlenmiş nesne kodlarını bir araya getirir ve çalıştırılabilir bir dosya oluşturur. <br>Bu aşamada:
<sup>
- Dış Kütüphaneler ve Modüller: Kullandığınız dış kütüphaneler ve modüller, programınızın geri kalanıyla birleştirilir. Bu, genellikle bağımlılıkların çözülmesini ve gerektiğinde dış kaynak kodun dahil edilmesini içerir.
- Sembol Çözümleme: Kullandığınız değişkenlerin ve fonksiyonların gerçek bellek adresleri belirlenir. İşletim sistemi, programınızın nerede çalıştığını ve hangi kaynak kodunun nereden geldiğini bilmesi için sembol çözümlemesi yapar.
- Birleştirme: Tüm nesne kodları ve dış kütüphaneler bir araya getirilir ve bir çalıştırılabilir dosya oluşturulur. Bu dosya, tipik olarak bir "yürütülebilir dosya" veya "çalıştırılabilir dosya" olarak adlandırılır.
</sup>

      gcc nesneDosyasi1.o nesneDosyasi2.o -o program
  
 <sup> -o -> output (çıktı dosyasının isimlendirmek için kullanılır)</sup>  
 <sup> nesneDosyasi1 -> nesneDosyasi2 => Program</sup>
 
            Program
        ┌─────┴─────┐
    Object1        Object2   

# Program
Son aşamada, linker tarafından birleştirilen ve hazırlanan program, çalıştırılabilir bir dosya olarak ortaya çıkar.
    
        ./program

____________________________________________________________________________________________________________________
