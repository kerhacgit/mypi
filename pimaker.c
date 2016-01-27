#include <stdio.h>
int main()
{
    void b2grandpwr(void);
    void s2grandpwr(void);
    void b2imaxx(void);
    void b2huake(void);
    
    b2grandpwr();
    s2grandpwr();
    b2imaxx();
    b2huake();
    
    printf("test\n");
    return 0;
}
    
void b2grandpwr(void)
    {
        printf("Bill To: 浩能環球公司\n");                                                                                                                                                                   
        printf("Addr:    香港九龍觀塘駿業街51 號南達大廈22樓B室\n");
        printf("Attn:    Peter\n");
        printf("Tel:     852-35680025\n");
    }

void s2grandpwr(void)
    {
        printf("Ship To: 浩能環球公司\n");
        printf("Addr:    香港九龍觀塘駿業街51 號南達大廈22樓B室\n");
        printf("Attn:    Peter\n");
        printf("Tel:     852-35680025\n");
    }

void b2imaxx(void)
    {
        printf("Bill To: 萬盛高科有限公司 \n");
        printf("Addr:    香港九龙湾宏开道15 号九龙湾工业中心7 楼28 室\n");
        printf("Attn:    May\n");
        printf("Tel:    (0852)23336381\n");
    }

void b2huake(void)
    {
	    printf("Bill To: 华科供应链(香港)有限公司\n");
        printf("Addr:    香港新界沙田小沥源安平街8号伟达中心6楼601室\n"); 
        printf("Attn:    陈明达\n");
        printf("Tel:     (852)2148 9668\n");
        printf("Fax:     (852)3105 9776\n");
    }

void s2huake(void)
    {
        printf("Ship To: 华科供应链(香港)有限公司\n");
        printf("Addr:    香港新界沙田小沥源安平街8号伟达中心6楼601室\n"); 
        printf("Attn:    陈明达\n");
        printf("Tel:     (852)2148 9668\n");
        printf("Fax:     (852)3105 9776\n");
    }

void s2fuyang(void)
    {
	    printf("Ship To: 富洋进出⼝有限公司\n");
        printf("Addr:    沙⽥小沥源安平街8号伟达中⼼七楼\n");
        printf("Attn:    冯小姐\n");
        printf("Tel:     00852-27555690\n");
        printf("Fax:     00852-27557014\n");	
    }

void b2fuyang(void)
    {
        printf("Ship To: 富洋进出⼝有限公司\n");
        printf("Addr:    沙⽥小沥源安平街8号伟达中⼼七楼\n");
        printf("Attn:    冯小姐\n");
        printf("Tel:     00852-27555690\n");
        printf("Fax:     00852-27557014\n");   
    }

void b2sense(void)
    {
	    printf("Bill To: 深圳盛世物联\n");
	    printf("Addr:    深圳市福⽥田区中航路新亚洲⼆二期国利⼤大厦B座2942\n");
	    printf("Attn:    范彦博\n");
	    printf("Tel:     18123741531\n");
	    printf("Fax:    \n");
    }

void b2ereach(void)
    {
	    //printf("Ship To: E-REACH INDUSTRIAL LIMITED\n");
        printf("Bill To: E-REACH INDUSTRIAL LIMITED\n");
        printf("Addr:    10/F., KRAS ASIA INDUSTRIAL BUILDING , NO.79 HUNG TO ROAD ，KWUN TONG, KOWLOON.,HK.\n");
        printf("Attn:    Candy\n");
        printf("Tel:     (852) 3595 2155 2151 1238\n");
        printf("Fax:     (852)3595 2156\n");
    }

void s2ereach(void)
    {
        printf("Ship To: E-REACH INDUSTRIAL LIMITED\n");
         //printf("Bill To: E-REACH INDUSTRIAL LIMITED\n");
        printf("Addr:    10/F., KRAS ASIA INDUSTRIAL BUILDING , NO.79 HUNG TO ROAD ，KWUN TONG, KOWLOON.,HK.\n");
        printf("Attn:    Candy\n");
        printf("Tel:     (852) 3595 2155 2151 1238\n");
        printf("Fax:     (852)3595 2156\n");  
    }
