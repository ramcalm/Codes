import math
import os
import random
import re
import sys

# Complete the aVeryBigSum function below.
def aVeryBigSum(ar):
    sum=0
    for i in ar:
        sum+=i;
    return(sum)

n=int(input())
lt=input().split()
lt1=[]
for i in lt:
    lt1.append(int(i))
print(aVeryBigSum(lt1))