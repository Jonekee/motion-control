#include <motion_control/profile_point.h>
#include <motion_control/pregenerated_motion_profile.h>

#ifndef MOTION_CONTROL_PROFILE1D_H
#define MOTION_CONTROL_PROFILE1D_H

namespace MotionControl {

class MotionProfile1D {
public:
    // Get a point at the given t.
    virtual ProfilePoint1D get_at_time(double t) = 0;

    // The full duration in seconds of the profile
    virtual double duration() = 0;
};

}

#endif
