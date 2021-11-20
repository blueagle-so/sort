all:
	gcc filestruct.c -o base
	g++ bubbleknuth.c -o bubbleknuth
	g++ bubbleknuth1.c -o bubbleknuth1
	#compile complite.
	
	./base
	#wain 6 sec.
	./bubbleknuth
	#wait 5 sec.
	./bubbleknuth1
	
