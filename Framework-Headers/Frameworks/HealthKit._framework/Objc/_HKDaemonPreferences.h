//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _HKDaemonPreferences : NSObject
{
}

+ (BOOL)_boolValueForKey:(id)arg1;
+ (id)_safePreferenceForKey:(id)arg1 expectedReturnClass:(Class)arg2;
+ (BOOL)_setPreferenceValue:(void *)arg1 forKey:(id)arg2;
+ (BOOL)isGenerateDemoDataSet;
+ (BOOL)isStoreDemoModeSet;
+ (BOOL)setValue:(id)arg1 forKey:(id)arg2;
+ (BOOL)shouldGenerateDemoData;
+ (void)synchronizePreferencesWithWatch:(id)arg1;
+ (BOOL)usingDemoDataDatabase;
+ (id)valueForKey:(id)arg1;

@end

