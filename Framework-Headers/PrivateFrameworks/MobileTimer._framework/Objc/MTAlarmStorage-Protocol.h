//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTAlarm, MTChangeSet, NSArray, NSDate, NSString;
@protocol MTAlarmObserver, MTSource;

@protocol MTAlarmStorage <NSObject>

@property (readonly, nonatomic) NSArray *alarms;
@property (readonly, nonatomic) NSArray *allAlarms;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) MTAlarm *nextAlarm;
@property (readonly, nonatomic) MTAlarm *sleepAlarm;
@property (readonly, nonatomic) NSArray *sleepAlarms;

- (void)addAlarm:(MTAlarm *)arg1 withCompletion:(void (^)(NSError *))arg2 source:(id<MTSource>)arg3;
- (void)alarmWithIdentifier:(NSString *)arg1 withCompletion:(void (^)(MTAlarm *))arg2;
- (void)dismissAlarmWithIdentifier:(NSString *)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(void (^)(NSError *))arg3 source:(id<MTSource>)arg4;
- (void)dismissAlarmWithIdentifier:(NSString *)arg1 dismissDate:(NSDate *)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(void (^)(NSError *))arg4 source:(id<MTSource>)arg5;
- (void)getAlarmsWithCompletion:(void (^)(NSArray *, NSArray *, MTAlarm *, NSError *))arg1;
- (void)registerObserver:(id<MTAlarmObserver>)arg1;
- (void)removeAlarm:(MTAlarm *)arg1 withCompletion:(void (^)(NSError *))arg2 source:(id<MTSource>)arg3;
- (void)removeAlarmWithIdentifier:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2 source:(id<MTSource>)arg3;
- (void)removeAllAlarmsForSource:(id<MTSource>)arg1;
- (void)setAllAlarms:(NSArray *)arg1 sleepAlarms:(NSArray *)arg2 source:(id<MTSource>)arg3;
- (void)snoozeAlarmWithIdentifier:(NSString *)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(void (^)(NSError *))arg3 source:(id<MTSource>)arg4;
- (void)snoozeAlarmWithIdentifier:(NSString *)arg1 snoozeDate:(NSDate *)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(void (^)(NSError *))arg4 source:(id<MTSource>)arg5;
- (void)updateAlarm:(MTAlarm *)arg1 withCompletion:(void (^)(NSError *))arg2 source:(id<MTSource>)arg3;
- (void)updateAlarmWithIdentifier:(NSString *)arg1 changeSet:(MTChangeSet *)arg2 withCompletion:(void (^)(NSError *))arg3 source:(id<MTSource>)arg4;
- (void)updateSleepAlarms:(NSArray *)arg1 source:(id<MTSource>)arg2;
- (void)updateSleepAlarmsWithBlock:(void (^)(MTMutableAlarm *))arg1 source:(id<MTSource>)arg2;
@end

