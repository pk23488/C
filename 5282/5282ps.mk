
5282ps.dll: dlldata.obj 5282_p.obj 5282_i.obj
	link /dll /out:5282ps.dll /def:5282ps.def /entry:DllMain dlldata.obj 5282_p.obj 5282_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del 5282ps.dll
	@del 5282ps.lib
	@del 5282ps.exp
	@del dlldata.obj
	@del 5282_p.obj
	@del 5282_i.obj
