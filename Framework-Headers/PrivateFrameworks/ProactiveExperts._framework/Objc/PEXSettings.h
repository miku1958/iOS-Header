//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSUserDefaults, PEXSettingsKVOObserver;

@interface PEXSettings : NSObject
{
    NSString *_notificationName;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
    NSSet *_disabledBundleIdentifiers;
    NSUserDefaults *_defaults;
    PEXSettingsKVOObserver *_kvoObserver;
    BOOL _appConnectionsLocationsEnabled;
}

@property (nonatomic, getter=isAppConnectionsLocationsEnabled) BOOL appConnectionsLocationsEnabled; // @synthesize appConnectionsLocationsEnabled=_appConnectionsLocationsEnabled;

+ (void)clearTestSettings;
+ (void)disableBundleIdentifier:(id)arg1;
+ (void)initialize;
+ (BOOL)servantShouldRespondToQuery:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_bundleIdentifierIsEnabled:(id)arg1;
- (void)_clearTestSettings;
- (void)_disableBundleIdentifier:(id)arg1;
- (void)_refreshDisabledBundleIds;
- (BOOL)_showLocationsFoundInApps;
- (void)_unsubscribe;
- (void)_updateSettingsValues;
- (void)dealloc;
- (id)initWithNotification:(id)arg1;

@end
