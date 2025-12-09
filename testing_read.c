Script started on 2025-12-09 13:37:40-05:00
Default printer is: prism
]0;sylau:/eecs/home/sylaucrimson 501 $ cat weakcat
#!/bin/bash
while read myline
do
echo $myline
done < $1
]0;sylau:/eecs/home/sylaucrimson 502 $ cat feedcat.c
apple orange banana
today is tuesday
           leadingSpace
trailing space           
testslash \ 
testepath /
testing newline\n
no newline]0;sylau:/eecs/home/sylaucrimson 503 $ weakcat feedcat.c
apple orange banana
today is tuesday
leadingSpace
trailing space
testslash
testepath /
testing newlinen
]0;sylau:/eecs/home/sylaucrimson 504 $ done > test
testing_read  testsort.c    
crimson 504 $ done > test[K[K[K[K[K e[K[K[K[K[K[K[K[Kexit
exit

Script done on 2025-12-09 13:39:21-05:00
