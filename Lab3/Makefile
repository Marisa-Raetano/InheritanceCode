CFLAGS=-g -Wfatal-errors
Warmup: tape.o episode.o warmup.cpp
	clang++ ${CFLAGS} warmup.cpp tape.o episode.o -o Warmup
%.o: %.cpp %.h
	clang++ -c -o $@ $< ${CFLAGS}
.PHONY: clean submit
clean:
	rm -f *.o Warmup
submit:
	tar czv -C.. -f ../Lab3.tar.gz Lab3
