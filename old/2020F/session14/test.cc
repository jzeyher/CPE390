 FF000000     1111 1110 1111 1111 1111 1111 1111 1111 
 -00000003    0000 0000 0000 0000 0000 0000 0000 0011
              =======================================
	                                               1100



	 
 F    EFFFFFC
 1111

 FF000000
 0000001D

 
 R1=FF00001D
XOR 0000001D
	  ========
	  FF0000


	 0001 1101
 	 0001 1101
	 =========
	 0000 0000

	 ldr  r0, =100
	 add r0, #-52 --> sub r0, #52


	 mov  r0, #52   @  110100
	 bic  r0, #13   @  001101
	                   ======
	                   110000 = 48

	 bic  r0, #16      010000
	                   ======
	                   100000 = 32


	 integer = whole numbers to infinity
	 rationals = p/q infinite (countably)

	      1   2   3   4 5 6 7 8 9 10
	 1   1/1 1/2 1/3 1/4
	 2
	 3
	 4
	 5
	 6
	 7
	 Georg Kantor

	 REAL   sqrt(2)

	 
