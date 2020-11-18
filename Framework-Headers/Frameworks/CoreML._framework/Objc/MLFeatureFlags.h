//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSUserDefaults;

@interface MLFeatureFlags : NSObject
{
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_flags;
    NSMutableDictionary *_overrideOriginalValues;
}

@property (readonly, nonatomic) NSMutableDictionary *flags; // @synthesize flags=_flags;
@property (readonly, nonatomic) NSMutableDictionary *overrideOriginalValues; // @synthesize overrideOriginalValues=_overrideOriginalValues;
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;

+ (id)sharedFeatureFlags;
- (void).cxx_destruct;
- (void)addFeature:(id)arg1 withControlName:(id)arg2 defaultValue:(BOOL)arg3;
- (id)controlKeyForFeature:(id)arg1;
- (void)defineFeatures;
- (id)init;
- (BOOL)isFeatureEnabled:(id)arg1;
- (BOOL)isNNv2Enabled;
- (BOOL)removeOverrideForFeature:(id)arg1;
- (BOOL)setOverride:(BOOL)arg1 forFeature:(id)arg2;

@end
