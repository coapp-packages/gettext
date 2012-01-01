if (echo "$PWD"|grep -q ' '); then
	echo This project cannot be built from a directory containing a space.
	exit 1
fi

export C_INCLUDE_PATH=$PWD/../libiconv/include
export CPLUS_INCLUDE_PATH=$PWD/../libiconv/include
export LIBRARY_PATH=$PWD/../libiconv/lib/.libs
cd gettext-runtime
configure --enable-threads=win32
make all
