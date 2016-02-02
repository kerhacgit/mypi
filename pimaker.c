#include <stdio.h>
int main(int argc, char * argv[])
{
    
    void b2grandpwr(void);
    void s2grandpwr(void);
    void b2imaxx(void);
    void b2huake(void);
    void p_line(void);
    void p_start();
    void yosunpi(void);
    /*
     * progam format: mypi pihead billto shipto payment itemsnumber partnumber rsl qty
     *                mypi yosun b2globalic s2globalic TT 2 ADS8320E/2K5 3.00 5,000 ADS8345BN 6.00 2,000
     * PI head 
     * 1    yosun
     * 2    globalic
     */
    int pihead;
    int b2addr;
    int s2addr;
    /*
     * check pihead
     */
    if(argv[1]=="yosun")
        pihead=1;
    else if(argv[1]=="globalic")
        pihead=2;
    else
        pihead=0;
    /*
     * check bill to address 
     */
    if(argv[2]=="b2grandpwr")
        b2addr=1;
    else if(argv[2]=="imaxx")
        b2addr=2;
    else if(argv[2]=="huake")
        b2addr=3;
    else if(argv[2]=="fuyang")
        b2addr=4;
    else if(argv[2]=="sense")
        b2addr=5;
    else if(argv[2]=="ereach")
        b2addr=6;
    else 
        b2addr=0;
    /*
     * check ship to address
     */
    if(argv[2]=="b2grandpwr")                                                                                                                                   
        s2addr=1;
    else if(argv[2]=="imaxx")
        s2addr=2;
    else if(argv[2]=="huake")
        s2addr=3;
    else if(argv[2]=="fuyang")
        s2addr=4;
    else if(argv[2]=="sense")
        s2addr=5;
    else if(argv[2]=="ereach")
        s2addr=6;
    else 
        s2addr=0;
    
    p_line();
    b2grandpwr();
    s2grandpwr();
    b2imaxx();
    b2huake();
    p_start();

    //printf("test\n");
    return 0;
}

void p_line(void)
    {
        printf("---------------------------------------------------------\n");
    }

void p_start(void)
    {
        printf("*********************************************************\n");
    }

    
void grandpwr(int type)
    {
        if(type==1)
            printf("Bill To: 浩能環球公司\n"); 
        else
            printf("Ship To: 浩能環球公司\n");

        printf("Addr:    香港九龍觀塘駿業街51 號南達大廈22樓B室\n");
        printf("Attn:    Peter\n");
        printf("Tel:     852-35680025\n");
    }

/*
void s2grandpwr(void)
    {
        printf("Ship To: 浩能環球公司\n");
        printf("Addr:    香港九龍觀塘駿業街51 號南達大廈22樓B室\n");
        printf("Attn:    Peter\n");
        printf("Tel:     852-35680025\n");
    }
*/
void imaxx(int type)
    {
        if(type==1)
            printf("Bill To: 萬盛高科有限公司 \n");
        else
            printf("Ship To: 萬盛高科有限公司 \n");

        printf("Addr:    香港九龙湾宏开道15 号九龙湾工业中心7 楼28 室\n");
        printf("Attn:    May\n");
        printf("Tel:    (0852)23336381\n");
    }

void huake(int type)
    {
        if(type==1)
	        printf("Bill To: 华科供应链(香港)有限公司\n");
        else
            printf("Ship To: 华科供应链(香港)有限公司\n");

        printf("Addr:    香港新界沙田小沥源安平街8号伟达中心6楼601室\n"); 
        printf("Attn:    陈明达\n");
        printf("Tel:     (852)2148 9668\n");
        printf("Fax:     (852)3105 9776\n");
    }

/*
void s2huake(void)
    {
        printf("Ship To: 华科供应链(香港)有限公司\n");
        printf("Addr:    香港新界沙田小沥源安平街8号伟达中心6楼601室\n"); 
        printf("Attn:    陈明达\n");
        printf("Tel:     (852)2148 9668\n");
        printf("Fax:     (852)3105 9776\n");
    }
*/
void fuyang(int type)
    {
        if(type==1)
	        printf("Ship To: 富洋进出⼝有限公司\n");
        else
            printf("Ship To: 富洋进出⼝有限公司\n"); 

        printf("Addr:    沙⽥小沥源安平街8号伟达中⼼七楼\n");
        printf("Attn:    冯小姐\n");
        printf("Tel:     00852-27555690\n");
        printf("Fax:     00852-27557014\n");	
    }
/*
void b2fuyang(void)
    {
        printf("Ship To: 富洋进出⼝有限公司\n");
        printf("Addr:    沙⽥小沥源安平街8号伟达中⼼七楼\n");
        printf("Attn:    冯小姐\n");
        printf("Tel:     00852-27555690\n");
        printf("Fax:     00852-27557014\n");   
    }
*/
void sense(int type)
    {
	    if(tyype==1)
             printf("Bill To: 深圳盛世物联\n");
        else
             printf("Ship To: 深圳盛世物联\n"); 

        printf("Addr:    深圳市福⽥田区中航路新亚洲⼆二期国利⼤大厦B座2942\n");
	    printf("Attn:    范彦博\n");
	    printf("Tel:     18123741531\n");
	    printf("Fax:    \n");
    }

void ereach(int type)
    {
	    if(type ==1)
            printf("Bill To: E-REACH INDUSTRIAL LIMITED\n");
        else
            printf("Ship To: E-REACH INDUSTRIAL LIMITED\n");
        
        printf("Addr:    10/F., KRAS ASIA INDUSTRIAL BUILDING , NO.79 HUNG TO ROAD ，KWUN TONG, KOWLOON.,HK.\n");
        printf("Attn:    Candy\n");
        printf("Tel:     (852) 3595 2155 2151 1238\n");
        printf("Fax:     (852)3595 2156\n");
    }
/*
void s2ereach(void)
    {
        printf("Ship To: E-REACH INDUSTRIAL LIMITED\n");
         //printf("Bill To: E-REACH INDUSTRIAL LIMITED\n");
        printf("Addr:    10/F., KRAS ASIA INDUSTRIAL BUILDING , NO.79 HUNG TO ROAD ，KWUN TONG, KOWLOON.,HK.\n");
        printf("Attn:    Candy\n");
        printf("Tel:     (852) 3595 2155 2151 1238\n");
        printf("Fax:     (852)3595 2156\n");  
    }
*/
