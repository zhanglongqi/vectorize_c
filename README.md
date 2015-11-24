# vectorize_c

If y[] is not used after assigned, this assignment will be optimized also.

`gcc -O2  -ftree-vectorize -ftree-vectorizer-verbose=1 main.c`

Here is the output:

```
main.c: In function ‘main’:
main.c:19:3: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘__suseconds_t’ [-Wformat=]
   printf("%d us\n", stop.tv_usec - start.tv_usec);
   ^

Analyzing loop at main.c:21

Analyzing loop at main.c:13


Vectorizing loop at main.c:13

main.c:13: note: LOOP VECTORIZED.
main.c:5: note: vectorized 1 loops in function.
```
