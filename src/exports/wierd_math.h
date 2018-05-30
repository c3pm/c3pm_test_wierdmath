// 
//  Created by Oleh Kurachenko
//         aka okurache
//  on 2018-05-30T12:57:56Z as a part of c3pm_test_wierdmath
//  
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

/*
 *  This is a dummy file, created not to really be useful, but to represent the
 *  idea of project structure and how it interacts with other project while using c3pm
 *  Link: https://github.com/c3pm/c3pm
 */

#ifndef C3PM_TEST_WIERDMATH_WIERD_MATH_H
#define C3PM_TEST_WIERDMATH_WIERD_MATH_H

#include "../../imports/c3pm_test_libmath/libmath.h"
#include "../../imports/c3pm_test_polynomial2/polynomial2.h"

inline double wierd_polynomial(double a) {
    return a + square(a) + polynomial2(a, a, a);
}

#endif //C3PM_TEST_WIERDMATH_WIERD_MATH_H
