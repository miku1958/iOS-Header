//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NSPersonNameComponentsFormatterPreferences : NSObject
{
}

+ (void)_postPreferencesChangedNotification;
+ (void)_setPreference:(id)arg1 toValue:(long long)arg2 usingExistingGetter:(SEL)arg3;
+ (void)_syncronizeGizmoDefaultWithKey:(id)arg1 value:(long long)arg2;
+ (id)infoClassFromPreferencesSource:(unsigned long long)arg1;
+ (id)mappedPreferencesForPreferences:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
+ (void)setDefaultDisplayNameOrder:(long long)arg1;
+ (void)setPreferNicknamesDefault:(BOOL)arg1;
+ (void)setShortNameFormat:(long long)arg1;
+ (void)setShortNameIsEnabled:(BOOL)arg1;

@end
