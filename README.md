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

# Header files #

    typedef struct s_list
    { 
		void			*content;
		struct s_list	*next;
    }					t_list;



Her düğüm (node), 'content' işaretçisi (pointer) ile bir veriye işaret eder ve bir sonraki düğüm 'next' işaretçisi (pointer) ile bağlanır. 

 <b> struct: </b> <br>
 Farklı veri türlerini bir araya getirerek yeni bir veri yapısı oluşturmayı sağlayan bir programlama terimidir.

 <b> typedef: </b> <br>
 Mevcut bir veri türüne daha anlamlı bir isim atamayı sağlayan bir programlama terimidir.

 <b> content: </b> <br>
 Elementin içerdiği veri. void * tipi her tür veriyi tutmanızı sağlar
 
  <b> next: </b> <br>
 Bir sonraki elementin adresini tutar. Eğer son elemensa NULL değerindedir.
 
 <b> Node: </b> <br>
 <sup>C programlama dilinde "node" veya diğer adıyla "düğüm", veri saklamak için kullanılan bir kutucuktur. Özellikle veri yapıları oluştururken  kullanılır. Örneğin, bir liste yapısında her "düğüm", veriyi tutar ve bir sonraki düğümün nerede olduğunu gösterir. Bu sayede veriler düzenli bir şekilde bağlanabilir.<sup>
 
 	+------------------+      +------------------+      +------------------+
  	|      content     | ---> |      content     | ---> |      content     |
   	+------------------+      +------------------+      +------------------+
	|       next       | ---> |       next       | ---> |       next       | 
 	+------------------+      +------------------+      +------------------+
____________________________________________________________________________________________________________________

# Variables (Değişkenler)

<b> size_t </b>: Bellek bloklarının boyutlarını temsil etmek için kullanılan bir tamsayı veri türüdür. 

<b> const </b>: "Constant" (sabit) kelimesinin kısaltmasıdır. Değişkenlerin veya işaretçilerin değerlerinin değiştirilemez olduğunu belirtmek için kullanılır.

	size_t	ft_strlen(const char *s)
	{
		size_t	i;

		i = 0;
		while (s[i] != '\0')
			i++;
		return (i);
	}
