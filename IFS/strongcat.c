#!/bin/bash


while IFS='' read -r myline
do
echo $myline
done < $1 > $1.c
