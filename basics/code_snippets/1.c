 #include <stdio.h>
 //void m();
    void main()
    {
        m();
        m();
    }
    void m()
    {
        static int x = 5;
        x++;
        printf("%d", x);
    }
