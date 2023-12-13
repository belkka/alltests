# usage:
#    recdir=<path> make -B demo.cast

recdir ?= $(CURDIR)

%.cast:
	asciinema rec --command='env --chdir=$(recdir) bash' --overwrite $@

demo.svg: demo.cast
	svg-term < $< > $@

