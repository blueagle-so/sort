all:
	gcc filestruct.c -o base
	g++ bubbleknuth.c -o bubbleknuth
	#g++ insertknuth.c -o insertknuth
	g++ quickknuth.c  -o quickknuth
	#g++ mergeknuth.cpp -o mergeknuth
	#g++ mergeknuth1.cpp -o mergeknuth1
	#g++ shellknuth.cpp -o shellknuth
	#git apply fib
	#g++ shellknuth.cpp -o shellknuthfib
	#git apply unfib
	#compile complite.
	
	./base
	#wait ten seconds.
	#./insertknuth
	./bubbleknuth
	./quickknuth
	#./mergeknuth
	#./mergeknuth1
	#wait 5 sec.
	#./shellknuth
	#wain 4 sec.
	#./shellknuthfib

push:
	git add .
	git commit
	# -m "see web page https://blueagle-so.github.io"
	GIT_SSL_NO_VERIFY=true git push
	
