
export BIN=$(abspath ./bin)


all:
	mkdir -p $(BIN)
	$(MAKE) -C c
	$(MAKE) -C cpp
	$(MAKE) -C csharp
	$(MAKE) -C go

nuke:
	$(MAKE) -C c nuke
	$(MAKE) -C cpp nuke
	$(MAKE) -C csharp nuke
	$(MAKE) -C go nuke

