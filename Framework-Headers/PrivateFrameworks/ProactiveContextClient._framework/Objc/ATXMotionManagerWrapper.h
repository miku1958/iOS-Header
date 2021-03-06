//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionActivity, CMMotionActivityManager, NSMutableDictionary, NSOperationQueue, _PASLock;

@interface ATXMotionManagerWrapper : NSObject
{
    CMMotionActivityManager *_motionActivityManager;
    NSOperationQueue *_motionActivityQueue;
    NSMutableDictionary *_delegatesMonitoringForMotionType;
    CMMotionActivity *_mostRecentActivity;
    _PASLock *_currentMotion;
}

+ (BOOL)hasMotionActivity;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_fetchMotionActivities;
- (CDUnknownBlockType)_motionActivityHandler;
- (id)getCurrentActivity;
- (id)init;
- (void)startUpdatingMotionType:(long long)arg1 forDelegate:(id)arg2;
- (void)stopUpdatingMotionType:(long long)arg1 forDelegate:(id)arg2;
- (void)updateCurrentActivity:(id)arg1;

@end

