#include "boost\numeric\ublas\matrix.hpp"
#include "boost\numeric\ublas\vector.hpp"
using namespace std;
#include "lens.h"
using namespace boost::numeric::ublas;
int main()
{
    // поверхность 1
    SphericalSurface surf_r1(108.475);
    SphericalSurface surf_r2(-85.430);

    Lens l(surf_r1, surf_r2, 5.630, 1.516);
    Paraxial parax;  // объ€вление экземпл€ра параксиальных характеристик
    l.CalculateParaxial(&parax);
    cout << "f=" << parax.F << " f\'=" << parax.F_ << " Sf=" << parax.SF << " Sf\'=" << parax.SF_ << " SH=" << parax.SH << " SH\'=" << parax.SH_ << endl;
    
}

   