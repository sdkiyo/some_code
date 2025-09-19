#include "utils.hpp"

namespace su {
	/*void write_obj( const std::string& path, Voxel vx[] ) {
		std::ofstream fout;
		fout.open( path );

		if ( !fout.is_open() ) {
			throw std::runtime_error( "\nfailed to write obj!\n" );
		} else {
			for ( int i = 0; i < 2; i++ ) {
				fout << "v ";
				for ( int j = 0; j < 3; j++ ) {
					fout << vx[i].xyz[j] << " ";
				}
				fout << "\n";
			}
		}
		fout.close();
	}// write_obj()*/


}// namespace su ( special utils )
