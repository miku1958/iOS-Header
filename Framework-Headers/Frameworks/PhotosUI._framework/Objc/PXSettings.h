//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class NSArray, NSMutableSet, NSSet;

@interface PXSettings : PTSettings
{
    NSMutableSet *_archivedSettings;
    NSSet *_cachedTransientProperties;
    BOOL _hasUserDefaultsOverrides;
    long long _version;
    NSArray *_reparentedRootSettings;
}

@property (readonly, nonatomic) BOOL hasDefaultValues;
@property (readonly, nonatomic) BOOL hasUserDefaultsOverrides;
@property (readonly, nonatomic) PXSettings *parentSettings;
@property (readonly, nonatomic) NSArray *reparentedRootSettings; // @synthesize reparentedRootSettings=_reparentedRootSettings;
@property (nonatomic) long long version; // @synthesize version=_version;

+ (id)_defaultsKey;
+ (id)_signatureDictionaryWithDefaultSettings:(id *)arg1;
+ (id)_userDefaults;
+ (id)createSharedInstance;
+ (BOOL)ignoresKey:(id)arg1;
+ (void)setSuiteName:(id)arg1;
+ (id)sharedInstance;
+ (id)suiteName;
+ (id)transientProperties;
- (void).cxx_destruct;
- (BOOL)_isTransientKey:(id)arg1;
- (void)_resetValuesThatChangedBetweenCurrentDefaultValues:(id)arg1 andArchivedDefaultValues:(id)arg2 defaultSettings:(id)arg3;
- (BOOL)_setOverrideValuesFromDictionary:(id)arg1;
- (void)_validateArchivableValue:(id)arg1 forKey:(id)arg2;
- (void)_willArchiveSettings:(id)arg1;
- (void)addDeferredKeyObserver:(id)arg1;
- (void)addDeferredKeyPathObserver:(id)arg1;
- (void)addKeyObserver:(id)arg1;
- (void)addKeyPathObserver:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveDictionary;
- (id)archiveValueForKey:(id)arg1;
- (void)clearManualOverrides;
- (void)defaultValueDidChangeForKey:(id)arg1;
- (void)performPostSaveActions;
- (void)removeKeyObserver:(id)arg1;
- (void)removeKeyPathObserver:(id)arg1;
- (void)restoreDefaultValues;
- (void)save;
- (BOOL)suppressesIntrospectionOnCustomerInstalls;

@end
