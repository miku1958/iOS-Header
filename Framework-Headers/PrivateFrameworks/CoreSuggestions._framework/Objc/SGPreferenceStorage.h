//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGPreferenceStorage : NSObject
{
}

+ (BOOL)allowAgeBasedPruning;
+ (BOOL)allowGeocode;
+ (BOOL)alwaysShowCancelledEvents;
+ (id)cloudKitPersistedState;
+ (id)defaults;
+ (id)defaultsForTests;
+ (BOOL)detectContacts;
+ (BOOL)detectNLEvents;
+ (BOOL)detectStructuredEvents;
+ (long long)hashedSessionsLogging;
+ (BOOL)hidePastEventsForTests;
+ (long long)messagesToProcessImmediately;
+ (BOOL)onlyShowSignificantNLEvents;
+ (BOOL)onlyShowSignificantPseudoContacts;
+ (id)parsecFlightCachingAPIBaseURL;
+ (int)registerBlockOnSuggestionsSettingsChange:(CDUnknownBlockType)arg1;
+ (void)removeDeprecatedDefaults;
+ (void)resetAllPreferences;
+ (void)setAllowAgeBasedPruning:(BOOL)arg1;
+ (void)setAllowGeocode:(BOOL)arg1;
+ (void)setAllowGeocodeForTests:(BOOL)arg1;
+ (void)setAlwaysShowCancelledEvents:(BOOL)arg1;
+ (void)setCloudKitPersistedState:(id)arg1;
+ (void)setContactsDetectionEnabledForTests:(BOOL)arg1;
+ (void)setDetectContacts:(BOOL)arg1;
+ (void)setDetectNLEvents:(BOOL)arg1;
+ (void)setDetectStructuredEvents:(BOOL)arg1;
+ (void)setFirstPartyCalendarAppIsInstalled:(BOOL)arg1;
+ (void)setFirstPartyMailAppIsInstalled:(BOOL)arg1;
+ (void)setHashedSessionsLogging:(int)arg1;
+ (void)setHidePastEventsForTests:(BOOL)arg1;
+ (void)setMessagesToProcessImmediately:(long long)arg1;
+ (void)setMessagesToProcessImmediatelyForTests:(long long)arg1;
+ (void)setNLEventsDetectionEnabledForTests:(BOOL)arg1;
+ (void)setOnlyShowSignificantNLEvents:(BOOL)arg1;
+ (void)setOnlyShowSignificantPseudoContacts:(BOOL)arg1;
+ (void)setParsecFlightCachingAPIBaseURL:(id)arg1;
+ (void)setProactiveEnabledForTests:(BOOL)arg1;
+ (void)setShowCancelledEventsForTests:(BOOL)arg1;
+ (void)setShowContactsFoundInMail:(BOOL)arg1;
+ (void)setShowContactsFoundInMailForTests:(BOOL)arg1;
+ (void)setShowEventsFoundInMail:(BOOL)arg1;
+ (void)setShowEventsFoundInMailForTests:(BOOL)arg1;
+ (void)setShowPastEvents:(BOOL)arg1;
+ (void)setStructuredEventsDetectionEnabledForTests:(BOOL)arg1;
+ (void)setSyncHistoryToCloud:(BOOL)arg1;
+ (void)setSyncHistoryToCloudForTests:(BOOL)arg1;
+ (void)setUseMLModelForContacts:(BOOL)arg1;
+ (void)setUseMLModelForSelfId:(BOOL)arg1;
+ (void)setUseMLModelForSelfIdForTests:(BOOL)arg1;
+ (BOOL)shouldHarvestEvents;
+ (BOOL)showContactsFoundInMail;
+ (BOOL)showEventsFoundInMail;
+ (BOOL)showPastEvents;
+ (BOOL)showSuggestionsCalendar;
+ (long long)suggestionsLogLevel;
+ (BOOL)syncHistoryToCloud;
+ (void)updateBoolSettingKey:(id)arg1 withValue:(BOOL)arg2;
+ (void)updateIntSettingKey:(id)arg1 withValue:(int)arg2;
+ (BOOL)useMLModelForContacts;
+ (BOOL)useMLModelForSelfId;

@end

