/* Brainfuck interpreter in C by Kang Seonghoon, 2021
 * Robert Ryan (RYSF13) quoted to this collection.
 * The world's smallest Brainfuck interpreter in C(170 byte/char)
 * cc -o bf bf.c
 * bf CODE_HERE
 */
s[99],*r=s,*d,c;main(a,b){char*v=1[d=b];for(;c=*v++%93;)for(b=c&2,b=c%7?a&&(c&17
?c&1?(*r+=b-1):(r+=b-1):syscall(4-!b,b,r,1),0):v;b&&c|a**r;v=d)main(!c,&a);d=v;}
