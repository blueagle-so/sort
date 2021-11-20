all:
	gcc filestruct.c -o base
	g++ bubbleknuth.c -o bubbleknuth
	g++ bubbleknuthmod.c -o bubbleknuthmod
	#compile complite.
	
	./base
	#wain 6 sec.
	./bubbleknuth
	#wait 5 sec.
	./bubbleknuthmod
	
