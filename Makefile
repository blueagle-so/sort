all:
	gcc filestruct.c -o base
	g++ insertknuth.c -o insertknuth
	g++ quicksort.c  -o quick
	g++ merge.cpp -o merge
	g++ mergeknuth.cpp -o mergeknuth
	g++ mergeknuth1.cpp -o mergeknuth1
	g++ shellknuth.cpp -o shellknuth
	#git apply fib
	#g++ shellknuth.cpp 	 
	#git apply unfib
	#compile complite.
	
	./base
	#wait ten seconds.
	./insertknuth
	./quick
	./merge
	./mergeknuth
	./mergeknuth1
	#wait 5 sec.
	./a1.out
	#wain 4 sec.
	./a.out
push:
	git add .
	git commit
	# -m "see web page https://blueagle-so.github.io"
	GIT_SSL_NO_VERIFY=true git push
	
