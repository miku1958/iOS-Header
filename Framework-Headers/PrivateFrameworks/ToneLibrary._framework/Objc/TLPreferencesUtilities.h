//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TLPreferencesUtilities : NSObject
{
}

+ (struct __CFDictionary *)_copyAllKeysAndValuesFromDomain:(struct __CFString *)arg1 usingPreferencesScope:(int)arg2;
+ (void)_enumerateKeysAndValuesWithEligibleKeyPrefixes:(id)arg1 inDomain:(struct __CFString *)arg2 usingPreferencesScope:(int)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (id)_existingPerAccountPreferenceKeyPrefixesWithRegularPreferenceKeys:(const id *)arg1 regularPreferenceKeysCount:(unsigned long long)arg2;
+ (void)_setValue:(void *)arg1 forKey:(struct __CFString *)arg2 inDomain:(struct __CFString *)arg3 usingPreferencesScope:(int)arg4;
+ (void)_synchronizeDomain:(struct __CFString *)arg1 usingPreferencesScope:(int)arg2;
+ (void)migratePerAccountPreferencesInDomain:(struct __CFString *)arg1 withRegularPreferenceKeys:(const id *)arg2 regularPreferenceKeysCount:(unsigned long long)arg3 intoSinglePerAccountPreferenceWithSuffix:(id)arg4 usingPreferencesScope:(int)arg5;

@end

