SUBS=adv_io file fork gdb inotify make pipe signal

all:
	for i in $(SUBS);do	\
		make -C $$i ;	\
	done
	#if [ -d /tmp/install ];then echo "cp to tmp...";else echo "false";fi 
clean:
	for i in $(SUBS);do make -C $$i clean;done
	
