//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate, NSString;

@interface ACHVisibilityEvaluator : NSObject
{
    NSCalendar *_calendar;
    NSDate *_injectedNow;
    NSString *_injectedWatchCountryCode;
}

@property (strong, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (strong, nonatomic) NSDate *injectedNow; // @synthesize injectedNow=_injectedNow;
@property (strong, nonatomic) NSString *injectedWatchCountryCode; // @synthesize injectedWatchCountryCode=_injectedWatchCountryCode;

- (void).cxx_destruct;
- (void)_injectNow:(id)arg1;
- (void)_injectWatchCountryCode:(id)arg1;
- (id)init;
- (BOOL)unearnedAchievementIsVisibleNow:(id)arg1;

@end
