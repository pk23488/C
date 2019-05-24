
5247ps.dll: dlldata.obj 5247_p.obj 5247_i.obj
	link /dll /out:5247ps.dll /def:5247ps.def /entry:DllMain dlldata.obj 5247_p.obj 5247_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del 5247ps.dll
	@del 5247ps.lib
	@del 5247ps.exp
	@del dlldata.obj
	@del 5247_p.obj
	@del 5247_i.obj
