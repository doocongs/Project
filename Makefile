DIRS = RSP bbopgi B31 start

.PHONY: all clean

all:
	@for d in $(DIRS);\
	do \
	$(MAKE) -C $$d;\
	done
	
clean:
	@for d in $(DIRS);\
	do \
	$(MAKE) -C $$d clean;\
	done
