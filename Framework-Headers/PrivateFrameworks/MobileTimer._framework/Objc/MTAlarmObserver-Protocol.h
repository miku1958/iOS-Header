//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTAlarm, NSArray;
@protocol MTSource;

@protocol MTAlarmObserver <NSObject>
- (void)source:(id<MTSource>)arg1 didAddAlarms:(NSArray *)arg2;
- (void)source:(id<MTSource>)arg1 didChangeNextAlarm:(MTAlarm *)arg2;
- (void)source:(id<MTSource>)arg1 didDismissAlarm:(MTAlarm *)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id<MTSource>)arg1 didFireAlarm:(MTAlarm *)arg2;
- (void)source:(id<MTSource>)arg1 didRemoveAlarms:(NSArray *)arg2;
- (void)source:(id<MTSource>)arg1 didSnoozeAlarm:(MTAlarm *)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id<MTSource>)arg1 didUpdateAlarms:(NSArray *)arg2;
@end

