#ifndef FIXPOINTNUM_HPP
#define FIXPOINTNUM_HPP

#include <iostream>
#include <ostream>

// ausgehend von sizeof( int ) = 4 byte = 32 bit
template < int FLOOR = 1, int FRACT  = 1 >
class FPN {

	public:

		FPN ( double const &p_floatingPointNumber ) {

			// hier muss p_floatingPointNumber in x geschrieben werden
			// x[0] - x[FLOOR-1] sollen die vorkommastellen
			// x[FLOOR] - x[FLOOR+FRACT-1] sollen die nachkommastellen sein
			// das stimmt noch nicht
			x[ 0 ] = int( p_floatingPointNumber );
			x[ FLOOR ] = int( ( 1L << 32 ) * p_floatingPointNumber );
		}

		~FPN ( ) {

		}

		//sollte private sein:
	public:

		int
		x[ FLOOR + FRACT ];

	public:

		FPN
		operator + ( FPN const &p_y ) const {

			// hier mit leben fuellen
			// gebe erstmal 0 zurueck
			return FPN( 0. );
		}

		FPN
		operator - ( FPN const &p_y ) const {

			// hier mit leben fuellen
			// gebe erstmal 0 zurueck
			return FPN( 0. );
		}

		FPN
		operator * ( FPN const &p_y ) const {

			// hier mit leben fuellen
			// gebe erstmal 0 zurueck
			return FPN( 0. );
		}

		FPN
		operator / ( FPN const &p_y ) const {

			// hier mit leben fuellen
			// gebe erstmal 0 zurueck
			return FPN( 0. );
		}
};

// die funktion muss natuerlich wieder die richtige zahl anzeigen
// derzeit spuckt sie nur die integers aus
template < int FLOOR = 1, int FRACT  = 1 >
std::ostream
& operator << ( std::ostream &p_o, FPN< FLOOR, FRACT > const & p_fpn ) {

	for( int i = 0; i < FLOOR + FRACT - 1; ++ i ) {

		p_o << p_fpn.x[ i ]<< " ";
	}

	p_o << p_fpn.x[ FLOOR + FRACT - 1 ] << std::endl;

	return p_o;
}

#endif // FIXPOINTNUM_HPP
