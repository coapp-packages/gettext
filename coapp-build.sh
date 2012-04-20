if (echo "$PWD"|grep -q ' '); then
	echo This project cannot be built from a directory containing a space.
	exit 1
fi

export C_INCLUDE_PATH=$PWD/../libiconv/mingw-build/include
export CPLUS_INCLUDE_PATH=$PWD/../libiconv/mingw-build/include
export LIBRARY_PATH=$PWD/../libiconv/mingw-build/lib/.libs
cd gettext-runtime
mkdir mingw-build
cd mingw-build
../configure --enable-threads=win32 --disable-csharp
make all
