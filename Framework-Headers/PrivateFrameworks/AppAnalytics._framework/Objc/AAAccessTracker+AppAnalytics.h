//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppAnalytics/AAAccessTracker.h>

@interface AAAccessTracker (AppAnalytics)
- (void)explicitSubmitEventType:(Class)arg1 onlyIfTimed:(BOOL)arg2 submitTime:(id)arg3;
- (void)explicitSubmitEventType:(Class)arg1 onlyIfTimed:(BOOL)arg2 submitTime:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)explicitSubmitEventType:(Class)arg1 submitTime:(id)arg2;
- (void)explicitSubmitEventType:(Class)arg1 submitTime:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)explicitSubmitRawEvent:(id)arg1 onlyIfTimed:(BOOL)arg2 submitTime:(id)arg3;
- (void)explicitSubmitRawEvent:(id)arg1 onlyIfTimed:(BOOL)arg2 submitTime:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)explicitSubmitRawEvent:(id)arg1 submitTime:(id)arg2;
- (void)explicitSubmitRawEvent:(id)arg1 submitTime:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)peekDataEventByName:(id)arg1;
- (void)popDataEventByName:(id)arg1;
- (void)popDataEventType:(Class)arg1;
- (void)pushDataEvent:(id)arg1 traits:(id)arg2 file:(id)arg3 line:(long long)arg4;
- (void)submitEventType:(Class)arg1;
- (void)submitEventType:(Class)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitEventType:(Class)arg1 onlyIfTimed:(BOOL)arg2;
- (void)submitEventType:(Class)arg1 onlyIfTimed:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)submitRawEvent:(id)arg1;
- (void)submitRawEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitRawEvent:(id)arg1 onlyIfTimed:(BOOL)arg2;
- (void)submitRawEvent:(id)arg1 onlyIfTimed:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)timeEventType:(Class)arg1;
- (void)timeEventType:(Class)arg1 startTime:(id)arg2;
- (void)timeEventType:(Class)arg1 submitAndRestartWithSession:(BOOL)arg2;
- (void)timeEventType:(Class)arg1 submitAndRestartWithSession:(BOOL)arg2 startTime:(id)arg3;
- (void)timeRawEvent:(id)arg1;
- (void)timeRawEvent:(id)arg1 startTime:(id)arg2;
- (void)timeRawEvent:(id)arg1 submitAndRestartWithSession:(BOOL)arg2;
- (void)timeRawEvent:(id)arg1 submitAndRestartWithSession:(BOOL)arg2 startTime:(id)arg3;
@end

