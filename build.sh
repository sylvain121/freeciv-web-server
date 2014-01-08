cd Build
cd freeciv
svn co svn://svn.gna.org/svn/freeciv/trunk -r 22904 freeciv
./apply_patches.sh
cd freeciv
./autogen.sh --enable-fcweb --prefix=`pwd`/../../../bin/civserver/
make -j4
make install
cd ..
cp -Rf data/fcweb `pwd`/../../bin/civserver/share/freeciv/
