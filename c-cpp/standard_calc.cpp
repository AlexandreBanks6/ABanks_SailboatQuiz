#include "stdbool.h"
#include "standard_calc.h"

/**
 * @brief Bounds the provided angle between [-180, 180) degrees.
 *
 * @param angle: The input angle in degrees.
 *
 * @return float: The bounded angle in degrees.
 */
float bound_to_180(float angle) {
    if (angle < -180) {
        angle = -180;
    }
    if (angle > 179) {
        angle = 179;
    }

    return angle;
}

/**
 * @brief Determines whether an angle is between two other angles
 * 
 * @param first_angle:  The first bounding angle in degrees.
 * @param middle_angle: The angle in question in degrees.
 * @param second_angle: The second bounding angle in degrees.
 * @return bool: TRUE when `middle_angle` is not in the reflex angle of `first_angle` and `second_angle`, FALSE otherwise
 */
bool is_angle_between(float first_angle, float middle_angle, float second_angle) {
    int val = false;

    if ((first_angle < middle_angle) && (middle_angle < second_angle)) {
        val = true;
    }

    return val;
}
