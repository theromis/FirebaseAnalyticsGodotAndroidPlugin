#include "firebase_analytics.h"

#import "app_delegate.h"

FirebaseAnalytics *FirebaseAnalytics::singleton = nullptr;

FirebaseAnalytics::FirebaseAnalytics() {
	ERR_FAIL_COND(singleton != nullptr);
	singleton = this;
}

FirebaseAnalytics::~FirebaseAnalytics() {
	singleton = nullptr;
}
