//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Fitness/HKSPSleepStoreObserver-Protocol.h>

@class FISleepUserDay, HKSPSleepStore, NSDate, NSString;
@protocol FISleepDataProviderDelegate;

@interface FISleepDataProvider : NSObject <HKSPSleepStoreObserver>
{
    HKSPSleepStore *_sleepStore;
    id<FISleepDataProviderDelegate> _delegate;
    struct os_unfair_lock_s _lock;
    FISleepUserDay *_sleepUserDay;
    NSDate *_lastGoodMorningDismissedDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDate *lastGoodMorningDismissedDate; // @synthesize lastGoodMorningDismissedDate=_lastGoodMorningDismissedDate;
@property (strong, nonatomic) FISleepUserDay *sleepUserDay; // @synthesize sleepUserDay=_sleepUserDay;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearSleepUserDay;
- (void)_fetchLastGoodMorningDismissedDate;
- (void)_setSleepUserDayWithStartOfDay:(id)arg1 endOfDay:(id)arg2;
- (BOOL)_updateLastGoodMorningDismissedDateIfNeeded:(id)arg1;
- (void)_updateSleepUserDay;
- (void)_updateSleepUserDayFromWakeUp:(id)arg1 currentDate:(id)arg2;
- (void)_updateSleepUserDayFromWindDownOrBedtime:(id)arg1 currentDate:(id)arg2;
- (void)dealloc;
- (id)initWithSleepStore:(id)arg1 delegate:(id)arg2;
- (BOOL)isDate:(id)arg1 within24HoursOfDate:(id)arg2;
- (void)sleepStore:(id)arg1 sleepEventRecordDidChange:(id)arg2;
- (void)sleepStore:(id)arg1 sleepModeOnDidChange:(BOOL)arg2;
- (void)sleepStore:(id)arg1 sleepScheduleDidChange:(id)arg2;
- (void)sleepStore:(id)arg1 sleepScheduleStateDidChange:(unsigned long long)arg2;
- (void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2;

@end
