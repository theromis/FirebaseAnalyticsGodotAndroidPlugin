#ifndef FIREBASE_ANALYTICS_H
#define FIREBASE_ANALYTICS_H

#include "core/object/ref_counted.h"

class FirebaseAnalytics : public RefCounted {
    GDCLASS(FirebaseAnalytics, RefCounted);
    

protected:
    static void _bind_methods();
    
    static FirebaseAnalytics* singleton;
    
public:
    FirebaseAnalytics();
    ~FirebaseAnalytics();
};

#endif
