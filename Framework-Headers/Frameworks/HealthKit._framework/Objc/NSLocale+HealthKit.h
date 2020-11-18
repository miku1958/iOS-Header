//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSLocale.h>

@interface NSLocale (HealthKit)

@property (readonly, nonatomic) BOOL hk_isUSLocale;

+ (BOOL)hk_isUSLocale;
+ (void)hk_setTestLocale:(id)arg1;
+ (void)hk_setTestPreferredLanguages:(id)arg1;
+ (id)hk_testableAutoupdatingCurrentLocale;
+ (id)hk_testableCurrentLocale;
+ (id)hk_testablePreferredLanguages;
- (BOOL)hk_isEquivalent:(id)arg1;
@end
