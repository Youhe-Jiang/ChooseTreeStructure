# ChooseTreeStructure

An algorithm to display tree structure

树高树宽范式：针对不同节点数完成不同宽度树的建立 2^x*3^y*5^z...

范式标准

质数：（质数±1）因数随机组合

非质数：因数随机组合

7节点树：2^1*3^1+1 & 2^3-1

Case1: 2*3+1

Case2: 3*2+1

Case3: 1*7

Case4: 7*1

Case5: 2*2*2-1

Case6: 2*4-1 (=2*3+1)

Case7: 4*2-1

8节点数：2^3 & 3^2-1

Case1: 1*8

Case2: 8*1

Case3: 2*2*2

Case4: 2*4

Case5: 4*2

Case6: 3*3-1

9节点数：2^3+1 & 3^2 & 2^1*5^1-1

Case1: 2*2*2+1

Case2: 2*4+1

Case3: 4*2+1

Case4: 1*9

Case5: 9*1

Case6: 3*3

Case7: 2*5-1 (=2*4+1)

Case8: 5*2-1

10节点数：3^2+1 & 2^1*5^1

Case1: 3*3+1

Case2: 1*10

Case3: 10*1

Case4: 2*5

Case5: 5*2
