//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPUtils : NSObject
{
}

+ (id)SPURLQueryAllowedCharacterSet;
+ (id)UIColorFromString:(id)arg1;
+ (BOOL)appExtensionFirstUnlock;
+ (id)companionConnectionClientIdentifier:(BOOL)arg1;
+ (id)deserializeObject:(id)arg1;
+ (void)dispatchAsyncToMainThread:(CDUnknownBlockType)arg1;
+ (void)dispatchSyncToMainThread:(CDUnknownBlockType)arg1;
+ (unsigned long long)folderSizeAtPath:(id)arg1 volumeBlockSize:(unsigned long long)arg2;
+ (BOOL)isApplicationCompanionConnectionClientIdentifier:(id)arg1;
+ (BOOL)isRTL;
+ (BOOL)isRunningInAnyDemoMode;
+ (BOOL)isRunningInF201DemoMode;
+ (BOOL)isRunningInF5DemoMode;
+ (id)localizedStringForSystemLanguage:(id)arg1 fromBundlePath:(id)arg2;
+ (id)machTime;
+ (id)serializeObject:(id)arg1;
+ (BOOL)subclassForObject:(id)arg1 overridesSelector:(SEL)arg2 fromSuperclass:(Class)arg3;
+ (id)uniqueNumber;
+ (unsigned long long)userVolumeBlockSize;

@end

