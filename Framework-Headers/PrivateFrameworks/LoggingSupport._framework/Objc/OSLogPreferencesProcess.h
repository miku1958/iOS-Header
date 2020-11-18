//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface OSLogPreferencesProcess : NSObject
{
    NSString *_systemPrefsFile;
    NSDictionary *_systemPrefs;
    NSString *_internalPrefsFile;
    NSDictionary *_internalPrefs;
    NSString *_prefsFile;
    NSMutableDictionary *_prefs;
    NSString *_bundleID;
}

@property (readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, nonatomic) long long effectiveEnabledLevel;
@property (readonly, nonatomic) long long effectivePersistedLevel;
@property (nonatomic) long long enabledLevel;
@property (readonly, nonatomic) BOOL isLocked;
@property (nonatomic) long long persistedLevel;

- (void).cxx_destruct;
- (id)_levelPrefs;
- (long long)defaultEnabledLevel;
- (long long)defaultPersistedLevel;
- (id)initWithBundleID:(id)arg1;
- (void)reset;

@end

