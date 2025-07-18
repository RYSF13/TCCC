/* SQRT2 by Robert Ryan, 07-18-2025
 * Calculate sqrt 2 to 2333 decimal digits(but no decimal point)
 * output: 14142135623730950488168872429698078569...
 */

a=1e3,b,c=1413,d,f[1414],n=800,k;main(){for(;b<c;
f[b++]=14);for(;n--;d+=*f*a,printf("%02d",d/a),*f
=d%a)for(d=0,k=c;--k;d/=b,d*=2*k-1)f[k]=(d+=f[k]*
a)%(b=100*k);}/* √2 2333 digits - Robert Ryan  */
